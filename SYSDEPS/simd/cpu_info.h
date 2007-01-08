#ifndef CPU_INFO_H
#define CPU_INFO_H

#define CPU_INFO_ARCH_X86   0x01
#define CPU_INFO_ARCH_PPC   0x02
#define CPU_INFO_ARCH_SPARC 0x03

#define CPU_INFO_X86_I386 0x01
#define CPU_INFO_X86_I486 0x02
#define CPU_INFO_X86_I586 0x03
#define CPU_INFO_X86_I686 0x04

#define CPU_INFO_EXT_MMX     0x0001
#define CPU_INFO_EXT_MMX2    0x0002
#define CPU_INFO_EXT_3DNOW   0x0004
#define CPU_INFO_EXT_3DNOWX  0x0008
#define CPU_INFO_EXT_SSE     0x0010
#define CPU_INFO_EXT_SSE2    0x0020
#define CPU_INFO_EXT_ALTIVEC 0x0040
#define CPU_INFO_EXT_TSC     0x0080

struct cpu_info {
  unsigned int arch;
  unsigned int type;
  unsigned int model;
  unsigned int step;
  unsigned long features;
  unsigned int cache;
  unsigned int cache_line;
};

void cpu_info_arch(struct cpu_info *);
void cpu_info(struct cpu_info *);

#endif
