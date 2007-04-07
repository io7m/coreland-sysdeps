#include <sys/mman.h>

int main(void)
{
  mlockall(MCL_CURRENT);
  return 0;
}
