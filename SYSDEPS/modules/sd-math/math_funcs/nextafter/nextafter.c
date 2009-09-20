#include <math.h>

/* Hack: use argv to suppress 'unused parameter' warning on old compilers. */

int main(int argc, char *argv[])
{
  double x = 0.0;
  if (argv) x = nextafter((double) argc, (double) argc);
  return 0;
}
