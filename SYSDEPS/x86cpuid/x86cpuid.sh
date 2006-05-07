#!/bin/sh

if [ x"$1" = x ]
then
  exit 1
fi

cc -o x86cpuid x86cpuid.c >/dev/null 2>&1
if [ $? -ne 0 ]
then
  exit 0
fi

echo "x86cpuid:`./x86cpuid`" >> $1
