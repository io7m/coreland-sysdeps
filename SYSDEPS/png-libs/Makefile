sd_out="../../sysdeps.out"
fileout="../../png-libs"

sysdep: do_png-libs
clean: png-libs_clean

tempf="png-libs.out"

do_png-libs:
	./png-libs 1>>${tempf}
	cp ${tempf} ${fileout}

png-libs_clean:
	rm -f ${fileout} ${tempf}
