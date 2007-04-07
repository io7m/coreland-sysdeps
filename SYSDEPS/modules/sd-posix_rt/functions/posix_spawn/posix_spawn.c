#include <spawn.h>

int main(void)
{
  posix_spawn(0, 0, 0, 0, 0, 0);
  return 0;
}
