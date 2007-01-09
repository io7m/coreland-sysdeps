#define _ISOC9X_SOURCE  1
#define _ISOC99_SOURCE  1
#define __USE_ISOC9X  1
#define __USE_ISOC99  1
#include  <math.h>

int main()
{
  float f;
  long long llo;
  f = 0.1f;
  llo = llrintf(f);
}
