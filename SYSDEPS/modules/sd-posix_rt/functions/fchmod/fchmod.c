#include <sys/stat.h>

int main(void)
{
  fchmod(1, 0644);
  return 0;
}
