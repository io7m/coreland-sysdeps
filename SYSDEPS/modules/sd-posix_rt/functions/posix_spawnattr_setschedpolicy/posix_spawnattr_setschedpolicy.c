#include <spawn.h>
#include <sched.h>

int main(void)
{
  posix_spawnattr_setschedpolicy(0, 0);
  return 0;
}
