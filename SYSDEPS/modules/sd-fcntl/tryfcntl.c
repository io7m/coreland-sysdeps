#include <fcntl.h>

int main()
{
  if (fcntl(1, F_SETFD, FD_CLOEXEC) == -1) return 112;
  return 0;
}
