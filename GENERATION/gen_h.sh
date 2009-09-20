#!/bin/sh

if [ $# -lt 2 ]
then
  echo 'usage: data prefix'
  exit 111
fi

IFS="
"

data=$1
prefix=$2

echo "#define ${prefix}_UNKNOWN 0x0000"

for f in `cat $1`
do
  num=`echo $f | awk '{print $1}'`
  def=`echo $f | awk '{print $2}'`

  echo "#define ${prefix}_${def} 0x${num}"
done
