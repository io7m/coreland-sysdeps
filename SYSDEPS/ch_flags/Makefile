sd_out="../../sysdeps.out"
header="../../_ch_flags.h"

sysdep: do_ch_flags
clean: ch_flags_clean

tempf="_ch_flags.h"
tempsys="sysdeps_line.out"

do_ch_flags:
	@echo SYSDEPS ch_flags run create ${tempf}
	@./ch_flags ${tempf} ${tempsys}
	@cp ${tempf} ${header}
	@cat ${tempsys} >> ${sd_out}

ch_flags_clean:
	@echo SYSDEPS ch_flags clean
	@rm -f tryext2 trychflags
	@rm -f ${header} ${tempf} ${tempsys}
