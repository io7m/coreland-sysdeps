#include <math.h>

int main(void)
{
  double x;
  double y;
  x = modf(0.5, &y);
  return 0;
}
