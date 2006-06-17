#!/bin/sh

# systype-oper: operating system eq openbsd-3.7
# systype-arch: machine lang, eg sparc
# systype-syst: binaries, eg sun4
# systype-chip: chip model, eq intel.pentium.iii
# systype-kern: kernel version

if [ x"$1" = x ]
then
  exit 1
fi

out=$1

exec 2>/dev/null

sys="`uname -s | tr '/:[A-Z]' '..[a-z]'`"
if [ x"$sys" != x ]
then
  unamer="`uname -r | tr /: ..`"
  unamem="`uname -m | tr /: ..`"
  unamev="`uname -v | tr /: ..`"

  case "$sys" in
  bsd.os)
    # in bsd 4.4, uname -v does not have useful info.
    # in bsd 4.4, uname -m is arch, not chip.
    oper="$sys-$unamer"
    arch="$unamem"
    syst=""
    chip="`sysctl -n hw.model`"
    kern=""
    ;;
  freebsd)
    # see above about bsd 4.4
    oper="$sys-$unamer"
    arch="$unamem"
    syst=""
    chip="`sysctl -n hw.model`" # hopefully
    kern=""
    ;;
  netbsd)
    # see above about bsd 4.4
    oper="$sys-$unamer"
    arch="$unamem"
    syst=""
    chip="`sysctl -n hw.model`" # hopefully
    kern=""
    ;;
  openbsd)
    # see above about bsd 4.4
    oper="$sys-$unamer"
    arch="$unamem"
    syst=""
    chip="`sysctl -n hw.model`" # hopefully
    kern=""
    ;;
  darwin)
    oper="$sys-$unamer"
    arch="`arch | tr /: ..`.$unamem"
    syst=""
    chip="`sysctl -n hw.model`.`machine`"
    kern="$unamev"
    ;;
  linux)
    # as in bsd 4.4, uname -v does not have useful info.
    oper="$sys-$unamer"
    syst=""
    chip="$unamem"
    kern=""
    case "$chip" in
    i386|i486|i586|i686)
      arch="i386"
      ;;
    alpha)
      arch="alpha"
      ;;
    esac
    ;;
  aix)
    # IBM gets uname -r and uname -v backwards. 
    oper="$sys-$unamev-$unamer"
    arch="`arch | tr /: ..`"
    syst=""
    chip="$unamem"
    kern=""
    ;;
  sunos)
    oper="$sys-$unamer-$unamev"
    arch="`(uname -p || mach) | tr /: ..`"
    syst="`arch | tr /: ..`"
    chip="$unamem" # this is wrong; is there any way to get the real info?
    kern="`arch -k | tr /: ..`"
    ;;
  unix_sv)
    oper="$sys-$unamer-$unamev"
    arch="`uname -m`"
    syst=""
    chip="$unamem"
    kern=""
    ;;
  hp-ux)
    tmp="`file /stand/vmunix`"
    if [ $? -eq 0 ]
    then
      tmp="`echo $tmp | tr '/:[A-Z]' '..[a-z]'`"
    else
      tmp="standvmunix elf-64 executable object file - unknown unknown (lp64)"
    fi
    oper="$sys-$unamer-$unamev"
    arch="`echo $tmp | awk '{print $7}'`"
    syst=""
    chip="`model | tr '/:[A-Z]' '..[a-z]'`"
    kern=""
    ;;
  *)
    oper="$sys-$unamer-$unamev"
    arch="`arch | tr /: ..`"
    syst=""
    chip="$unamem"
    kern=""
    ;;
  esac
else
  cc -c trycpp.c
  cc -o trycpp trycpp.o
  case `./trycpp` in
  nextstep)
    oper="nextstep-`hostinfo | sed -n 's/^[     ]*NeXT Mach \([^:]*\):.*$/\1/p'`"
    arch="`hostinfo | sed -n 's/^Processor type: \(.*\) (.*)$/\1/p' | tr /: ..`"
    syst=""
    chip="`hostinfo | sed -n 's/^Processor type: .* (\(.*\))$/\1/p' | tr ' /:' '...'`"
    kern=""
    ;;
  *)
    oper="unknown"
    arch=""
    syst=""
    chip=""
    kern=""
    ;;
  esac
  rm -f trycpp.o trycpp
fi

case "$chip" in
80486)
  chip=i486
  ;;
i486DX)
  chip=i486-dx
  ;;
i486.DX2)
  chip=i486-dx2
  ;;
Intel.586)
  chip=pentium
  ;;
i586)
  chip=pentium
  ;;
i686)
  chip=ppro
esac

# systype-oper: operating system eq openbsd-3.7
# systype-arch: machine lang, eg sparc
# systype-syst: binaries, eg sun4
# systype-chip: chip model, eq intel.pentium.iii
# systype-kern: kernel version

exec 1>>$out

echo "systype-oper:$oper" | tr ' [A-Z]' '.[a-z]'
echo "systype-arch:$arch" | tr ' [A-Z]' '.[a-z]'
echo "systype-syst:$syst" | tr ' [A-Z]' '.[a-z]'
echo "systype-chip:$chip" | tr ' [A-Z]' '.[a-z]'
echo "systype-kern:$kern" | tr ' [A-Z]' '.[a-z]'
