#include <spawn.h>

int main(void)
{
  posix_spawnattr_getpgroup(0, 0);
  return 0;
}
