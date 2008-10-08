#!/bin/sh

cat <<EOF
#include <stdio.h>

EOF

headers=`cd SYSDEPS && ./sd-creates | grep '\.h$'`
for header in ${headers}
do
  cat <<EOF
#include "${header}"
EOF
done

cat <<EOF
int
main (void)
{

EOF

./GENERATION/gen-chkcode.sh

cat <<EOF

  return 0;
}
EOF
