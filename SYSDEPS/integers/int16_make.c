#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _INT16_H");
  puts("#define _INT16_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s int16;\n", s);
  fprintf(stderr, "int16:%s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(signed short) * 8) == 16) return go("signed short");
  if ((sizeof(signed int) * 8) == 16) return go("signed int");

  return 1;
}
