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
      feat="${feat} | SYSINFO_CPU_PPC_EXT_ALTIVEC";
    fi
    ;; 
esac

echo "${feat})"
