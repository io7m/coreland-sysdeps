#include <unistd.h>

int main(void)
{
  ftruncate(1, 0);
  return 0;
}
