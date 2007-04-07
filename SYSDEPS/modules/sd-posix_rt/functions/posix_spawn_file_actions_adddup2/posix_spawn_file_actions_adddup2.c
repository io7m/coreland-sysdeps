#include <spawn.h>

int main(void)
{
  posix_spawn_file_actions_adddup2(0, 1, 2);
  return 0;
}
