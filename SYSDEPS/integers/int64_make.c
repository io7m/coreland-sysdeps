#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _INT64_H");
  puts("#define _INT64_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s int64;\n", s);
  fprintf(stderr, "int64:%s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(signed int) * 8) == 64) return go("signed int");
  if ((sizeof(signed long) * 8) == 64) return go("signed long");
  if ((sizeof(signed long long) * 8) == 64) return go("signed long long");

  return 1;
}
