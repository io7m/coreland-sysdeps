#include <semaphore.h>
#include <time.h>

int main(void)
{
  sem_timedwait(0, 0);
  return 0;
}
