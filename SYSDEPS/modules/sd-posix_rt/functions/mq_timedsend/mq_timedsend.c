#include <mqueue.h>
#include <time.h>

int main(void)
{
  mqd_t mqdes;
  char buf[128];
  struct timespec t;
  
  mq_timedsend(mqdes, buf, 128, 1, &t);
  return 0;
}
