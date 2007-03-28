#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _INT32_H");
  puts("#define _INT32_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s int32;\n", s);
  fprintf(stderr, "int32: %s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(signed char) * 8) == 32) return go("signed char");
  if ((sizeof(signed short) * 8) == 32) return go("signed short");
  if ((sizeof(signed int) * 8) == 32) return go("signed int");
  if ((sizeof(signed long) * 8) == 32) return go("signed long");

  return 1;
}
