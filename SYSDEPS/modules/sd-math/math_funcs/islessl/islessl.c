#include <math.h>

/* Hack: use argv to suppress 'unused parameter' warning on old compilers. */

int main(int argc, char *argv[])
{
  long double x = 0.0;
  if (argv) x = islessl((long double) argc, (long double) argc);
  return 0;
}
