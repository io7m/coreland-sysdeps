sd_out="../../sysdeps.out"
header="../../direntry.h"

sysdep: do_direntry
clean: direntry_clean

tempf="direntry.h"
tempsys="sysdeps.out"

do_direntry:
	@echo direntry run
	@./direntry ${tempf} ${tempsys}
	@cp ${tempf} ${header}
	@cat ${tempsys} >> ${sd_out}

direntry_clean:
	@echo direntry clean
	@rm -f trydirent.o
	@rm -f ${header} ${tempf} ${tempsys}
