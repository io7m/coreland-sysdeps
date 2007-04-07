#include <mqueue.h>

int main(void)
{
  mqd_t mqdes;
  struct mq_attr m1;
  struct mq_attr m2;
  mq_setattr(mqdes, &m1, &m2);
  return 0;
}
