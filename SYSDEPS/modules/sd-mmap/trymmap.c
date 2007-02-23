#include <sys/types.h>
#include <sys/mman.h>

int main()
{
  void *map;
  map = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);

  return (map == MAP_FAILED);
}
