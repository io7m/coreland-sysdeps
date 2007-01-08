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
    ;; 
esac

let freq=freq/1000000
echo "$freq"
