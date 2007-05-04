#include <sys/epoll.h>
#include <stdio.h>

int main()
{
  int epfd;
  int ind;
  int nfds;
  int fd;
  int ret;
  struct epoll_event ev;
  struct epoll_event evs;
  char buf[128];

  epfd = epoll_create(1);
  if (epfd == -1) { perror("epoll_create"); return 111; }

  ev.events = EPOLLIN | EPOLLERR;
  ev.data.fd = 0;
  ret = epoll_ctl(epfd, EPOLL_CTL_ADD, 0, &ev);
  if (ret == -1) { perror("epoll_ctl"); return 112; }

  ret = epoll_wait(epfd, &evs, 1, 0);
  if (ret == -1) { perror("epoll_wait"); return 113; }
  if (ret == 0) {
    printf("no data\n");
    return 0;
  }
  fd = evs.data.fd;
  ret = read(fd, buf, 128);
  if (ret == -1) { perror("read"); return 114; }
  if (ret == 0) {
    printf("eof\n");
    return 0;
  }
  printf("got data\n");
  buf[ret - 1] = 0;
  printf("%s\n", buf);
}
