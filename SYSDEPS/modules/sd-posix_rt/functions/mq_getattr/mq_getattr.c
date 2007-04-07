#include <mqueue.h>

int main(void)
{
  mqd_t mqdes;
  struct mq_attr ma;
  mq_getattr(mqdes, &ma);
  return 0;
}
