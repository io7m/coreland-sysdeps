sd_out="../../sysdeps.out"
fileout="../../flags-sdl-ttf"

sysdep: do_sdl-ttf-flags
clean: sdl-ttf-flags_clean

tempf="sdl-ttf-flags.out"

do_sdl-ttf-flags:
	./sdl-ttf-flags 1>>${tempf}
	cp ${tempf} ${fileout}

sdl-ttf-flags_clean:
	rm -f ${fileout} ${tempf}
