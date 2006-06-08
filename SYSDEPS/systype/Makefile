sd_out="../../sysdeps.out"

sysdep: systype
clean: systype_clean

tempsys="sysdeps_line.out"

systype:
	@echo SYSDEPS systype run
	@./systype.sh ${tempsys}
	@cat ${tempsys} >> ${sd_out}

systype_clean:
	@echo SYSDEPS systype clean
	@rm -f ${tempsys}
