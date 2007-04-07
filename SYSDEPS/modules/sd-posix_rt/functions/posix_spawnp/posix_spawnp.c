#include <spawn.h>

int main(void)
{
  posix_spawnp(0, 0, 0, 0, 0, 0);
  return 0;
}
