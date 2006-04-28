#include <fcntl.h>
#include <linux/ext2_fs.h>
#include <sys/ioctl.h>

int main()
{
  int flags;
  int fd;

  flags |= EXT2_IMMUTABLE_FL;
  flags |= EXT2_APPEND_FL;
  fd = -1;

  ioctl(fd, EXT2_IOC_SETFLAGS, &flags);
}
