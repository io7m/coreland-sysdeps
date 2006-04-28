sd_out="../../sysdeps.out"

sysdep: x86cpuid
clean: x86cpuid_clean

tempsys="sysdeps_line.out"

x86cpuid:
	./x86cpuid.sh ${tempsys}
	cat ${tempsys} >> ${sd_out}

x86cpuid_clean:
	rm -f x86cpuid ${tempsys}
