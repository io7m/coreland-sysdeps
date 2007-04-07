#include <spawn.h>

int main(void)
{
  posix_spawn_file_actions_destroy(0);
  return 0;
}
