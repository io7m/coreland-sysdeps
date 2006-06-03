sd_out="../../sysdeps.out"
fileout="../../libs-sdl-mixer"

sysdep: do_sdl-mixer-libs
clean: sdl-mixer-libs_clean

tempf="sdl-mixer-libs.out"

do_sdl-mixer-libs:
	@echo sdl-mixer-libs run
	@./sdl-mixer-libs 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-mixer-libs_clean:
	@echo sdl-mixer-libs clean
	@rm -f ${fileout} ${tempf}
