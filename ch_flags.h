#ifndef CH_FLAGS_H
#define CH_FLAGS_H

#include "_ch_flags.h"
#include "uint32.h"

#ifdef CH_FLAGS_HAVE_CHFLAGS

#include <sys/stat.h>

#ifdef SF_APPEND
  #define CF_SAPPND SF_APPEND
#else
  #define CF_SAPPND 0x0
#endif /* SF_APPEND */

#ifdef SF_IMMUTABLE
  #define CF_SIMMUT SF_IMMUTABLE
#else
  #define CF_SIMMUT 0x0
#endif /* SF_IMMUTABLE */

#ifdef SF_NOUNLINK
  #define CF_SUNLNK SF_NOUNLINK
#else
  #define CF_SUNLNK 0x0
#endif /* SF_NOUNLINK */

#ifdef UF_APPEND
  #define CF_UAPPND UF_APPEND
#else
  #define CF_UAPPND 0x0
#endif /* UF_APPEND */

#ifdef UF_IMMUTABLE
  #define CF_UIMMUT UF_IMMUTABLE
#else
  #define CF_UIMMUT 0x0
#endif /* UF_IMMUTABLE */

#ifdef UF_NOUNLINK
  #define CF_UUNLNK UF_NOUNLINK
#else
  #define CF_UUNLNK 0x0
#endif /* UF_NOUNLINK */

#ifdef UF_NODUMP
  #define CF_NODUMP UF_NODUMP
#else
  #define UF_NODUMP 0x0
#endif /* UF_NODUMP */

#endif /* HAS_CHFLAGS */

#ifdef CH_FLAGS_HAVE_EXT2FS_IOCTL

#include <linux/ext2_fs.h>
#include <sys/ioctl.h>

#define CF_SAPPND EXT2_APPEND_FL
#define CF_SIMMUT EXT2_IMMUTABLE_FL
#define CF_SUNLNK 0x0                /* ext2 doesn't support unlink */
#define CF_UAPPND EXT2_APPEND_FL     /* no difference between user and suser */
#define CF_UIMMUT EXT2_IMMUTABLE_FL  /* as append */
#define CF_UUNLNK 0x0                /* as above */
#define CF_NODUMP EXT2_NODUMP_FL

#endif /* HAS_EXT2FS_IOCTL */

int ch_flags(const char *, uint32);
int get_flags(const char *, uint32 *);

int fch_flags(int, uint32);
int fget_flags(int, uint32 *);

#endif
