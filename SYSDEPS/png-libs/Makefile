sd_out="../../sysdeps.out"
fileout="../../libs-png"

sysdep: do_png-libs
clean: png-libs_clean

tempf="png-libs.out"

do_png-libs:
	@echo SYSDEPS png-libs run create libs-png
	@./png-libs 1>>${tempf}
	@cp ${tempf} ${fileout}

png-libs_clean:
	@echo SYSDEPS png-libs clean
	@rm -f ${fileout} ${tempf}
