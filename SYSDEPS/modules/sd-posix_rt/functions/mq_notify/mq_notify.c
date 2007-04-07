#include <mqueue.h>

int main(void)
{
  mqd_t mqdes;
  struct sigevent sig;
  mq_notify(mqdes, &sig);
  return 0;
}
