#include <signal.h>
#include <spawn.h>

int main(void)
{
  posix_spawnattr_getsigdefault(0, 0);
  return 0;
}
