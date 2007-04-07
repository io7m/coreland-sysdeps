#include <aio.h>

struct aiocb iocb;

int main(void)
{
  aio_error(&iocb);
  return 0;
}
