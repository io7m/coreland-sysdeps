sd_out="../../sysdeps.out"
fileout="../../flags-sdl"

sysdep: do_sdl-flags
clean: sdl-flags_clean

tempf="sdl-flags.out"

do_sdl-flags:
	@echo SYSDEPS sdl-flags run create flags-sdl
	@./sdl-flags 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-flags_clean:
	@echo SYSDEPS sdl-flags clean
	@rm -f ${fileout} ${tempf}
