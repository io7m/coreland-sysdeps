#include <stdio.h>

union ptr_largest {
  void *vp;
  void *vpp;
  void (*vfpv)(void);
  void (*vfpvp)(void *);
  unsigned char *ucp;
  unsigned short *usp;
  unsigned int *uip;
  unsigned long *ulp;
  unsigned long long *ullp;
};

int go(const char* s) { printf("%s\n", s); return 0; }
int main(void)
{
  if (sizeof(unsigned long long) == sizeof(union ptr_largest))
    return go("unsigned long long");

  return 1;
}
