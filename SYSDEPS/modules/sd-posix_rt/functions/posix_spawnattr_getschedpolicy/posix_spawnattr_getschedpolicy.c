#include <spawn.h>
#include <sched.h>

int main(void)
{
  posix_spawnattr_getschedpolicy(0, 0);
  return 0;
}
