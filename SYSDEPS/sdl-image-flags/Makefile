sd_out="../../sysdeps.out"
fileout="../../flags-sdl-image"

sysdep: do_sdl-image-flags
clean: sdl-image-flags_clean

tempf="sdl-image-flags.out"

do_sdl-image-flags:
	@echo SYSDEPS sdl-image-flags run create flags-sdl-image
	@./sdl-image-flags 1>>${tempf}
	@cp ${tempf} ${fileout}

sdl-image-flags_clean:
	@echo SYSDEPS sdl-image-flags clean
	@rm -f ${fileout} ${tempf}
