#!/bin/sh

IFS="
"

for f in `tools/gen-chklist.sh`
do
  lib=`echo $f | awk '{print $1}'`
  def=`echo $f | awk '{print $2}'`

  cat <<EOF
#ifdef $def
  printf("system has $lib\n");
#else
  printf("system does not have $lib\n");
#endif
EOF
done
