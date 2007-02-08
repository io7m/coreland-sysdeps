#include <winsock.h>

int main()
{
  unsigned long arg = 1;
  if (ioctlsocket(0, FIONBIO, &arg) != 0) return 112;
  return 0;
}
