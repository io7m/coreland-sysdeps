#include <aio.h>

struct aiocb iocb;

int main(void)
{
  aio_write(&iocb);
  return 0;
}
