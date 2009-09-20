#include <math.h>

/* Hack: use argv to suppress 'unused parameter' warning on old compilers. */

int main(int argc, char *argv[])
{
  double x = 0.0;
  double y = 0.0;
  if (argv) x = modf((double) argc, &y);
  return 0;
}
