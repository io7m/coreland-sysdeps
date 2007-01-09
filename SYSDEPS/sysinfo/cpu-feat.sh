#!/bin/sh

. ../sysdep-subs
if [ $? -ne 0 ]
then
  exit 111
fi

if [ x"$1" = x ]
then
  exit 1
fi

exec 2>/dev/null
sys="$1"
feat="(0"

case "$sys" in
  SYSINFO_OS_DARWIN)
    alti="`sysctl hw.optional.altivec | awk '{print $2}'`"
    if [ "${alti}" = "1" ]
    then
      feat="${feat} | SYSINFO_CPU_EXT_ALTIVEC";
    fi
  ;;
esac

${SYSDEP_CC} -o cpuid_x86 cpuid_x86.c
if [ $? -eq 0 ]
then
  f=`./cpuid_x86 mmx`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_MMX"; fi
  f=`./cpuid_x86 mmx2`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_MMX2"; fi
  f=`./cpuid_x86 3dnow`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_3DNOW"; fi
  f=`./cpuid_x86 3dnowext`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_3DNOWEXT"; fi
  f=`./cpuid_x86 sse`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_SSE"; fi
  f=`./cpuid_x86 sse2`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_SSE2"; fi
  f=`./cpuid_x86 sse3`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_SSE3"; fi
  f=`./cpuid_x86 sse4`
  if [ $f -eq 1 ]; then feat="${feat} | SYSINFO_CPU_EXT_SSE4"; fi
  rm -f cpuid_x86
fi
 
echo "${feat})"
