#include <mqueue.h>

int main(void)
{
  mqd_t mqdes;
  char buf[128];
  unsigned int prio;
  mq_receive(mqdes, buf, 128, &prio);
  return 0;
}
