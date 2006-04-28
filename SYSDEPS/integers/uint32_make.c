#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _UINT32_H");
  puts("#define _UINT32_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s uint32;\n", s);
  fprintf(stderr, "uint32:%s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(unsigned int) * 8) == 32) return go("unsigned int");
  if ((sizeof(unsigned long) * 8) == 32) return go("unsigned long");
  if ((sizeof(unsigned long long) * 8) == 32) return go("unsigned long long");

  return 1;
}
