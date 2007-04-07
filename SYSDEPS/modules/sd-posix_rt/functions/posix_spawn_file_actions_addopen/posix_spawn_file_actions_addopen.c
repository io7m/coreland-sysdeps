#include <spawn.h>

int main(void)
{
  posix_spawn_file_actions_addopen(0, 1, 0, 0, 0644);
  return 0;
}
