#include <aio.h>

struct aiocb iocb;

int main(void)
{
  aio_read(&iocb);
  return 0;
}
