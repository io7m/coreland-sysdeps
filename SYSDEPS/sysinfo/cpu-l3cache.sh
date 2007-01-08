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
  darwin)
    cache="`sysctl hw.l3icachesize | awk '{print $2}'`"
    ;; 
esac

echo "$cache"
