#!/bin/sh

if [ $# -lt 3 ]
then
  echo 'usage: data type prefix'
  exit 111
fi

IFS="
"
num=1
data=$1
type=$2
prefix=$3

echo "#define ${prefix}_UNKNOWN 0x0000"
for f in `cat $1`
do
  def=`echo $f | awk '{print $1}'`
  printf "#define ${prefix}_%s 0x%.4x\n" "${def}" ${num}
  let num=num+1 1>/dev/null 2>&1
done
