#include <sys/mman.h>

int main(void)
{
  mlock(0, 100);
  return 0;
}
