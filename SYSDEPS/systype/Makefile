sd_out="../../sysdeps.out"

sysdep: systype
clean: systype_clean

tempsys="sysdeps_line.out"

systype:
	@echo systype run
	@./systype.sh ${tempsys}
	@cat ${tempsys} >> ${sd_out}

systype_clean:
	@echo systype clean
	@rm -f ${tempsys}
