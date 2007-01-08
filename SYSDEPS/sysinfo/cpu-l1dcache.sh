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
cache=0

case "$sys" in
  SYSINFO_OS_DARWIN)
    cache="`sysctl hw.l1dcachesize | awk '{print $2}'`"
    ;; 
  *)
    ${SYSDEP_CC} -o cpuid_x86 cpuid_x86.c
    if [ $? -eq 0 ]
    then
      cache=`./cpuid_x86 l1dcachesize`
      rm -f cpuid_x86
    fi
    ;;
esac

echo "$cache"
