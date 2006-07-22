#include <sys/types.h>
#include <sys/event.h>
#include <sys/time.h>

#include <stdio.h>

void snooze()
{
  usleep(100000);
}

int main()
{
  char buf[128];
  int kq;
  int ret;
  struct kevent ke;
  struct timespec t;

  kq = kqueue();
  if (kq == -1) { perror("kqueue"); return 111; }

  bzero(&ke, sizeof(ke));
  EV_SET(&ke, 0, EVFILT_READ, EV_ADD, 0, 1, 0);
  ret = kevent(kq, &ke, 1, 0, 0, 0);
  if (ret == -1) { perror("kevent"); return 112; }

  for (;;) {
    bzero(&ke, sizeof(ke));
    bzero(&t, sizeof(t));

    ret = kevent(kq, 0, 0, &ke, 1, &t);
    if (ret == -1) { perror("kevent(2)"); return 113; }
    if (ret == 0) {
      printf("no data\n");
      snooze();
      continue;
    }

    printf("got data\n");
    ret = read(0, buf, 128);
    if (ret == -1) { perror("read"); return 114; }
    if (ret == 0) {
      printf("eof\n");
      break;
    }
    buf[ret - 1] = 0;
    printf("%s\n", buf);
  }

  return 0;
}
