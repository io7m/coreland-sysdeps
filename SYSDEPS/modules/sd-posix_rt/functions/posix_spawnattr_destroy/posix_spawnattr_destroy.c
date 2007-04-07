#include <spawn.h>

int main(void)
{
  posix_spawnattr_destroy(0);
  return 0;
}
