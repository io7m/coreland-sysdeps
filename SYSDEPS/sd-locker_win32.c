/*
 * Win32 version.
 */

/* Require >= Windows 2000 */
#ifndef WINVER
#  define WINVER 0x0500
#endif

#include <windows.h>

#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static OVERLAPPED  lock_overlap;
static const char *lock_file;
static HANDLE      lock_handle;
static DWORD       exit_code = EXIT_SUCCESS;

#ifdef SYSDEPS_DEBUGGING
static void
lock_announce (const char *message)
{
  assert (message != NULL);
  assert (lock_file != NULL);

  (void) fprintf (stderr, "sd-locker: %s - %s\n", lock_file, message);
  (void) fflush (stderr);
}
#else
static void
lock_announce (const char *message)
{
  assert (message != NULL);
}
#endif

/*
 * Lock handle, wait indefinitely to acquire lock.
 */

static BOOL
file_wait_lock (HANDLE file)
{
  BOOL lock_result;

  lock_announce ("acquiring");

  lock_overlap.hEvent = file;
  lock_result = LockFileEx
   (file,
    LOCKFILE_EXCLUSIVE_LOCK, /* Exclusive lock, wait for lock to succeed. */
    0,                       /* Reserved. */
    0,                       /* Low 32 bits of range to lock. */
    0xffffffff,              /* High 32 bits of range to lock. */
    &lock_overlap);

  lock_announce ("acquired");
  return lock_result;
}

/*
 * Unlock handle.
 */

static BOOL
file_wait_unlock (HANDLE file)
{
  BOOL unlock_result;

  lock_announce ("releasing");
  unlock_result = UnlockFileEx
   (file,
    0,              /* Reserved. */
    0,              /* Low 32 bits of range to lock. */
    0xffffffff,     /* High 32 bits of range to unlock. */
    &lock_overlap);

  lock_announce ("released");
  return unlock_result;
}

static void
usage (void)
{
  (void) fprintf (stderr, "sd-locker: usage: lock-file command [args]\n");
  exit (EXIT_FAILURE);
}

/*
 * Fetch current error message.
 */

static const char *
error_message (void)
{
  char *buffer = NULL;
  DWORD error_code = GetLastError ();

  FormatMessage
   (FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_ALLOCATE_BUFFER,
    NULL,
    error_code,
    0,
    (LPTSTR) &buffer,
    0,
    0);

  assert (buffer != NULL);
  return buffer;
}

static void
die (const char *message)
{
  (void) fprintf (stderr, "sd-locker: fatal: %s - %s\n", message, error_message ());
  exit (EXIT_FAILURE);
}

static void
die_unlock (const char *message)
{
  (void) fprintf (stderr, "sd-locker: fatal: %s - %s\n", message, error_message ());
  (void) file_wait_unlock (lock_handle);
  (void) CloseHandle (lock_handle);
  exit (EXIT_FAILURE);
}

#ifdef SYSDEPS_DEBUGGING
static void
dump_arguments (int argc, char *argv[])
{
  int index;

  assert (lock_file != NULL);

  for (index = 0; index < argc; ++index)
    (void) fprintf (stderr, "sd-locker: %s - [%d] %s\n", lock_file, index, argv [index]);

  (void) fflush (stderr);
}
#else
static void
dump_arguments (int argc, char *argv[])
{
  int index;

  for (index = 0; index < argc; ++index)
    assert (argv [index] != NULL);
}
#endif

#define POSIX_SHELL_PREFIX      "sh -c \""
#define POSIX_SHELL_PREFIX_SIZE (sizeof (POSIX_SHELL_PREFIX) - 1)
#define POSIX_SHELL_QUOTE       "'"
#define POSIX_SHELL_QUOTE_SIZE  (sizeof (POSIX_SHELL_QUOTE) - 1)

static char *
convert_command (int argc, char *argv[])
{
  size_t length_total;
  size_t length_param;
  size_t length_used;
  char *buffer;
  char *ptr;
  int index;

  /* Calculate required command line length. */
  length_used  = 0;
  length_total = POSIX_SHELL_PREFIX_SIZE + POSIX_SHELL_QUOTE_SIZE;

  /* Storage required for each parameter includes two quotes and a space */
  for (index = 0; index < argc; ++index)
    length_total += POSIX_SHELL_QUOTE_SIZE + strlen (argv [index]) + POSIX_SHELL_QUOTE_SIZE + sizeof (' ');

  /* Allocate space for command line. */
  assert (length_total > POSIX_SHELL_PREFIX_SIZE);
  buffer = malloc (length_total);
  if (buffer == NULL) return NULL;

  /* Copy POSIX shell prefix to command line. */
  memcpy (buffer, POSIX_SHELL_PREFIX, POSIX_SHELL_PREFIX_SIZE);
  ptr         = buffer + POSIX_SHELL_PREFIX_SIZE;
  length_used = POSIX_SHELL_PREFIX_SIZE;

  /* Copy each string into buffer from argument vector. */
  for (index = 0; index < argc; ++index) {
    length_param = strlen (argv [index]);

    /* Open quote. */
    memcpy (ptr, POSIX_SHELL_QUOTE, POSIX_SHELL_QUOTE_SIZE);
    ptr         += POSIX_SHELL_QUOTE_SIZE;
    length_used += POSIX_SHELL_QUOTE_SIZE;

    /* Copy argument. */
    memcpy (ptr, argv [index], length_param);
    ptr         += length_param;
    length_used += length_param;

    /* Close quote. */
    memcpy (ptr, POSIX_SHELL_QUOTE, POSIX_SHELL_QUOTE_SIZE);
    ptr         += POSIX_SHELL_QUOTE_SIZE;
    length_used += POSIX_SHELL_QUOTE_SIZE;

    /* Terminating space. */
    *ptr         = ' ';
    ptr         += 1;
    length_used += 1;
  }

  /* End quoting. */
  *ptr         = '"';
  ptr         += 1;
  length_used += 1;

  /* Null terminate. */
  *ptr         = 0;
  length_used += 1;

  /* Various buffer assertions. */
  assert (buffer [length_used - 1] == 0);
  assert (length_used <= length_total);

  return buffer;
}

static void
execute (int argc, char *argv[])
{
  STARTUPINFO         info_startup;
  PROCESS_INFORMATION info_process;
  char *command;
  BOOL exec_result;
  DWORD wait_result;

  ZeroMemory (&info_startup, sizeof (info_startup));
  ZeroMemory (&info_process, sizeof (info_process));
  info_startup.cb = sizeof (info_startup);

  dump_arguments (argc, argv);

  command = convert_command (argc, argv);

  exec_result = CreateProcess
    (NULL,                  /* Command name. NULL == Use command line. */
     command,               /* Command line. */
     NULL,                  /* Process security attributes. */
     NULL,                  /* Thread security attributes. */
     TRUE,                  /* Inherit file handles. */
     0,                     /* Creation flags. */
     NULL,                  /* Environment. */
     NULL,                  /* Current directory. */
     &info_startup,
     &info_process);
  if (exec_result == FALSE) die_unlock ("create_process");

  wait_result = WaitForSingleObject (info_process.hProcess, INFINITE);
  /* XXX: Do something with wait_result here? */

  if (GetExitCodeProcess (info_process.hProcess, &exit_code) == FALSE) die_unlock ("exit_code");
  if (CloseHandle (info_process.hProcess) == FALSE) die_unlock ("close_process");
  if (CloseHandle (info_process.hThread) == FALSE) die_unlock ("close_thread");
}

int
main (int argc, char *argv[])
{
  if (argc < 3) usage ();

  lock_file = argv[1];
  lock_handle = CreateFile
    (lock_file,
     GENERIC_READ | GENERIC_WRITE,
     FILE_SHARE_READ | FILE_SHARE_WRITE,
     NULL,
     OPEN_ALWAYS,
     FILE_ATTRIBUTE_NORMAL,
     NULL);

  if (lock_handle == INVALID_HANDLE_VALUE) die ("create_file");
  if (file_wait_lock (lock_handle) == FALSE) die ("lock");

  execute (argc - 2, argv + 2);

  if (file_wait_unlock (lock_handle) == FALSE) die_unlock ("unlock");
  if (CloseHandle (lock_handle) == FALSE) die_unlock ("close_handle");

  return exit_code;
}
