#include <math.h>

int main(void)
{
  float x;
  int i;

  x = frexpf(0.5, &i);
  return 0;
}
