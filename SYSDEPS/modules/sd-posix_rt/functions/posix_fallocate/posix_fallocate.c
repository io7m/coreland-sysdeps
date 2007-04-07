#include <fcntl.h>

int main(void)
{
  posix_fallocate(1, 0, 0);
  return 0;
}
