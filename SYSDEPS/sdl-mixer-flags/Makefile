sd_out="../../sysdeps.out"
fileout="../../sdl-mixer-flags"

sysdep: do_sdl-mixer-flags
clean: sdl-mixer-flags_clean

tempf="sdl-mixer-flags.out"

do_sdl-mixer-flags:
	./sdl-mixer-flags 1>>${tempf}
	cp ${tempf} ${fileout}

sdl-mixer-flags_clean:
	rm -f ${fileout} ${tempf}
