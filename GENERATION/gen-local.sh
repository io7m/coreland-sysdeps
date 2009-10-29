#!/bin/sh

CREATES=`./sysdeps-creates | sort`

echo "local:\\"

for file in ${CREATES}
do
  echo "${file} \\"
done

cat <<EOF


local_pre:
local_clean:


SYSDEPS/README: make-readme VERSION
	./make-readme > SYSDEPS/README.tmp
	mv SYSDEPS/README.tmp SYSDEPS/README

EOF
