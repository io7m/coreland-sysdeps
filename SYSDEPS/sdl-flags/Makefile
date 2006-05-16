sd_out="../../sysdeps.out"
fileout="../../flags-sdl"

sysdep: do_sdl-flags
clean: sdl-flags_clean

tempf="sdl-flags.out"

do_sdl-flags:
	./sdl-flags 1>>${tempf}
	cp ${tempf} ${fileout}

sdl-flags_clean:
	rm -f ${fileout} ${tempf}
