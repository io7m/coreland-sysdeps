#include <aio.h>

struct aiocb iocb;

int main(void)
{
  aio_return(&iocb);
  return 0;
}
