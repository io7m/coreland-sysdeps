default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_ch_flags sd_direntry sd_endian sd_floats sd_integers sd_png-flags sd_png-libs sd_sdl-flags sd_sdl-libs sd_systype sd_x86cpuid sd_sdl-mixer-flags sd_sdl-mixer-libs sd_sdl-image-flags sd_sdl-image-libs sd_opengl-flags sd_opengl-libs sd_sdl-ttf-flags sd_sdl-ttf-libs sd_dlopen sd_signal
sysdeps_clean:  sd_ch_flags_clean sd_direntry_clean sd_endian_clean sd_floats_clean sd_integers_clean sd_png-flags_clean sd_png-libs_clean sd_sdl-flags_clean sd_sdl-libs_clean sd_systype_clean sd_x86cpuid_clean sd_sdl-mixer-flags_clean sd_sdl-mixer-libs_clean sd_sdl-image-flags_clean sd_sdl-image-libs_clean sd_opengl-flags_clean sd_opengl-libs_clean sd_sdl-ttf-flags_clean sd_sdl-ttf-libs_clean sd_dlopen_clean sd_signal_clean

sd_ch_flags:
	@(cd ch_flags && ./run)
sd_ch_flags_clean:
	@(cd ch_flags && ./clean)

sd_direntry:
	@(cd direntry && ./run)
sd_direntry_clean:
	@(cd direntry && ./clean)

sd_endian:
	@(cd endian && ./run)
sd_endian_clean:
	@(cd endian && ./clean)

sd_floats:
	@(cd floats && ./run)
sd_floats_clean:
	@(cd floats && ./clean)

sd_integers:
	@(cd integers && ./run)
sd_integers_clean:
	@(cd integers && ./clean)

sd_png-flags:
	@(cd png-flags && ./run)
sd_png-flags_clean:
	@(cd png-flags && ./clean)

sd_png-libs:
	@(cd png-libs && ./run)
sd_png-libs_clean:
	@(cd png-libs && ./clean)

sd_sdl-flags:
	@(cd sdl-flags && ./run)
sd_sdl-flags_clean:
	@(cd sdl-flags && ./clean)

sd_sdl-libs:
	@(cd sdl-libs && ./run)
sd_sdl-libs_clean:
	@(cd sdl-libs && ./clean)

sd_systype:
	@(cd systype && ./run)
sd_systype_clean:
	@(cd systype && ./clean)

sd_x86cpuid:
	@(cd x86cpuid && ./run)
sd_x86cpuid_clean:
	@(cd x86cpuid && ./clean)

sd_sdl-mixer-flags:
	@(cd sdl-mixer-flags && ./run)
sd_sdl-mixer-flags_clean:
	@(cd sdl-mixer-flags && ./clean)

sd_sdl-mixer-libs:
	@(cd sdl-mixer-libs && ./run)
sd_sdl-mixer-libs_clean:
	@(cd sdl-mixer-libs && ./clean)

sd_sdl-image-flags:
	@(cd sdl-image-flags && ./run)
sd_sdl-image-flags_clean:
	@(cd sdl-image-flags && ./clean)

sd_sdl-image-libs:
	@(cd sdl-image-libs && ./run)
sd_sdl-image-libs_clean:
	@(cd sdl-image-libs && ./clean)

sd_opengl-flags:
	@(cd opengl-flags && ./run)
sd_opengl-flags_clean:
	@(cd opengl-flags && ./clean)

sd_opengl-libs:
	@(cd opengl-libs && ./run)
sd_opengl-libs_clean:
	@(cd opengl-libs && ./clean)

sd_sdl-ttf-flags:
	@(cd sdl-ttf-flags && ./run)
sd_sdl-ttf-flags_clean:
	@(cd sdl-ttf-flags && ./clean)

sd_sdl-ttf-libs:
	@(cd sdl-ttf-libs && ./run)
sd_sdl-ttf-libs_clean:
	@(cd sdl-ttf-libs && ./clean)

sd_dlopen:
	@(cd dlopen && ./run)
sd_dlopen_clean:
	@(cd dlopen && ./clean)

sd_signal:
	@(cd signal && ./run)
sd_signal_clean:
	@(cd signal && ./clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
