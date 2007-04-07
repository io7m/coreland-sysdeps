#include <time.h>

int main(void)
{
  struct timespec ts;
  clock_getres(CLOCK_REALTIME, &ts);
  return 0;
}
