
#!/bin/sh

. ../sysdep-subs
if [ $? -ne 0 ]
then
  exit 111
fi

exec 2>/dev/null

sys="`uname -s | tr '/:[A-Z]' '..[a-z]'`"
if [ x"$sys" == x ]
then
  ${SYSDEP_CC} -c trycpp.c
  ${SYSDEP_CC} -o trycpp trycpp.o
  case `./trycpp` in
  nextstep)
    oper="nextstep"
    ;;
  *)
    oper="unknown"
    ;;
  esac
  rm -f trycpp.o trycpp
fi

case "$sys" in
  bsd.os) echo 'SYSINFO_OS_BSDOS' ;;
  freebsd) echo 'SYSINFO_OS_FREEBSD' ;;
  netbsd) echo 'SYSINFO_OS_NETBSD';;
  openbsd) echo 'SYSINFO_OS_OPENBSD';;
  darwin) echo 'SYSINFO_OS_DARWIN';;
  linux) echo 'SYSINFO_OS_LINUX';;
  aix) echo 'SYSINFO_OS_AIX';;
  sunos) echo 'SYSINFO_OS_SUNOS';;
  unix_sv) echo 'SYSINFO_OS_UNIX_SV';;
  hp-ux) echo 'SYSINFO_OS_HPUX';;
  nextstep) echo 'SYSINFO_OS_NEXTSTEP';;
  *) echo 'SYSINFO_OS_UNKNOWN';;
esac
