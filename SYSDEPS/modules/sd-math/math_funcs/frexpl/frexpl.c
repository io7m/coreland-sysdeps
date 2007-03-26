#include <math.h>

int main(void)
{
  long double x;
  int i;

  x = frexpl(0.5, &i);
  return 0;
}
