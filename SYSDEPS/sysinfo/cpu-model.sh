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
model=""

case "$sys" in
  SYSINFO_OS_DARWIN)
    model=`machine`
    ;;
  *)
    model="`sysctl hw.model | tr [A-Z] [a-z]`"
    ;;
esac

case "$model" in
  ppc750) echo 'SYSINFO_CPU_PPC_MODEL_750' ;;
  ppc7450) echo 'SYSINFO_CPU_PPC_MODEL_7450' ;;
  *) echo 'SYSINFO_CPU_MODEL_UNKNOWN' ;;
esac
