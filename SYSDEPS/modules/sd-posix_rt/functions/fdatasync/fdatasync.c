#include <unistd.h>

int main(void)
{
  fdatasync(1);
  return 0;
}
