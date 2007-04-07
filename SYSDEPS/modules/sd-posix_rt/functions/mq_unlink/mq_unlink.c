#include <mqueue.h>

int main(void)
{
  mq_unlink("MESSAGE_QUEUE");
  return 0;
}
