#include <sys/types.h>
#include <sys/mman.h>
#include <stdio.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/mman.h>

int main()
{
  void *map;
  int fd;

  fd = open("trymmap1.c", O_RDONLY);
  if (fd == -1) {
    perror("open");
    return 1;
  }
   
  map = mmap(0, 4096, PROT_READ, MAP_PRIVATE, fd, 0);
  if (map == MAP_FAILED) {
    perror("mmap");
    return 1;
  } else return 0;
}
