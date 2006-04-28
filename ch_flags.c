#include <sys/stat.h>
#include "ch_flags.h"
#include "uint32.h"

int fch_flags(int fd, uint32 in_flags)
{
#ifdef HAS_CHFLAGS
  return fchflags(fd, in_flags);
#endif

#ifdef HAS_EXT2FS_IOCTL
  /* device specific linux shit */
  if (ioctl(fd, EXT2_IOC_FLAGS, in_flags) != 0) return -1;
  return 0;
#endif

  /* XXX: how should one set flags on solaris? */
  /* default */
  return 0;
}
