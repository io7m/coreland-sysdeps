#include <signal.h>
#include <time.h>

int main(void)
{
  timer_create(CLOCK_REALTIME, 0, 0);
  return 0;
}
