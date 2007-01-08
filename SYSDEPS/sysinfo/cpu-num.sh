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
ncpu=""

case "$sys" in
  *)
    ncpu="`sysctl hw.ncpu | awk '{print $2}'`"
    ;;
esac

echo "${ncpu}"
