#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _INT32_H");
  puts("#define _INT32_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s int32;\n", s);
  fprintf(stderr, "int32:%s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(signed int) * 8) == 32) return go("signed int");
  if ((sizeof(signed long) * 8) == 32) return go("signed long");
  if ((sizeof(signed long long) * 8) == 32) return go("signed long long");

  return 1;
}
