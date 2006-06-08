sd_out="../../sysdeps.out"
header="../../direntry.h"

sysdep: do_direntry
clean: direntry_clean

tempf="direntry.h"
tempsys="sysdeps.out"

do_direntry:
	@echo SYSDEPS direntry run create ${tempf}
	@./direntry ${tempf} ${tempsys}
	@cp ${tempf} ${header}
	@cat ${tempsys} >> ${sd_out}

direntry_clean:
	@echo SYSDEPS direntry clean
	@rm -f trydirent.o
	@rm -f ${header} ${tempf} ${tempsys}
