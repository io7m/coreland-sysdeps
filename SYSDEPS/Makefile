default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_corelib-flags sd_corelib-libs sd_corelib-libs-S sd_io_poll-flags sd_io_poll-libs-S sd_pdcgi-flags sd_pdcgi-libs-S sd_aio-mech sd_ch_flags sd_byteorder sd_direntry sd_dlopen sd_fastcgi-flags sd_fastcgi-libs
sysdeps_clean:  sd_corelib-flags_clean sd_corelib-libs_clean sd_corelib-libs-S_clean sd_io_poll-flags_clean sd_io_poll-libs-S_clean sd_pdcgi-flags_clean sd_pdcgi-libs-S_clean sd_aio-mech_clean sd_ch_flags_clean sd_byteorder_clean sd_direntry_clean sd_dlopen_clean sd_fastcgi-flags_clean sd_fastcgi-libs_clean

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

sd_ch_flags:
	@(cd modules/ch_flags && ./run)
sd_ch_flags_clean:
	@(cd modules/ch_flags && ./clean)

sd_byteorder:
	@(cd modules/byteorder && ./run)
sd_byteorder_clean:
	@(cd modules/byteorder && ./clean)

sd_direntry:
	@(cd modules/direntry && ./run)
sd_direntry_clean:
	@(cd modules/direntry && ./clean)

sd_dlopen:
	@(cd modules/dlopen && ./run)
sd_dlopen_clean:
	@(cd modules/dlopen && ./clean)

sd_fastcgi-flags:
	@(cd modules/fastcgi-flags && ./run)
sd_fastcgi-flags_clean:
	@(cd modules/fastcgi-flags && ./clean)

sd_fastcgi-libs:
	@(cd modules/fastcgi-libs && ./run)
sd_fastcgi-libs_clean:
	@(cd modules/fastcgi-libs && ./clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
