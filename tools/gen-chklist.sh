#!/bin/sh

for f in `find SYSDEPS -type f -name DEFINES`;
do
  define=`cat $f`
  item=`dirname $f | awk -F/ '{print $NF}'`
  item=`echo $item | sed -e 's/-flags//g'`
  echo ${item} ${define}
done

