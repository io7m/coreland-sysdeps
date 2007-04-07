#include <sys/mman.h>

int main(void)
{
  posix_madvise(0, 1, POSIX_MADV_NORMAL);
  return 0;
}
