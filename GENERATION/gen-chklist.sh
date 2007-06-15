#!/bin/sh

for f in `find SYSDEPS/modules -type f -name defines`;
do
  define=`cat $f`
  IFS="
"
  for x in ${define}
  do
    item=`dirname $f | awk -F/ '{print $NF}'`
    item=`echo $item | sed -e 's/-flags//g'`
    echo ${item} ${x}
  done
done

