#include <math.h>

/* Hack: use argv to suppress 'unused parameter' warning on old compilers. */

int main(int argc, char *argv[])
{
  double x = 0.0;
  int i = 0;

  if (argv) x = remquo((double) argc, (double) argc, &i);
  return 0;
}
