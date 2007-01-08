#!/bin/sh

. ../sysdep-subs
if [ $? -ne 0 ]
then
  exit 111
fi

cat <<EOF
#ifndef _SYSCTL_H
#define _SYSCTL_H
EOF

${SYSDEP_CC} -o try_sysctl try_sysctl.c
if [ $? -eq 0 ]
then
  ./try_sysctl
  if [ $? -eq 0 ]
  then
  cat <<EOF
#include <sys/types.h>
#include <sys/sysctl.h>
#define HAVE_SYSCTL
EOF
  fi
fi

cat <<EOF
#endif
EOF

rm -f try_sysctl
