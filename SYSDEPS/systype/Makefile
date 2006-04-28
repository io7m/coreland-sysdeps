sd_out="../../sysdeps.out"

sysdep: systype
clean: systype_clean

tempsys="sysdeps_line.out"

systype:
	./systype.sh ${tempsys}
	cat ${tempsys} >> ${sd_out}

systype_clean:
	rm -f ${tempsys}
