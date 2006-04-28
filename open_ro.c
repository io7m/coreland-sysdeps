#include "open.h"

int open_ro(const char *f)
{
  return open(f, O_RDONLY | O_NONBLOCK);
}
