#include <time.h>

int main(void)
{
  struct timespec t1;
  struct timespec t2;
  clock_nanosleep(CLOCK_REALTIME, 0, &t1, &t2);
  return 0;
}
