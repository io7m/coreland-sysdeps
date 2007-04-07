#include <aio.h>

struct aiocb iocbs[10];
struct timespec ts;

int main(void)
{
  aio_suspend(iocbs, 10, &ts);
  return 0;
}
