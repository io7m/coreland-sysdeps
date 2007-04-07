#include <aio.h>

struct aiocb iocbs[10];
struct sigevent sig;

int main(void)
{
  lio_listio(0, iocbs, 10, &sig);
  return 0;
}
