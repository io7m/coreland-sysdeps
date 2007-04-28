#include <stdio.h>

int main(int argc, char *argv[])
{
  unsigned int ind;

  --argc;
  ++argv;

  for (ind = 0; ind < argc; ++ind)
    printf("%s", argv[ind]);

  return 0;
}
