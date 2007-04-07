#include <sys/mman.h>

int main(void)
{
  mprotect(0, 1, PROT_NONE | PROT_READ | PROT_WRITE);
  return 0;
}
