#include <ieeefp.h>

int main(int argc, char *argv[])
{
  if (finite((float) argc)) {
    if (argv) {
      return 112;
    } else return 113;
  } else return 0;
}
