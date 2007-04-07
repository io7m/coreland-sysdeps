#include <spawn.h>

int main(void)
{
  posix_spawn_file_actions_addclose(0, 1);
  return 0;
}
