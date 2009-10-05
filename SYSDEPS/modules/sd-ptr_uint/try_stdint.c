#include <stdint.h>

int main(void)
{
  uintptr_t n;

  n = 0; /* Pedantic compilers require assignment. */
  return (int) n;
}
