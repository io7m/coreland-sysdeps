/*
 * Win32 version.
 */

#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Require >= Windows 2000 */
#ifndef WINVER
#  define WINVER 0x0500
#endif

#include <windows.h>

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

static char *
error_message (void)
{
  char *error_buffer = NULL;
  FormatMessage
   (FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
    NULL,
    GetLastError (),
    0,
    (LPTSTR) &error_buffer,
    0,
    0);

  assert (error_buffer != NULL);
  return error_buffer;
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

static char *
flatten_command (int argc, char *argv[])
{
  size_t length_total;
  size_t length_param;
  char *buffer;
  char *ptr;
  int index;

  /* Calculate total length of string array when flattened, plus NULL,
   * plus a space between each argument.
   */

  length_total = 1;
  for (index = 0; index < argc; ++index)
    length_total += strlen (argv [index]) + 1;

  assert (length_total > 1);

  /* Allocate buffer. */
  buffer = malloc (length_total);
  if (buffer == NULL) return NULL;

  /* Flatten array into buffer. */
  ptr = buffer;
  for (index = 0; index < argc; ++index) {
    length_param = strlen (argv [index]);
    memcpy (ptr, argv [index], length_param);
    ptr += length_param;
    *ptr = ' ';
    ptr += 1;
  }

  assert (ptr == buffer + length_total - 1);

  /* Null terminate. */
  *ptr = 0;
  return buffer;
}

static void
execute (int argc, char *argv[])
{
  STARTUPINFO         startup_info;
  PROCESS_INFORMATION process_info;
  char                *flattened_line = NULL;
  int                 index;

  flattened_line = flatten_command (argc, argv);
  if (flattened_line == NULL) die_unlock (EXIT_FAILURE, "malloc");

  ZeroMemory (&startup_info, sizeof (startup_info));
  ZeroMemory (&process_info, sizeof (process_info));

  startup_info.cb = sizeof (startup_info);

  if (FALSE == CreateProcess
   (flattened_line,        /* Command name. */
    NULL,                  /* Command line (points to flattened_line if NULL). */
    NULL,                  /* Process security attributes. */
    NULL,                  /* Thread security attributes. */
    TRUE,                  /* Inherit file handles. */
    NORMAL_PRIORITY_CLASS, /* Process priority. */
    NULL,                  /* Environment. */
    NULL,                  /* Current directory. */
    &startup_info,         /* Process startup info. */
    &process_info))        /* Process information. */
  {
    die_unlock (EXIT_FAILURE, "execute");
  }

  if (WaitForSingleObject (process_info.hProcess, INFINITE) == WAIT_FAILED) die_unlock (EXIT_FAILURE, "wait");
  if (CloseHandle (process_info.hProcess) == FALSE) die_unlock (EXIT_FAILURE, "close_handle");
  if (CloseHandle (process_info.hThread) == FALSE)  die_unlock (EXIT_FAILURE, "close_handle");
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
  return EXIT_SUCCESS;
}
