#include "cpu_info.h"

struct arch {
  const char *name;
  unsigned int val;
};

static struct arch arch_table[] = {
  { "i386",            CPU_INFO_ARCH_X86 },
  { "powerpc",         CPU_INFO_ARCH_PPC }, 
  { "Power Macintosh", CPU_INFO_ARCH_PPC }, /* intel mac shows i386 */
};

void cpu_info_arch(struct cpu_info *cpu)
{
  char buf[256];
  unsigned long sz = sizeof(buf);
  unsigned int ind;

#ifdef HAVE_UNAME
  struct utsname un;
  if (uname(&un) != -1) {
    for (ind = 0; ind < sizeof(arch_table) / sizeof(const char *); ++ind) {
      if (strcmp(un.machine, arch_table[ind].name) == 0)
        cpu->arch = arch_table[ind].val;
    }
  }  
#endif
#ifdef HAVE_SYSCTL
  if (sysctlbyname("hw.machine", buf, &sz, 0, 0) != -1) {
    for (ind = 0; ind < sizeof(arch_table) / sizeof(const char *); ++ind) {
      if (strcmp(buf, arch_table[ind].name) == 0)
        cpu->arch = arch_table[ind].val;
    }
  }  
#endif
}
