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
};

int go(const char* s) { printf("%s\n", s); return 0; }
int main(void)
{
  if (sizeof(unsigned char) == sizeof(union ptr_largest))
    return go("unsigned char");
  if (sizeof(unsigned short) == sizeof(union ptr_largest))
    return go("unsigned short");
  if (sizeof(unsigned int) == sizeof(union ptr_largest))
    return go("unsigned int");
  if (sizeof(unsigned long) == sizeof(union ptr_largest))
    return go("unsigned long");

  return 1;
}
