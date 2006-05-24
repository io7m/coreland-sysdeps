sd_out="../../sysdeps.out"
file1out="../../sig_action.h"
file2out="../../sig_pmask.h"

sysdep: do_signal
clean: signal_clean

tempf1="sig_action.h"
tempf2="sig_pmask.h"
tempsys="sysdeps.out"

do_signal:
	./signal ${tempf1} ${tempf2} ${tempsys}
	cp ${tempf1} ${file1out}
	cp ${tempf2} ${file2out}
	cat ${tempsys} >> ${sd_out}

signal_clean:
	rm -f ${file1out} ${file2out} ${tempf1} ${tempf2} \
  ${tempsys} trysigact trysigpm
