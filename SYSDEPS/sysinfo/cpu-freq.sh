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
freq=0

case "$sys" in
  SYSINFO_OS_DARWIN)
    freq="`sysctl hw.cpufrequency | awk '{print $2}'`"
    let freq=freq/1000000
    ;;
  SYSINFO_OS_FREEBSD)
    freq="`sysctl dev.cpu.0.freq | awk '{print $2}'`"
    ;; 
esac

echo "$freq"
