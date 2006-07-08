# auto generated - do not edit
# cpj-genmk-0.77

SHELL=/bin/sh
default: all
all: phase_sysdeps phase_tools phase_compile phase_library \
	phase_link 

tests: phase_test 

clean: phase_sysdeps_clean phase_tools_clean phase_compile_clean \
	phase_library_clean phase_link_clean phase_test_clean 


#--SYSDEPS--------------------------------------------------------------------

phase_sysdeps: sysdeps
phase_sysdeps_clean: sysdeps_clean

#--TOOLS----------------------------------------------------------------------

phase_tools:  mkftools
phase_tools_clean:  mkftools_clean

#--COMPILE--------------------------------------------------------------------

ch_flags.o:\
	compile ch_flags.c ch_flags.h uint32.h 
	./compile ch_flags ch_flags.c 
depchklist.o:\
	compile depchklist.c ch_flags.h dlopen.h fd.h floatcast.h \
	sig_action.h sig_pmask.h 
	./compile depchklist depchklist.c 
get_flags.o:\
	compile get_flags.c ch_flags.h open.h uint32.h 
	./compile get_flags get_flags.c 
open_ro.o:\
	compile open_ro.c open.h 
	./compile open_ro open_ro.c 

phase_compile:\
	ch_flags.o depchklist.o get_flags.o open_ro.o 
phase_compile_clean:
	rm -f ch_flags.o depchklist.o get_flags.o open_ro.o 

#--LIBRARY--------------------------------------------------------------------

ch_flags.a:\
	makelib ch_flags.sld ch_flags.o get_flags.o 
	./makelib ch_flags ch_flags.o get_flags.o 
open.a:\
	makelib open.sld open_ro.o 
	./makelib open open_ro.o 

phase_library:\
	ch_flags.a open.a 
phase_library_clean:
	rm -f ch_flags.a open.a 

#--LINK-----------------------------------------------------------------------

depchklist:\
	link depchklist.ld depchklist.o 
	./link depchklist depchklist.o 

phase_link:\
	depchklist 
phase_link_clean:
	rm -f depchklist 

#--TEST-----------------------------------------------------------------------

phase_test_clean:
	(cd UNIT_TESTS; make clean)

phase_test:
	(cd UNIT_TESTS; make && make tests)

#--SYSDEPS-TARGET-------------------------------------------------------------

sysdeps: sysdeps.out
sysdeps_clean: sysdep_clean
sysdeps.out:
	SYSDEPS/sysdep-header sysdeps.out
	(cd SYSDEPS && make )
sysdep_clean:
	(cd SYSDEPS && make clean)
	rm -f sysdeps.out

#--TOOLS----------------------------------------------------------------------

mkftools: compile makelib libname makeso link 
compile: sysdeps.out conf-shebang conf-cc make-compile conf-ccfflist \
	flags-corelib flags-jack flags-png flags-sdl flags-sdl-image \
	flags-sdl-mixer flags-sdl-ttf flags-sndfile 
	(cat conf-shebang; ./make-compile) > compile; chmod u+x compile;
link: sysdeps.out conf-shebang conf-ld make-link 
	(cat conf-shebang; ./make-link) > link; chmod u+x link;
makelib: sysdeps.out conf-shebang make-makelib 
	(cat conf-shebang; ./make-makelib) > makelib; chmod u+x makelib;
makeso: sysdeps.out conf-shebang libname make-makeso 
	(cat conf-shebang; ./make-makeso) > makeso; chmod u+x makeso;
libname: sysdeps.out conf-shebang make-libname 
	(cat conf-shebang; ./make-libname) > libname; chmod u+x libname;
mkftools_clean: 
	 rm -f compile makelib makeso libname link 
regen:
	cpj-genmk > Makefile.tmp
	mv Makefile.tmp Makefile
