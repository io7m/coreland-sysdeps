#include <math.h>

/* Hack: use argv to suppress 'unused parameter' warning on old compilers. */

int main(int argc, char *argv[])
{
  float x = 0.0;
  if (argv) x = isnormalf((float) argc);
  return 0;
}
