default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_corelib-flags
sysdeps_clean:  sd_corelib-flags_clean

sd_corelib-flags:
	@(cd modules/corelib-flags && ./run)
sd_corelib-flags_clean:
	@(cd modules/corelib-flags && ./clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
