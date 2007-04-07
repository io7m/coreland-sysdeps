#include <stdlib.h>

int main(void)
{
  posix_memalign(0, 1, 1);
  return 0;
}
