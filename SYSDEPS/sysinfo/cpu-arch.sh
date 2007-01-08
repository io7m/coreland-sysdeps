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
arch=""

unamem="`uname -m | tr /: ..`"
case "$sys" in
  darwin)
    arch="`arch | tr /: ..`.$unamem"
    ;;
  linux)
    case "$unamem" in
    i386|i486|i586|i686)
      arch="i386"
      ;;
    *)
      arch="$unamem"
      ;;
    esac
    ;;
  aix)
    arch="`arch | tr /: ..`"
    ;;
  sunos)
    arch="`(uname -p || mach) | tr /: ..`"
    ;;
  hp-ux)
    tmp="`file /stand/vmunix`"
    if [ $? -eq 0 ]
    then
      tmp="`echo $tmp | tr '/:[A-Z]' '..[a-z]'`"
    else
      tmp="standvmunix elf-64 executable object file - unknown unknown (lp64)"
    fi
    arch="`echo $tmp | awk '{print $7}'`"
    ;;
  nextstep)
    arch="`hostinfo | sed -n 's/^Processor type: \(.*\) (.*)$/\1/p' | tr /: ..`"
    ;;
  *)
    arch="$unamem"
    ;;
esac

case "$arch" in
  i386) echo 'SYSINFO_ARCH_X86' ;; 
esac
