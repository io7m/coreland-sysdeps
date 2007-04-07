#include <semaphore.h>

int main(void)
{
  sem_unlink(0);
  return 0;
}
