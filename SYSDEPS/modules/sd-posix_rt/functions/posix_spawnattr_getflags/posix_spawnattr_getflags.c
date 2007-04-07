#include <spawn.h>

int main(void)
{
  posix_spawnattr_getflags(0, 0);
  return 0;
}
