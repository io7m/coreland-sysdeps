#include <sys/utsname.h>

struct utsname un;

int main()
{
  if (uname(&un) == -1)
    return 112;
  else
    return 0;
}
