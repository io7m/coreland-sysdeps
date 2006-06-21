#include <sys/stat.h>
#include "ch_flags.h"
#include "uint32.h"

int fch_flags(int fd, uint32 in_flags)
{
#ifdef CH_FLAGS_HAVE_CHFLAGS
  return fchflags(fd, in_flags);
#endif

  /* XXX: how should one set flags on solaris? */

  /* XXX: how should one set flags on linux without filesystem
          specific calls? */

  return 0;
}
