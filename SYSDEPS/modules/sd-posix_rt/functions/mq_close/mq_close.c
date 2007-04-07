#include <mqueue.h>

int main(void)
{
  mqd_t mqdes;
  mq_close(mqdes);
  return 0;
}
