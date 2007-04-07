#include <spawn.h>
#include <sched.h>

int main(void)
{
  posix_spawnattr_setschedparam(0, 0);
  return 0;
}
