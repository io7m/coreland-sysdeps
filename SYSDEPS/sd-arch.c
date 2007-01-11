#include <stdio.h>

const char *arch = "UNKNOWN";

int main()
{
#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
  arch = "ALPHA"; 
#endif
#if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64)
  arch = "AMD64"; 
#endif
#if defined(__arm__) || defined(__TARGET_ARCH_ARM)
  arch = "ARM"; 
#endif
#if defined(__hppa__) || defined(__hppa)
  arch = "PARISC";
#endif
#if defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__i386) || defined(_M_IX86) || defined(_X86_) || defined(__I86__) || defined(__INTEL__)
  arch = "X86";
#endif
#if defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(_M_IA64) || defined(_M_IA64)
  arch = "IA64";
#endif
#if defined(__m68k__) || defined(M68000)
  arch = "68K";
#endif
#if defined(__mips__) || defined(_R3000) || defined(_R4000) || defined(__mips) || defined(__MIPS__)
  arch = "MIPS";
#endif
#if defined(__powerpc) || defined(__powerpc__) || defined(__POWERPC__) || defined(__ppc__) || defined(_M_PPC) || defined(_ARCH_PPC)
  arch = "PPC";
#endif
#if defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2)
  arch = "RS6000";
#endif
#if defined(__sparc__) || defined(__sparc)
  arch = "SPARC";
#endif
#if defined(__sh__)
  arch = "SUPERH";
#endif
#if defined(__370__) || defined(__THW_370__)
  arch = "SYSTEM_370";
#endif
#if defined(__s390__) || defined(__s390x__)
  arch = "SYSTEM_390";
#endif
#if defined(__SYSC_ZARCH__)
  arch = "Z_ARCHITECTURE";
#endif
  printf("SYSDEP_ARCH_%s\n", arch);
  return 0;
}
