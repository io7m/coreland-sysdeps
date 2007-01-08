#include <stdio.h>

#include "_sysctl.h"
#include "_uname.h"

#define CPUINFO_ARCH_X86   0x01
#define CPUINFO_ARCH_PPC   0x02
#define CPUINFO_ARCH_SPARC 0x03

struct arch {
  const char *name;
  unsigned int val;
};

static struct arch arch_table[] = {
  { "i386",            CPUINFO_ARCH_X86 },
  { "powerpc",         CPUINFO_ARCH_PPC }, 
  { "Power Macintosh", CPUINFO_ARCH_PPC }, /* intel mac shows i386 */
};

int main()
{
 unsigned int ind;
  unsigned int arch = 0;

#ifdef HAVE_UNAME
  struct utsname un;
  if (uname(&un) != -1) {
    for (ind = 0; ind < sizeof(arch_table) / sizeof(struct arch); ++ind) {
      if (strcmp(un.machine, arch_table[ind].name) == 0)
        arch = arch_table[ind].val;
    }
  }  
#endif
#ifdef HAVE_SYSCTL
  {
    char buf[256];
    size_t sz = sizeof(buf);
    if (sysctlbyname("hw.machine", buf, &sz, 0, 0) != -1) {
      for (ind = 0; ind < sizeof(arch_table) / sizeof(struct arch); ++ind) {
        if (strcmp(buf, arch_table[ind].name) == 0)
          arch = arch_table[ind].val;
      }
    }  
  }
#endif

  switch (arch) {
    case CPUINFO_ARCH_X86:
      printf("CPUINFO_ARCH_X86\n");
      break;
    case CPUINFO_ARCH_PPC:
      printf("CPUINFO_ARCH_PPC\n");
      break;
    case CPUINFO_ARCH_SPARC:
      printf("CPUINFO_ARCH_SPARC\n");
      break;
    default:
      return 1;
  }
  return 0;
}
