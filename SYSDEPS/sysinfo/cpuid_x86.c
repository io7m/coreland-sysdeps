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

char buf[32];
unsigned long regs1[4];
unsigned long regs2[4];

int main(int argc, char *argv[])
{
  char *arg;
  unsigned long tmp;

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
