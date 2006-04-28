sd_out="../../sysdeps.out"
fileout="../../png-flags"

sysdep: do_png-flags
clean: png-flags_clean

tempf="png-flags.out"

do_png-flags:
	./png-flags 1>>${tempf}
	cp ${tempf} ${fileout}

png-flags_clean:
	rm -f ${fileout} ${tempf}
