default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_corelib-flags sd_corelib-libs sd_corelib-libs-S sd_io_poll-flags sd_io_poll-libs-S sd_pdcgi-flags sd_pdcgi-libs-S sd_aio-mech sd_ch_flags sd_byteorder sd_direntry sd_dlopen sd_fastcgi-flags sd_fastcgi-libs sd_float32 sd_float64 sd_uint16 sd_uint32 sd_uint64 sd_int16 sd_int32 sd_int64
sysdeps_clean:  sd_corelib-flags_clean sd_corelib-libs_clean sd_corelib-libs-S_clean sd_io_poll-flags_clean sd_io_poll-libs-S_clean sd_pdcgi-flags_clean sd_pdcgi-libs-S_clean sd_aio-mech_clean sd_ch_flags_clean sd_byteorder_clean sd_direntry_clean sd_dlopen_clean sd_fastcgi-flags_clean sd_fastcgi-libs_clean sd_float32_clean sd_float64_clean sd_uint16_clean sd_uint32_clean sd_uint64_clean sd_int16_clean sd_int32_clean sd_int64_clean

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

sd_float32:
	@(cd modules/float32 && ./run)
sd_float32_clean:
	@(cd modules/float32 && ./clean)

sd_float64:
	@(cd modules/float64 && ./run)
sd_float64_clean:
	@(cd modules/float64 && ./clean)

sd_uint16:
	@(cd modules/uint16 && ./run)
sd_uint16_clean:
	@(cd modules/uint16 && ./clean)

sd_uint32:
	@(cd modules/uint32 && ./run)
sd_uint32_clean:
	@(cd modules/uint32 && ./clean)

sd_uint64:
	@(cd modules/uint64 && ./run)
sd_uint64_clean:
	@(cd modules/uint64 && ./clean)

sd_int16:
	@(cd modules/int16 && ./run)
sd_int16_clean:
	@(cd modules/int16 && ./clean)

sd_int32:
	@(cd modules/int32 && ./run)
sd_int32_clean:
	@(cd modules/int32 && ./clean)

sd_int64:
	@(cd modules/int64 && ./run)
sd_int64_clean:
	@(cd modules/int64 && ./clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
