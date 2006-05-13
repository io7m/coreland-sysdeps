sd_out="../../sysdeps.out"
fileout="../../sdl-image-libs"

sysdep: do_sdl-image-libs
clean: sdl-image-libs_clean

tempf="sdl-image-libs.out"

do_sdl-image-libs:
	./sdl-image-libs 1>>${tempf}
	cp ${tempf} ${fileout}

sdl-image-libs_clean:
	rm -f ${fileout} ${tempf}
