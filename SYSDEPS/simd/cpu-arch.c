#include "cpu_info.h"

struct cpu_info cpu;

int main()
{
  cpu_info_arch(&cpu);
  switch (cpu.arch) {
    case CPU_INFO_ARCH_X86:
      printf("x86\n");
      break;
    case CPU_INFO_ARCH_PPC:
      printf("ppc\n");
      break;
    case CPU_INFO_ARCH_SPARC:
      printf("sparc\n");
      break;
    default:
      printf("unknown\n");
      break;
  }
  return 0;
}
