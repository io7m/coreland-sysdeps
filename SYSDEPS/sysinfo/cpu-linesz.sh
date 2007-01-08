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
cline=0

case "$sys" in
  SYSINFO_OS_DARWIN)
    cline="`sysctl hw.cachelinesize | awk '{print $2}'`"
    ;; 
  *)
    ${SYSDEP_CC} -o cpuid_x86 cpuid_x86.c
    if [ $? -eq 0 ]
    then
      cline=`./cpuid_x86 cacheline`
      if [ -z ${cache} ]
      then
        cache=0
      fi
      rm -f cpuid_x86
    fi
    ;;
esac

echo "$cline"
