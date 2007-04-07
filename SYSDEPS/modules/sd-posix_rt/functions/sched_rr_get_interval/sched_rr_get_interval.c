#include <sched.h>

int main(void)
{
  sched_rr_get_interval(0, 0);
  return 0;
}
