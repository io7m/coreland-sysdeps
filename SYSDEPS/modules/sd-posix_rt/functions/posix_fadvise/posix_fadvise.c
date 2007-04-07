#include <fcntl.h>

int main(void)
{
  posix_fadvise(1, 0, 0, POSIX_FADV_NORMAL);
  return 0;
}
