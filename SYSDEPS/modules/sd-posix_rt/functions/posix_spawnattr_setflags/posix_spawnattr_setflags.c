#include <spawn.h>

int main(void)
{
  posix_spawnattr_setflags(0, 0);
  return 0;
}
