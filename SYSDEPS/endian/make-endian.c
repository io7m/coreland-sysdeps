#include <stdio.h>

int main()
{
  int i;
  char b;
  
  i = 127; 
  b = *(char*)&i;
  
  printf("#ifndef ENDIANNESS_H\n");
  printf("#define ENDIANNESS_H\n");
  printf("\n");

  printf("#define E_LITTLE_ENDIAN 1\n");
  printf("#define E_BIG_ENDIAN 0\n");

  if(b == i) {
    printf("#define ENDIANNESS E_LITTLE_ENDIAN\n");
    fprintf(stderr,"endian:little\n");
  } else {
    printf("#define ENDIANNESS E_BIG_ENDIAN\n");
    fprintf(stderr,"endian:big\n");
  }

  printf("\n");
  printf("#endif\n");

  return 0;
}
