# auto generated - do not edit

default: all

all: sysdeps.out \
	ch_flags.a depchklist open.a 

sysdeps: sysdeps.out
sysdeps.out:
	SYSDEPS/sysdep-header sysdeps.out
	(cd SYSDEPS && make)
sysdeps_clean:
	(cd SYSDEPS && make clean)
	rm -f sysdeps.out

cc: conf-cc conf-cctype sysdeps.out flags-corelib flags-fltk11 \
	flags-fltk2 flags-io_poll flags-jack flags-pdcgi flags-png flags-sdl \
	flags-sdl-image flags-sdl-mixer flags-sdl-ttf flags-sndfile 
ch_flags.a:\
	mk-slib ch_flags.sld ch_flags.o get_flags.o 
	./mk-slib ch_flags ch_flags.o get_flags.o 
ch_flags.o:\
	cc ch_flags.c ch_flags.h uint32.h 
	./cc ch_flags.c
conf-cctype:\
	conf-systype conf-cc mk-cctype 
	./mk-cctype > conf-cctype
conf-systype:\
	mk-systype 
	./mk-systype > conf-systype
depchklist:\
	ld depchklist.ld depchklist.o 
	./ld depchklist depchklist.o 
depchklist.o:\
	cc depchklist.c ch_flags.h dlopen.h fd.h floatcast.h aio-mech.h \
	sig_action.h sig_pmask.h 
	./cc depchklist.c
get_flags.o:\
	cc get_flags.c ch_flags.h open.h uint32.h 
	./cc get_flags.c
ld: conf-ld sysdeps.out 
mk-cctype: conf-cc conf-systype 
mk-ctxt.o:\
	cc mk-ctxt.c
	./cc mk-ctxt.c
mk-ctxt:\
	ld mk-ctxt.o mk-ctxt.ld
	./ld mk-ctxt mk-ctxt.o
mk-slib: conf-systype 
open.a:\
	mk-slib open.sld open_ro.o 
	./mk-slib open open_ro.o 
open_ro.o:\
	cc open_ro.c open.h 
	./cc open_ro.c
clean: sysdeps_clean 
	rm -f ch_flags.a ch_flags.o conf-cctype conf-systype depchklist \
	depchklist.o get_flags.o open.a open_ro.o 

regen:
	cpj-genmk > Makefile.tmp
	mv Makefile.tmp Makefile

