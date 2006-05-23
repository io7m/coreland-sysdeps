sd_out="../../sysdeps.out"
fileout="../../dlopen.h"

sysdep: do_dlopen
clean: dlopen_clean

tempf="dlopen.h"
tempsys="sysdeps.out"

do_dlopen:
	./dlopen ${tempf} ${tempsys}
	cp ${tempf} ${fileout}
	cat ${tempsys} >> ${sd_out}

dlopen_clean:
	rm -f ${fileout} ${tempf} ${tempsys} trydlopen.o trydlfunc.o
