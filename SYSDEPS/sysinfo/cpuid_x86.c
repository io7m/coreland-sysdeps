#include <stdio.h>

int cpuid_sup()
{
  long eax;
  long ecx;
  __asm__ __volatile__(
    "pushf\n\t"
    "pop %0\n\t"
    "mov %0, %1\n\t"
    "xor $0x200000, %0\n\t"
    "push %0\n\t"
    "popf\n\t"
    "pushf\n\t"
    "pop %0\n\t"
    : "=a" (eax), "=c" (ecx)
    :
    : "cc" 
  );
  return (eax != ecx);
}
void cpuid(unsigned long eax, unsigned long *px)
{
  __asm __volatile__(
    "mov %%ebx, %%esi\n\t"
    "cpuid\n\t"
    "xchg %%ebx, %%esi"
    : "=a" (px[0]), "=S" (px[1]), 
      "=c" (px[2]), "=d" (px[3])
    : "0" (eax));
}

struct cachedesc {
  unsigned char val;
  unsigned int size;
};

static const struct cachedesc l1i_caches[] = {
  { 0x6, 8 },
  { 0x8, 16 },
  { 0x30, 32 },
  { 0, 0 },
};
static const struct cachedesc l1d_caches[] = {
  { 0xa, 8, },
  { 0xc, 16, },
  { 0x2c, 32, },
  { 0x60, 16, },
  { 0x66, 8, },
  { 0x67, 16, },
  { 0x68, 32, },
  { 0, 0 },
};
static const struct cachedesc l2_caches[] = {
  { 0x39, 128, },
  { 0x3b, 128, },
  { 0x3c, 256, },
  { 0x41, 128, },
  { 0x42, 256, },
  { 0x43, 512, },
  { 0x44, 1024, },
  { 0x45, 2048, },
  { 0x78, 1024, },
  { 0x79, 128, },
  { 0x7a, 256, },
  { 0x7b, 512, },
  { 0x7c, 1024, },
  { 0x82, 256, },
  { 0x83, 512, },
  { 0x84, 1024, },
  { 0x85, 2048, },
  { 0x86, 512, },
  { 0x87, 1024 },
  { 0, 0 },
};
static const struct cachedesc l3_caches[] = {
  { 0x22, 512, },
  { 0x23, 1024, },
  { 0x25, 2048, },
  { 0x29, 4096, },
  { 0, 0 },
};

char buf[32];
unsigned long regs1[4];
unsigned long regs2[4];

int main(int argc, char *argv[])
{
  const struct cachedesc *ctab = 0;
  const struct cachedesc *cp;
  char *arg;
  unsigned char *ptr;
  unsigned long tmp;
  unsigned int ind;
  unsigned int jnd;
  unsigned int knd;
  unsigned int max;

  if (argc < 2) return 111;
  if (!cpuid_sup()) return 112;

  arg = argv[1];

  cpuid(0x00000000, regs1);
  if (regs1[0] >= 0x1) {
    cpuid(0x00000001, regs2);
    if (strcmp(arg, "tsc") == 0) {
      printf("%u\n", (regs2[3] & (1 << 8)) >> 8);
      return 0;
    }
    if (strcmp(arg, "mmx") == 0) {
      printf("%u\n", (regs2[3] & (1 << 23)) >> 23);
      return 0;
    }
    if (strcmp(arg, "sse") == 0) {
      printf("%u\n", (regs2[3] & (1 << 25)) >> 25);
      return 0;
    }
    if (strcmp(arg, "sse2") == 0) {
      printf("%u\n", (regs2[3] & (1 << 26)) >> 26);
      return 0;
    }
    if (strcmp(arg, "mmx2") == 0) {
      printf("%u\n", (regs2[3] & (1 << 25)) >> 25); /* same as SSE */
      return 0;
    }
    if (strcmp(arg, "cacheline") == 0) {
      tmp = ((regs2[1] >> 8) & 0xFF) * 8;
      if (tmp)
        printf("%u\n", tmp);
      else
        printf("32\n");
      return 0;
    }

    if (strcmp(arg, "l1icachesize") == 0) ctab = l1i_caches;
    if (strcmp(arg, "l1dcachesize") == 0) ctab = l1d_caches;
    if (strcmp(arg, "l2cachesize") == 0) ctab = l2_caches;
    if (strcmp(arg, "l3cachesize") == 0) ctab = l3_caches;

    if (ctab) {
      cpuid(0x00000002, regs2);
      max = regs2[0] & 0xff;
      ptr = (char *) regs2;
      for (ind = 0; ind < max; ++ind) {
        cpuid(0x00000002, regs2);
        for (jnd = 0; jnd < 3; ++jnd)
          regs2[jnd] = (regs2[jnd] & 0xfffffffe) ? 0 : regs2[jnd];  
        for (jnd = 1; jnd < 16; ++jnd) {
          if (ptr[jnd]) {
            cp = ctab;
            while (cp->val) {
              if (cp->val == ptr[jnd])
                printf("%u\n", cp->size << 10);
              ++cp;
            }
          }
        }
      }
    }
  }

  cpuid(0x80000000, regs1);
  if (regs1[0] >= 0x80000001) {
    cpuid(0x80000001, regs2);
    if (strcmp(arg, "mmx") == 0) {
      printf("%u\n", (regs2[3] & (1 << 23 )) >> 23);
      return 0;
    }
    if (strcmp(arg, "mmx2") == 0) {
      printf("%u\n", (regs2[3] & (1 << 22 )) >> 22);
      return 0;
    }
    if (strcmp(arg, "3dnow") == 0) {
      printf("%u\n", (regs2[3] & (1 << 31 )) >> 31);
      return 0;
    }
    if (strcmp(arg, "3dnowext") == 0) {
      printf("%u\n", (regs2[3] & (1 << 30 )) >> 30);
      return 0;
    }
  }
  if (regs1[0] >= 0x80000006) {
    cpuid(0x80000006, regs2);
    if (strcmp(arg, "cacheline") == 0) {
      tmp = regs2[2] & 0xFF;
      if (tmp)
        printf("%u\n", tmp);
      else
        printf("32\n");
    }
  }
  return 0;
}
