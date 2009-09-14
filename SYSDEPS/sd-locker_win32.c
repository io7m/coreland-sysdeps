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

static BOOL
fd_lock_w (HANDLE file)
{
  return LockFile (file, 0, 0, 0, 0);
}

static BOOL
fd_unlock_w (HANDLE file)
{
  return UnlockFile (file, 0, 0, 0, 0);
}

static void
usage (void)
{
  (void) fprintf (stderr, "sd-locker: usage: lock-file command [args]\n");
  exit (EXIT_FAILURE);
}

static const char *lock_file;
static HANDLE      lock_handle;

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
die (int code, const char *message)
{
  (void) fprintf (stderr, "sd-locker: fatal: %s - %s\n", message, error_message ());
  exit (code);
}

static void
die_unlock (int code, const char *message)
{
  (void) fprintf (stderr, "sd-locker: fatal: %s - %s\n", message, error_message ());
  (void) fd_unlock_w (lock_handle);
  exit (code);
}

#define POSIX_SHELL_PREFIX "sh -c \""

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
  length_total = sizeof (POSIX_SHELL_PREFIX) + sizeof ('"');
  for (index = 0; index < argc; ++index)
    length_total += strlen (argv [index]) + 1;

  /* Allocate space for command line. */
  assert (length_total > sizeof (POSIX_SHELL_PREFIX));
  buffer = malloc (length_total);
  if (buffer == NULL) return NULL;

  /* Copy POSIX shell prefix to command line. */
  memcpy (buffer, POSIX_SHELL_PREFIX, sizeof (POSIX_SHELL_PREFIX) - 1);
  ptr         = buffer + sizeof (POSIX_SHELL_PREFIX) - 1;
  length_used = sizeof (POSIX_SHELL_PREFIX) - 1;

  /* Copy each string into buffer from argument vector. */
  for (index = 0; index < argc; ++index) {
    length_param = strlen (argv [index]);
    memcpy (ptr, argv [index], length_param);
    ptr         += length_param;
    length_used += length_param;
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

static DWORD exit_code = EXIT_SUCCESS;

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
  if (exec_result == FALSE) die_unlock (EXIT_FAILURE, "create_process");

  wait_result = WaitForSingleObject (info_process.hProcess, INFINITE);
  /* XXX: Do something with wait_result here? */

  if (GetExitCodeProcess (info_process.hProcess, &exit_code) == FALSE) die_unlock (EXIT_FAILURE, "exit_code");
  if (CloseHandle (info_process.hProcess) == FALSE) die_unlock (EXIT_FAILURE, "close_handle");
  if (CloseHandle (info_process.hThread) == FALSE) die_unlock (EXIT_FAILURE, "close_handle");
}

int
main (int argc, char *argv[])
{
  if (argc < 3) usage ();

  lock_file = argv[1];
  lock_handle = CreateFile
    (lock_file, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_ALWAYS,
     FILE_ATTRIBUTE_NORMAL, NULL);

  if (lock_handle == INVALID_HANDLE_VALUE) die (EXIT_FAILURE, "close");
  if (fd_lock_w (lock_handle) == FALSE)    die (EXIT_FAILURE, "lock");

  execute (argc - 2, argv + 2);

  if (fd_unlock_w (lock_handle) == FALSE) die_unlock (EXIT_FAILURE, "unlock");
  if (CloseHandle (lock_handle) == FALSE) die_unlock (EXIT_FAILURE, "close");

  return exit_code;
}
