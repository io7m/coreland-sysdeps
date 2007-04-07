#include <spawn.h>

int main(void)
{
  posix_spawnattr_setpgroup(0, 0);
  return 0;
}
