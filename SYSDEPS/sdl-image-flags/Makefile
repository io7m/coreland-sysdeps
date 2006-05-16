sd_out="../../sysdeps.out"
fileout="../../flags-sdl-image"

sysdep: do_sdl-image-flags
clean: sdl-image-flags_clean

tempf="sdl-image-flags.out"

do_sdl-image-flags:
	./sdl-image-flags 1>>${tempf}
	cp ${tempf} ${fileout}

sdl-image-flags_clean:
	rm -f ${fileout} ${tempf}
