#include <stdio.h>

int go (const char* s) { printf ("%s\n", s); return 0; }
int main (void)
{
  if ((sizeof (float) * 8) == 64) return go ("float");
  if ((sizeof (double) * 8) == 64) return go ("double");
  if ((sizeof (long double) * 8) == 64) return go ("long double");

  return 1;
}
