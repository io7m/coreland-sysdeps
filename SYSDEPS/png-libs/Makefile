sd_out="../../sysdeps.out"
fileout="../../libs-png"

sysdep: do_png-libs
clean: png-libs_clean

tempf="png-libs.out"

do_png-libs:
	@echo png-libs run
	@./png-libs 1>>${tempf}
	@cp ${tempf} ${fileout}

png-libs_clean:
	@echo png-libs clean
	@rm -f ${fileout} ${tempf}
