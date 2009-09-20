#!/bin/sh

./gen_h.sh os.txt      SD_SYSINFO_OS
echo
./gen_h.sh arch.txt    SD_SYSINFO_ARCH
echo
./gen_h.sh cctype.txt  SD_SYSINFO_CCTYPE
echo
./gen_h.sh adatype.txt SD_SYSINFO_ADATYPE
echo
./gen_h.sh cpu_ext.txt SD_SYSINFO_CPU_EXT
