#include <sys/types.h>
#include <dirent.h>

void x()
{
  DIR *dir;
  struct dirent *d;

  dir = (DIR *) 1;
  d = (struct dirent *) 1;
}

int main(void)
{
  x();
  return 1;
}
