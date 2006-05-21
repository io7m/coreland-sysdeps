sd_out="../../sysdeps.out"
fileout="../../libs-sdl-ttf"

sysdep: do_sdl-ttf-libs
clean: sdl-ttf-libs_clean

tempf="sdl-ttf-libs.out"

do_sdl-ttf-libs:
	./sdl-ttf-libs 1>>${tempf}
	cp ${tempf} ${fileout}

sdl-ttf-libs_clean:
	rm -f ${fileout} ${tempf}
