#include <sys/time.h>

struct timeval tv;

int main(void)
{
  int ret;
  fd_set rfds;

  FD_ZERO(&rfds);
  FD_SET(0, &rfds);

  for (;;) {
    ret = select(1, &rfds, 0, 0, &tv);
    if (ret == -1) { return 111; }
    if (ret == 0) {
      continue;
    }
  }

  return 0;
}
