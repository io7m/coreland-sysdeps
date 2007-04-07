#include <aio.h>

struct aiocb iocb;

int main(void)
{
  aio_fsync(1, &iocb);
  return 0;
}
