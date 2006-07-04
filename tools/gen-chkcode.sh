#!/bin/sh

IFS="
"

for f in `tools/gen-chklist.sh`
do
  lib=`echo $f | awk '{print $1}'`
  def=`echo $f | awk '{print $2}'`

  xdef=`echo $def | sed -e 's/HAVE_//g' | tr [A-Z] [a-z]`

  cat <<EOF
#ifdef $def
  printf("system has $xdef\n");
#else
  printf("system does not have $xdef\n");
#endif
EOF
done
