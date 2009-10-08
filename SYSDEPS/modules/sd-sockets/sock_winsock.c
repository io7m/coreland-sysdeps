#include <winsock.h>

int
socket_tcp4 (void)
{
  int s;
  s = socket(PF_INET, SOCK_STREAM, 0);
  if (s == -1) return -1;
  return s;
}

int
main (void)
{
  int s = socket_tcp4();
  return (s == -1);
}
