sd_out="../../sysdeps.out"
fileout="../../flags-sdl"

sysdep: do_sdl-flags
clean: sdl-flags_clean

tempf="sdl-flags.out"

do_sdl-flags:
	@echo sdl-flags run
	@./sdl-flags 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-flags_clean:
	@echo sdl-flags clean
	@rm -f ${fileout} ${tempf}
