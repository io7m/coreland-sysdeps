sd_out="../../sysdeps.out"
header="../../endian.h"

sysdep: endian
clean: endian_clean

tempend="endian.h"
tempsys="sysdeps_line.out"

endian: endian.c
	./make-endian ${tempend} ${tempsys}
	cp ${tempend} ${header}

endian_clean:
	rm -f ${tempend} ${tempsys} endian
	rm -f ${header}
