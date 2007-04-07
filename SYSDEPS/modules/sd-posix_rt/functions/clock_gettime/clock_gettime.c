#include <time.h>

int main(void)
{
  struct timespec t1;
  clock_gettime(CLOCK_REALTIME, &t1);
  return 0;
}
