#include <math.h>

int main(void)
{
  double x;
  int i;

  x = frexp(0.5, &i);
  return 0;
}
