#include <sys/stat.h>
#include "ch_flags.h"
#include "open.h"
#include "uint32.h"

extern int close();

int get_flags(const char *file, uint32 *rflags)
{
  int fd;
  int ret;

  fd = open_ro(file);
  if (fd == -1) return -1;
  ret = fget_flags(fd, rflags);
  close(fd);
  return ret;
}

int fget_flags(int fd, uint32 *rflags)
{
  uint32 flags;

#ifdef HAS_CHFLAGS

  struct stat sb;
  if (fstat(fd, &sb) == -1) return -1;
  flags = sb.st_flags;

#endif /* HAS_CHFLAGS */

#ifdef HAS_EXT2FS_IOCTL

  if (ioctl(fd, EXT2_IOC_GETFLAGS, &flags) != 0) { return -1; }

#endif /* HAS_EXT2FS_IOCTL */

#ifdef FLAGS_WORKING

  *rflags = 0;
  if (flags & CF_SAPPND) *rflags |= CF_SAPPND;
  if (flags & CF_SIMMUT) *rflags |= CF_SIMMUT;
  if (flags & CF_SUNLNK) *rflags |= CF_SUNLNK;
  if (flags & CF_UAPPND) *rflags |= CF_UAPPND;
  if (flags & CF_UIMMUT) *rflags |= CF_UIMMUT;
  if (flags & CF_UUNLNK) *rflags |= CF_UUNLNK;
  if (flags & CF_NODUMP) *rflags |= CF_NODUMP;

  return 0;

#endif /* FLAGS_WORKING */

  /* pretend to be successful? */
  return 0;
}
