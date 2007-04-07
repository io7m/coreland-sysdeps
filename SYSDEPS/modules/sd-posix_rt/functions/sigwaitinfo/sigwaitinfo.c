#include <signal.h>

int main(void)
{
  sigwaitinfo(0, 0);
  return 0;
}
