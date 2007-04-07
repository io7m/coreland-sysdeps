#include <sys/mman.h>

int main(void)
{
  mmap(0, 1, PROT_READ | PROT_WRITE | PROT_EXEC, 0, 0, 0);
  return 0;
}
