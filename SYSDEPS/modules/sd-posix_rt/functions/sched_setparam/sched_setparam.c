#include <sched.h>

int main(void)
{
  sched_setparam(0, 0);
  return 0;
}
