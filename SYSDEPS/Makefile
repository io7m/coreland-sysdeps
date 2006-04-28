default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_direntry sd_floats sd_integers sd_systype sd_endian sd_sdl-libs sd_sdl-flags sd_png-flags sd_png-libs sd_x86cpuid sd_ch_flags
sysdeps_clean:  sd_direntry_clean sd_floats_clean sd_integers_clean sd_systype_clean sd_endian_clean sd_sdl-libs_clean sd_sdl-flags_clean sd_png-flags_clean sd_png-libs_clean sd_x86cpuid_clean sd_ch_flags_clean

sd_direntry:
	( cd direntry && make )
sd_direntry_clean:
	( cd direntry && make clean)

sd_floats:
	( cd floats && make )
sd_floats_clean:
	( cd floats && make clean)

sd_integers:
	( cd integers && make )
sd_integers_clean:
	( cd integers && make clean)

sd_systype:
	( cd systype && make )
sd_systype_clean:
	( cd systype && make clean)

sd_endian:
	( cd endian && make )
sd_endian_clean:
	( cd endian && make clean)

sd_sdl-libs:
	( cd sdl-libs && make )
sd_sdl-libs_clean:
	( cd sdl-libs && make clean)

sd_sdl-flags:
	( cd sdl-flags && make )
sd_sdl-flags_clean:
	( cd sdl-flags && make clean)

sd_png-flags:
	( cd png-flags && make )
sd_png-flags_clean:
	( cd png-flags && make clean)

sd_png-libs:
	( cd png-libs && make )
sd_png-libs_clean:
	( cd png-libs && make clean)

sd_x86cpuid:
	( cd x86cpuid && make )
sd_x86cpuid_clean:
	( cd x86cpuid && make clean)

sd_ch_flags:
	( cd ch_flags && make )
sd_ch_flags_clean:
	( cd ch_flags && make clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
