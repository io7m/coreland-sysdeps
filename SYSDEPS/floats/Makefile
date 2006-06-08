sd_out="../../sysdeps.out"
float32_header="../../_float32.h"
float64_header="../../_float64.h"

sysdep: floats
clean: floats_clean

temp32="float32.h"
temp64="float64.h"
tempsys="sysdep_line.out"

floats:
	@echo SYSDEPS floats run create ${temp32} ${temp32}
	@./make-floats ${temp32} ${temp64} ${tempsys}
	@cp ${temp32} ${float32_header}
	@cp ${temp64} ${float64_header}
	@cat ${tempsys} >> ${sd_out}

floats_clean:
	@echo SYSDEPS floats clean
	@rm -f ${float32_header} ${float64_header} float32_make float64_make
	@rm -f ${temp32} ${temp64} ${tempsys}
	
