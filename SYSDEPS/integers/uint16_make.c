#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _UINT16_H");
  puts("#define _UINT16_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s uint16;\n", s);
  fprintf(stderr, "uint16:%s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(unsigned short) * 8) == 16) return go("unsigned short");
  if ((sizeof(unsigned int) * 8) == 16) return go("unsigned int");

  return 1;
}
