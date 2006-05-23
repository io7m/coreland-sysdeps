sd_out="../../sysdeps.out"
header="../../endian.h"

sysdep: endian
clean: endian_clean

tempf="endian.h"
tempsys="sysdeps_line.out"

endian: endian.c
	./make-endian ${tempf} ${tempsys}
	cp ${tempf} ${header}

endian_clean:
	rm -f ${tempf} ${tempsys} endian
	rm -f ${header}
