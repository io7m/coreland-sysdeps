SYSDEP_CC?=cc

all: cpu-info cpu-arch

cpu-info: cpu-info.o cpu_info.h cpu_info.o cpu_arch.o
	${SYSDEP_CC} -o cpu-info cpu-info.o cpu_info.o cpu_arch.o

cpu-info.o: cpu-info.c cpu_info.h
	${SYSDEP_CC} -c -o cpu-info.o cpu-info.c

cpu-arch: cpu-arch.o cpu_info.h cpu_info.o cpu_arch.o
	${SYSDEP_CC} -o cpu-arch cpu-arch.o cpu_info.o cpu_arch.o

cpu-arch.o: cpu-arch.c cpu_info.h
	${SYSDEP_CC} -c -o cpu-arch.o cpu-arch.c

cpu_arch.o: cpu_arch.c cpu_info.h
	${SYSDEP_CC} -c -o cpu_arch.o cpu_arch.c

cpu_info.o: cpu_info.c cpu_info.h
	${SYSDEP_CC} -c -o cpu_info.o cpu_info.c

clean_files:
	rm -f cpu_info.o cpu_arch.o cpu-info cpu-arch
