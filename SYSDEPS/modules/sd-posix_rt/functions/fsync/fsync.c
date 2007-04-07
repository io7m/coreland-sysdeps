#include <unistd.h>

int main(void)
{
  fsync(1);
  return 0;
}
