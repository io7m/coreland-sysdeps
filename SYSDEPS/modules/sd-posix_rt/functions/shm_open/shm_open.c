#include <sys/mman.h>

int main(void)
{
  shm_open("SHARED_MEMORY", 0, 0644);
  return 0;
}
