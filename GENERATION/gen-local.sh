#!/bin/sh

cd SYSDEPS || exit 1

CREATES=`./sd-creates | sort`

echo "local:\\"

for file in ${CREATES}
do
  echo "${file} \\"
done

cat <<EOF


local_pre:
local_clean:

EOF
