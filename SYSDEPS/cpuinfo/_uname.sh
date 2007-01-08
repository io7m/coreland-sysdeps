#!/bin/sh

. ../sysdep-subs
if [ $? -ne 0 ]
then
  exit 111
fi

cat <<EOF
#ifndef _UNAME_H
#define _UNAME_H
EOF

${SYSDEP_CC} -o try_uname try_uname.c
if [ $? -eq 0 ]
then
  ./try_uname
  if [ $? -eq 0 ]
  then
  cat <<EOF
#include <sys/utsname.h>
#define HAVE_UNAME
EOF
  fi
fi

cat <<EOF
#endif
EOF

rm -f try_uname
