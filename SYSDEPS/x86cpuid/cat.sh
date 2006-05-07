#!/bin/sh

if [ -f $1 ]
then
  cat $1 >> $2
fi

exit 0
