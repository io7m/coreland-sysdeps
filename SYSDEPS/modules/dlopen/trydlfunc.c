#include <dlfcn.h>

int main()
{
  void *h;
  dlfunc_t f;

  f = dlfunc(h, "symbol");
  return 0;
}
