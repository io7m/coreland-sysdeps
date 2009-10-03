#include <sys/stat.h>
#include <unistd.h>

int main()
{
  chflags("XXXX", UF_NODUMP);
}
