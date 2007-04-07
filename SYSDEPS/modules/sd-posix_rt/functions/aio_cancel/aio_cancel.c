#include <aio.h>

struct aiocb iocb;

int main(void)
{
  aio_cancel(1, &iocb);
  return 0;
}
