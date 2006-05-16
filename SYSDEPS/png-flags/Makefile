sd_out="../../sysdeps.out"
fileout="../../flags-png"

sysdep: do_png-flags
clean: png-flags_clean

tempf="png-flags.out"

do_png-flags:
	./png-flags 1>>${tempf}
	cp ${tempf} ${fileout}

png-flags_clean:
	rm -f ${fileout} ${tempf}
