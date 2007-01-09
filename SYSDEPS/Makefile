default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_corelib-flags sd_corelib-libs sd_corelib-libs-S sd_io_poll-flags sd_io_poll-libs-S sd_pdcgi-flags sd_pdcgi-libs-S sd_aio-mech
sysdeps_clean:  sd_corelib-flags_clean sd_corelib-libs_clean sd_corelib-libs-S_clean sd_io_poll-flags_clean sd_io_poll-libs-S_clean sd_pdcgi-flags_clean sd_pdcgi-libs-S_clean sd_aio-mech_clean

sd_corelib-flags:
	@(cd modules/corelib-flags && ./run)
sd_corelib-flags_clean:
	@(cd modules/corelib-flags && ./clean)

sd_corelib-libs:
	@(cd modules/corelib-libs && ./run)
sd_corelib-libs_clean:
	@(cd modules/corelib-libs && ./clean)

sd_corelib-libs-S:
	@(cd modules/corelib-libs-S && ./run)
sd_corelib-libs-S_clean:
	@(cd modules/corelib-libs-S && ./clean)

sd_io_poll-flags:
	@(cd modules/io_poll-flags && ./run)
sd_io_poll-flags_clean:
	@(cd modules/io_poll-flags && ./clean)

sd_io_poll-libs-S:
	@(cd modules/io_poll-libs-S && ./run)
sd_io_poll-libs-S_clean:
	@(cd modules/io_poll-libs-S && ./clean)

sd_pdcgi-flags:
	@(cd modules/pdcgi-flags && ./run)
sd_pdcgi-flags_clean:
	@(cd modules/pdcgi-flags && ./clean)

sd_pdcgi-libs-S:
	@(cd modules/pdcgi-libs-S && ./run)
sd_pdcgi-libs-S_clean:
	@(cd modules/pdcgi-libs-S && ./clean)

sd_aio-mech:
	@(cd modules/aio-mech && ./run)
sd_aio-mech_clean:
	@(cd modules/aio-mech && ./clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
