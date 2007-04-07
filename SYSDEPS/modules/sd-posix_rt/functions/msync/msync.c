#include <sys/mman.h>

int main(void)
{
  msync(0, 1, MS_ASYNC);
  return 0;
}
