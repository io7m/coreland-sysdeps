#include <mqueue.h>
#include <time.h>

int main(void)
{
  mqd_t mqdes;
  char buf[128];
  unsigned int prio;
  struct timespec t;

  mq_timedreceive(mqdes, buf, 128, &prio, &t);
  return 0;
}
