#include <net/socket.h>

int main()
{
  char buf[128];
  int ret;
  fd_set rfds;
  struct timeval tv;

  memset(&tv, 0, sizeof(tv));
  FD_ZERO(&rfds);
  FD_SET(0, &rfds);

  for (;;) {
    ret = select(1, &rfds, 0, 0, &tv);
    if (ret == -1) { perror("select"); return 111; }
    if (ret == 0) {
      printf("no data\n");
      continue;
    }
    if (FD_ISSET(0, &rfds)) {
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
  }

  return 0;
}
