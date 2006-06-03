sd_out="../../sysdeps.out"
fileout="../../flags-sdl-mixer"

sysdep: do_sdl-mixer-flags
clean: sdl-mixer-flags_clean

tempf="sdl-mixer-flags.out"

do_sdl-mixer-flags:
	@echo sdl-mixer-flags run
	@./sdl-mixer-flags 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-mixer-flags_clean:
	@echo sdl-mixer-flags clean
	@rm -f ${fileout} ${tempf}
