#include <sched.h>

int main(void)
{
  sched_getparam(0, 0);
  return 0;
}
