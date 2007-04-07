#include <time.h>

int main(void)
{
  struct timespec t1;
  clock_settime(CLOCK_REALTIME, &t1);
  return 0;
}
