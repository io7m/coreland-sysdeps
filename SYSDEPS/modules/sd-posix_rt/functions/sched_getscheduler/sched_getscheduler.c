#include <sched.h>

int main(void)
{
  sched_getscheduler(0);
  return 0;
}
