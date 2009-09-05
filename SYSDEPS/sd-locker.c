#include <sys/types.h>
#include <sys/wait.h>

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int
fd_lock_w (int fd)
  /*@globals  errno @*/
  /*@modifies errno @*/
{
  struct flock fl;

  memset (&fl, 0, sizeof (fl));

  fl.l_type   = (short) F_WRLCK;
  fl.l_whence = (short) SEEK_SET;
  fl.l_start  = 0;
  fl.l_len    = 0;
  fl.l_pid    = getpid();

  return fcntl (fd, F_SETLKW, &fl);
}

static int
fd_unlock_w (int fd)
  /*@globals  errno @*/
  /*@modifies errno @*/
{
  struct flock fl;

  memset (&fl, 0, sizeof (fl));

  fl.l_type   = (short) F_UNLCK;
  fl.l_whence = (short) SEEK_SET;
  fl.l_start  = 0;
  fl.l_len    = 0;
  fl.l_pid    = getpid();

  return fcntl (fd, F_SETLKW, &fl);
}

static void
usage (void)
{
  (void) fprintf (stderr, "sd-locker: usage: lock-file command [args]\n");
  exit (EXIT_FAILURE);
}

static const char *lock_file;
static int         lock_fd;

static void
die (int code, const char *message)
  /*@globals  errno, stderr @*/
  /*@modifies errno, stderr @*/
{
  (void) fprintf (stderr, "sd-locker: fatal: %s - %s\n", message, strerror (errno));
  exit (code);
}

static void
die_unlock (int code, const char *message)
  /*@globals  errno, lock_fd, lock_file, stderr @*/
  /*@modifies errno, stderr                     @*/
{
  (void) fprintf (stderr, "sd-locker: fatal: %s - %s\n", message, strerror (errno));

  (void) unlink      (lock_file);
  (void) fd_unlock_w (lock_fd);
  (void) close       (lock_fd);

  exit (code);
}

int
main (int argc, char *argv[])
  /*@globals  errno, lock_fd, lock_file, stderr @*/
  /*@modifies errno, lock_fd, lock_file, stderr @*/
{
  int status;
  int code = 0;
  pid_t process_id;

  if (argc < 3) usage ();

  lock_file = argv[1];
  lock_fd   = open (lock_file, O_WRONLY | O_TRUNC | O_CREAT, 0600);

  if (lock_fd == -1)             die (EXIT_FAILURE, "open");
  if (fd_lock_w (lock_fd) == -1) die (EXIT_FAILURE, "lock");

  process_id = fork ();
  if (process_id == (pid_t) -1) die_unlock (EXIT_FAILURE, "fork");
  if (process_id == 0) {
    ++argv;
    ++argv;
    if (close (lock_fd) == -1)      die (EXIT_FAILURE, "close");
    if (execvp (*argv, argv) == -1) die (EXIT_FAILURE, "execve");
  } else {
    if (waitpid (process_id, &status, 0) == (pid_t) -1) die_unlock (EXIT_FAILURE, "waitpid");
    code = WEXITSTATUS (status);
  }

  if (fd_unlock_w (lock_fd) == -1) die_unlock (EXIT_FAILURE, "unlock");
  if (close (lock_fd) == -1)       die_unlock (EXIT_FAILURE, "close");
  return code;
}
