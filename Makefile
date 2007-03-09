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

cc-compile: conf-cc conf-cctype sysdeps.out flags-altivec \
	flags-corelib flags-fastcgi flags-fltk11 flags-fltk2 flags-io_poll \
	flags-jack flags-opengl flags-pdcgi flags-png flags-portaudio \
	flags-sdl flags-sdl-image flags-sdl-mixer flags-sdl-ttf \
	flags-sndfile flags-sse flags-sse2 flags-sse3 flags-tiff 
cc-link: conf-ld sysdeps.out 
cc-slib: conf-systype 
ch_flags.a:\
	cc-slib ch_flags.sld ch_flags.o get_flags.o 
	./cc-slib ch_flags ch_flags.o get_flags.o 
ch_flags.o:\
	cc-compile ch_flags.c ch_flags.h uint32.h 
	./cc-compile ch_flags.c
conf-cctype:\
	conf-systype conf-cc mk-cctype 
	./mk-cctype > conf-cctype
conf-systype:\
	mk-systype 
	./mk-systype > conf-systype
depchklist:\
	cc-link depchklist.ld depchklist.o 
	./cc-link depchklist depchklist.o 
depchklist.o:\
	cc-compile depchklist.c ch_flags.h dlopen.h fd.h floatcast.h \
	aio-mech.h sd_fcntl.h sd_mmap.h sig_action.h sig_pmask.h sysinfo.h 
	./cc-compile depchklist.c
get_flags.o:\
	cc-compile get_flags.c ch_flags.h open.h uint32.h 
	./cc-compile get_flags.c
mk-cctype: conf-cc conf-systype 
mk-systype: conf-cc 
open.a:\
	cc-slib open.sld open_ro.o 
	./cc-slib open open_ro.o 
open_ro.o:\
	cc-compile open_ro.c open.h 
	./cc-compile open_ro.c
clean: sysdeps_clean 
	rm -f ch_flags.a ch_flags.o depchklist depchklist.o get_flags.o \
	open.a open_ro.o 

regen:
	cpj-genmk > Makefile.tmp
	mv Makefile.tmp Makefile

