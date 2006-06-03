sd_out="../../sysdeps.out"
fileout="../../flags-sdl-ttf"

sysdep: do_sdl-ttf-flags
clean: sdl-ttf-flags_clean

tempf="sdl-ttf-flags.out"

do_sdl-ttf-flags:
	@echo sdl-ttf-flags run
	@./sdl-ttf-flags 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-ttf-flags_clean:
	@echo sdl-ttf-flags clean
	@rm -f ${fileout} ${tempf}
