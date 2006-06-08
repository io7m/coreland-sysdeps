sd_out="../../sysdeps.out"
fileout="../../flags-sdl-ttf"

sysdep: do_sdl-ttf-flags
clean: sdl-ttf-flags_clean

tempf="sdl-ttf-flags.out"

do_sdl-ttf-flags:
	@echo SYSDEPS sdl-ttf-flags run create flags-sdl-ttf
	@./sdl-ttf-flags 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-ttf-flags_clean:
	@echo SYSDEPS sdl-ttf-flags clean
	@rm -f ${fileout} ${tempf}
