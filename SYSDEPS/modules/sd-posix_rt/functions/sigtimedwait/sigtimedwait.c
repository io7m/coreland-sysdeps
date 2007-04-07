#include <signal.h>

int main(void)
{
  sigtimedwait(0, 0, 0);
  return 0;
}
