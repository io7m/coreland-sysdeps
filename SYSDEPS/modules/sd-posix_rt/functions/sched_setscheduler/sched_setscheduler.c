#include <sched.h>

int main(void)
{
  sched_setscheduler(0, 0, 0);
  return 0;
}
