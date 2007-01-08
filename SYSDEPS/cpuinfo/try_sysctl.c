#include <sys/types.h>
#include <sys/sysctl.h>

char buf[256];
size_t sz = sizeof(buf);

int main()
{
  if (sysctlbyname("hw.machine", buf, &sz, 0, 0) == -1)
    return 112;
  else
    return 0;
}
