#include <stdio.h>

#include "../ch_flags.h"
#include "../open.h"
#include "../uint32.h"

extern int close();

int main()
{
  int fd;
  uint32 f;
  uint32 gf;

  fd = open_ro("testdata/ch_flags1");
  if (fd == -1) {
    perror("open_ro");
    return 2;
  }

  f = 0;
  f |= CF_UIMMUT;
  f |= CF_NODUMP;

  if (fch_flags(fd, f) == -1) {
    perror("fch_flags");
    return 1;
  }
  if (fget_flags(fd, &gf) == -1) {
    perror("get_flags");
    return 1;
  }
  if (gf != f) {
    printf("gf == %u, f == %u\n", gf, f);
    return 1;
  }

  f = 0;
  if (fch_flags(fd, f) == -1) {
    perror("fch_flags");
    return 1;
  }

  close(fd);
  return 0;
}
