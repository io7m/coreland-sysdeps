#include <mqueue.h>

int main(void)
{
  mqd_t mq;
  mq_open("MESSAGE_QUEUE", O_RDONLY);
  return 0;
}
