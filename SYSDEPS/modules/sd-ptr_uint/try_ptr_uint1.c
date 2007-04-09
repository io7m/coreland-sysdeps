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

int go(const char* s)
{
  puts("#ifndef _SD_PTR_UINT_H");
  puts("#define _SD_PTR_UINT_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s ptr_uint;\n", s);
  fprintf(stderr, "ptr_uint: %s\n", s);
  puts("#endif");
  return 0;
}

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
