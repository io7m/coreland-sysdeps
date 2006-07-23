#include <sys/epoll.h>
#include <stdio.h>

void snooze()
{
  usleep(100000);
}

int main()
{
  int epfd;
  int ind;
  int nfds;
  int fd;
  int ret;
  struct epoll_event ev;
  struct epoll_event *evs;
  char buf[128];

  epfd = epoll_create(EPOLL_QUEUE_LEN);
  if (epfd == -1) { perror("epoll_create"); return 1; }

  ev.events = EPOLLIN | EPOLLERR;
  ev.data.fd = 0;
  ret = epoll_ctl(epfd, EPOLL_CTL_ADD, 0, &ev);
  if (ret == -1) { perror("epoll_ctl"); return 1; }

  for (;;) {
    ret = epoll_wait(epfd, evs, MAX_EVENTS, 0);
    if (ret == -1) { perror("epoll_wait"); return 1; }
    if (ret == 0) {
      printf("no data\n");
      snooze();
      continue;
    }
    fd = evs[0].data.fd;
    ret = read(fd, buf, 128);
    if (ret == -1) { perror("read"); return 1; }
    if (ret == 0) {
      printf("eof\n");
      return 0;
    }
    printf("got data\n");
    buf[ret - 1];
    printf("%s\n", buf);
  }
}
