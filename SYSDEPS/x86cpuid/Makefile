sd_out="../../sysdeps.out"

sysdep: x86cpuid
clean: x86cpuid_clean

tempsys="sysdeps_line.out"

x86cpuid:
	@echo x86cpuid run
	@./x86cpuid.sh ${tempsys}
	@./cat.sh ${tempsys} ${sd_out}

x86cpuid_clean:
	@echo x86cpuid clean
	@rm -f x86cpuid ${tempsys}
