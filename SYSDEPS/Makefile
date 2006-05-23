default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_ch_flags sd_direntry sd_endian sd_floats sd_integers sd_png-flags sd_png-libs sd_sdl-flags sd_sdl-libs sd_systype sd_x86cpuid sd_sdl-mixer-flags sd_sdl-mixer-libs sd_sdl-image-flags sd_sdl-image-libs sd_opengl-flags sd_opengl-libs sd_sdl-ttf-flags sd_sdl-ttf-libs sd_dlopen
sysdeps_clean:  sd_ch_flags_clean sd_direntry_clean sd_endian_clean sd_floats_clean sd_integers_clean sd_png-flags_clean sd_png-libs_clean sd_sdl-flags_clean sd_sdl-libs_clean sd_systype_clean sd_x86cpuid_clean sd_sdl-mixer-flags_clean sd_sdl-mixer-libs_clean sd_sdl-image-flags_clean sd_sdl-image-libs_clean sd_opengl-flags_clean sd_opengl-libs_clean sd_sdl-ttf-flags_clean sd_sdl-ttf-libs_clean sd_dlopen_clean

sd_ch_flags:
	(cd ch_flags && make)
sd_ch_flags_clean:
	(cd ch_flags && make clean)

sd_direntry:
	(cd direntry && make)
sd_direntry_clean:
	(cd direntry && make clean)

sd_endian:
	(cd endian && make)
sd_endian_clean:
	(cd endian && make clean)

sd_floats:
	(cd floats && make)
sd_floats_clean:
	(cd floats && make clean)

sd_integers:
	(cd integers && make)
sd_integers_clean:
	(cd integers && make clean)

sd_png-flags:
	(cd png-flags && make)
sd_png-flags_clean:
	(cd png-flags && make clean)

sd_png-libs:
	(cd png-libs && make)
sd_png-libs_clean:
	(cd png-libs && make clean)

sd_sdl-flags:
	(cd sdl-flags && make)
sd_sdl-flags_clean:
	(cd sdl-flags && make clean)

sd_sdl-libs:
	(cd sdl-libs && make)
sd_sdl-libs_clean:
	(cd sdl-libs && make clean)

sd_systype:
	(cd systype && make)
sd_systype_clean:
	(cd systype && make clean)

sd_x86cpuid:
	(cd x86cpuid && make)
sd_x86cpuid_clean:
	(cd x86cpuid && make clean)

sd_sdl-mixer-flags:
	(cd sdl-mixer-flags && make)
sd_sdl-mixer-flags_clean:
	(cd sdl-mixer-flags && make clean)

sd_sdl-mixer-libs:
	(cd sdl-mixer-libs && make)
sd_sdl-mixer-libs_clean:
	(cd sdl-mixer-libs && make clean)

sd_sdl-image-flags:
	(cd sdl-image-flags && make)
sd_sdl-image-flags_clean:
	(cd sdl-image-flags && make clean)

sd_sdl-image-libs:
	(cd sdl-image-libs && make)
sd_sdl-image-libs_clean:
	(cd sdl-image-libs && make clean)

sd_opengl-flags:
	(cd opengl-flags && make)
sd_opengl-flags_clean:
	(cd opengl-flags && make clean)

sd_opengl-libs:
	(cd opengl-libs && make)
sd_opengl-libs_clean:
	(cd opengl-libs && make clean)

sd_sdl-ttf-flags:
	(cd sdl-ttf-flags && make)
sd_sdl-ttf-flags_clean:
	(cd sdl-ttf-flags && make clean)

sd_sdl-ttf-libs:
	(cd sdl-ttf-libs && make)
sd_sdl-ttf-libs_clean:
	(cd sdl-ttf-libs && make clean)

sd_dlopen:
	(cd dlopen && make)
sd_dlopen_clean:
	(cd dlopen && make clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
