# auto generated - do not edit
# cpj-genmk-0.2

SHELL=/bin/sh
default: all
all: phase_sysdeps_local phase_sysdeps phase_tools_local phase_tools \
	phase_compile_local phase_compile phase_library_local phase_library \
	phase_link_local phase_link 

tests: phase_test_local phase_test 

install: phase_install_local phase_install 

install-check: phase_install_check_local phase_install_check 

clean: phase_local_clean phase_sysdeps_clean phase_tools_clean \
	phase_compile_clean phase_library_clean phase_link_clean 


#--PHASE-SYSDEPS--------------------------------------------------------------

phase_sysdeps: sysdeps
phase_sysdeps_clean: sysdeps_clean

#--PHASE-TOOLS----------------------------------------------------------------

phase_tools:  mkftools
phase_tools_clean:  mkftools_clean

#--PHASE-COMPILE--------------------------------------------------------------

ch_flags.o: compile ch_flags.c ch_flags.h uint32.h 
	./compile ch_flags.c 
get_flags.o: compile get_flags.c ch_flags.h open.h uint32.h 
	./compile get_flags.c 
open_ro.o: compile open_ro.c open.h 
	./compile open_ro.c 
phase_compile: ch_flags.o get_flags.o open_ro.o 
phase_compile_clean: 
	rm -f ch_flags.o get_flags.o open_ro.o 

#--PHASE-LIBRARY--------------------------------------------------------------

ch_flags.a: makelib ch_flags.sld ch_flags.o get_flags.o 
	./makelib ch_flags ch_flags.o get_flags.o 
open.a: makelib open.sld open_ro.o 
	./makelib open open_ro.o 
phase_library: ch_flags.a open.a 
phase_library_clean: 
	rm -f ch_flags.a open.a 

#--PHASE-LINK-----------------------------------------------------------------

phase_link: 
phase_link_clean: 

#--PHASE-TEST-----------------------------------------------------------------

phase_test: 
phase_test_clean: 

#--PHASE-INSTALL--------------------------------------------------------------

phase_install: 
phase_install_clean: 

#--PHASE-INSTALL-CHECK--------------------------------------------------------

phase_install_check: 
phase_install_check_clean: 

#--LOCAL----------------------------------------------------------------------

phase_sysdeps_local:
phase_tools_local:
phase_compile_local:
phase_library_local:
phase_link_local:
phase_test_local:
phase_install_check_local:
phase_local_clean: tests_clean

tests_clean:
	(cd UNIT_TESTS; make clean)

tests:
	(cd UNIT_TESTS; make)

#--SYSDEPS--------------------------------------------------------------------

sysdeps: sysdeps.out
sysdeps_clean: sysdep_clean
sysdeps.out:
	SYSDEPS/sysdep-header sysdeps.out
	(cd SYSDEPS && make )
sysdep_clean:
	(cd SYSDEPS && make clean)
	rm -f sysdeps.out

#--TOOLS----------------------------------------------------------------------

mkftools: compile makelib makeso link 
compile: shebang config-cc make-compile
	(cat shebang; ./make-compile) > compile; chmod u+x compile;
link: shebang config-ld make-link
	(cat shebang; ./make-link) > link; chmod u+x link;
makelib: shebang make-makelib
	(cat shebang; ./make-makelib) > makelib; chmod u+x makelib;
makeso: shebang make-makeso
	(cat shebang; ./make-makeso) > makeso; chmod u+x makeso;
mkftools_clean: 
	 rm -f compile makelib makeso link 
regen:
	cpj-genmk > Makefile.tmp
	mv Makefile.tmp Makefile
