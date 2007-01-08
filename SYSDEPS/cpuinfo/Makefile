SYSDEP_CC?=cc

all: cpu-arch

cpu-arch: cpu-arch.o _sysctl.h _uname.h
	${SYSDEP_CC} -o cpu-arch cpu-arch.o

cpu-arch.o: cpu-arch.c _sysctl.h _uname.h
	${SYSDEP_CC} -c -o cpu-arch.o cpu-arch.c

_sysctl.h: _sysctl.sh
	./_sysctl.sh > _sysctl.h

_uname.h: _uname.sh
	./_uname.sh > _uname.h

clean_files:
	rm -f cpu-arch.o cpu-arch _sysctl.h _uname.h
