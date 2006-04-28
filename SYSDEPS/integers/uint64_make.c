#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _UINT64_H");
  puts("#define _UINT64_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s uint64;\n", s);
  fprintf(stderr, "uint64:%s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(unsigned int) * 8) == 64) return go("unsigned int");
  if ((sizeof(unsigned long) * 8) == 64) return go("unsigned long");
  if ((sizeof(unsigned long long) * 8) == 64) return go("unsigned long long");

  return 1;
}
