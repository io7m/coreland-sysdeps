sd_out="../../sysdeps.out"
header="../../direntry.h"

sysdep: do_direntry
clean: direntry_clean

do_direntry:
	./direntry ${header} ${sd_out}

direntry_clean:
	rm -f trydirent.o
	rm -f ${header}
