#include <time.h>

int main(void)
{
  struct timespec t1;
  struct timespec t2;

  nanosleep(&t1, &t2);
  return 0;
}
