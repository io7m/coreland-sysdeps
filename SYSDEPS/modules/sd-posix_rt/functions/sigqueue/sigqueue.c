#include <signal.h>

int main(void)
{
  sigqueue(0, 0, 0);
  return 0;
}
