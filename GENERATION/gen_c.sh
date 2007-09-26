#!/bin/sh

if [ $# -lt 1 ]
then
  echo usage: data
  exit 111
fi

data=$1

IFS="
"
echo '  var = "UNKNOWN";';
for str in `cat ${data}`
do
  type=`echo ${str} | awk '{print $1}'`
  str=`echo ${str} | sed -e "s/$type //g"`

  IFS=" "
  num=0
  for def in ${str}
  do
    let num=num+1 1>/dev/null 2>&1
  done

  printf "#if "
  for def in ${str}
  do
    printf "defined($def)"
    let num=num-1 1>/dev/null 2>&1
    if [ ${num} -gt 0 ]
    then
      printf " || ";
    fi
  done
  echo
  echo "  var = \"${type}\";"
  echo "#endif"
done
