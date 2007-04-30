#include <unistd.h>

int main(void)
{
  int pid;

  switch (pid = vfork()) {
    case -1: _exit(0);
     case 0: _exit(0);
    default: _exit(0);
  }
}
