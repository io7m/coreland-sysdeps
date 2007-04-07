#include <time.h>

int main(void)
{
  pid_t pid;
  clockid_t cid;
  clock_getcpuclockid(pid, &cid); 
  return 0;
}
