sd_out="../../sysdeps.out"
fileout="../../libs-sdl"

sysdep: do_sdl-libs
clean: sdl-libs_clean

tempf="sdl-libs.out"

do_sdl-libs:
	@echo sdl-libs run
	@./sdl-libs 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-libs_clean:
	@echo sdl-libs clean
	@rm -f ${fileout} ${tempf}
