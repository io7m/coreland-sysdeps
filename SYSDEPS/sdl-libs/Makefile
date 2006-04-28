sd_out="../../sysdeps.out"
fileout="../../sdl-libs"

sysdep: do_sdl-libs
clean: sdl-libs_clean

tempf="sdl-libs.out"

do_sdl-libs:
	./sdl-libs 1>>${tempf}
	cp ${tempf} ${fileout}

sdl-libs_clean:
	rm -f ${fileout} ${tempf}
