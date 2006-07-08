#include <unistd.h>

int main()
{
  return (dup2(0, 1) == -1);
}
