#!/bin/sh

IFS="
"

DEFINES=`cd SYSDEPS && ./sd-defines`
for def in ${DEFINES}
do
  xdef=`echo $def | sed -e 's/SD_HAVE_//g' | tr [A-Z] [a-z]`
  cat <<EOF
#ifdef $def
  printf("system has $xdef\n");
#else
  printf("system does not have $xdef\n");
#endif
EOF
done
