#include <mqueue.h>

int main(void)
{
  mqd_t mqdes;
  char buf[128];
  mq_send(mqdes, buf, 128, 1);
  return 0;
}
