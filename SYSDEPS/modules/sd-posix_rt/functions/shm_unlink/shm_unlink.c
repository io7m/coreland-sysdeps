#include <sys/mman.h>

int main(void)
{
  shm_unlink("SHARED_MEMORY");
  return 0;
}
