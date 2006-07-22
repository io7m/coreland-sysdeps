#include <poll.h>

void snooze()
{
  usleep(100000);
}

int main()
{
  char buf[128];
  int ret;
  struct pollfd pfd;

  pfd.fd = 0;
  pfd.events = POLLIN | POLLHUP; /* POLLHUP: linux + solaris bug */

  for (;;) {
    ret = poll(&pfd, 1, 0);
    if (ret == -1) { perror("poll"); return 111; }
    if (ret == 0) {
      printf("no data\n");
      snooze();
      continue;
    }

    printf("got data\n");
    ret = read(0, buf, 128);
    if (ret == -1) { perror("read"); return 112; }
    if (ret == 0) {
      printf("eof\n");
      break;
    }
    buf[ret - 1] = 0;
    printf("%s\n", buf);
  }

  return 0;
}
