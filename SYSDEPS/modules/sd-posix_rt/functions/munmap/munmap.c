#include <sys/mman.h>

int main(void)
{
  munmap(0, 1);
  return 0;
}
