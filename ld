#!/bin/sh

if [ $# -lt 2 ]
then
  echo "usage: basename objects ..." 1>&2
  exit 1
fi

LD=`head -n 1 conf-ld`
if [ $? -ne 0 ]
then
  echo "fatal: could not read conf-ld" 1>&2
  exit 1
fi
LDFLAGS=`head -n 1 conf-ldflags 2>/dev/null`

if [ -f 'conf-ldfflist' ]
then
  for f in `cat conf-ldfflist`
  do
    FLAGS=`cat $f 2>/dev/null`
    LDFLAGS="${LDFLAGS} ${FLAGS}"
  done
fi

out="$1"
shift

${LD} -o ${out} ${1+"$@"} ${LDFLAGS}
