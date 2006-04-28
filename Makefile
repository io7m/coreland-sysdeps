# $Id: Makefile,v 1.3 2006/04/26 18:34:52 mzero Exp $
# auto generated - do not edit

SHELL=/bin/sh
default: all
all:\
  local_pre\
  sysdeps\
  compile link makelib makeso local \
  targets objects dlibs slibs execs local_post 

dlibs:\
	

slibs:\
	ch_flags.a open.a 

execs:\
	

ch_flags.a:\
	makelib\
	ch_flags.o get_flags.o 
	./makelib ch_flags\
	ch_flags.o get_flags.o 

open.a:\
	makelib\
	open_ro.o 
	./makelib open\
	open_ro.o 

objects:\
	ch_flags.o get_flags.o open_ro.o 

#------------------------------------------------------------------
proj_clean:
	rm -f 

#------------------------------------------------------------------
local_pre:
local:
local_post:
local_clean: tests_clean

tests_clean:
	(cd UNIT_TESTS; make clean)

tests:
	(cd UNIT_TESTS; make)

#------------------------------------------------------------------
ch_flags.o:\
	compile ch_flags.c\
	ch_flags.h uint32.h 
	./compile ch_flags.c

get_flags.o:\
	compile get_flags.c\
	ch_flags.h uint32.h 
	./compile get_flags.c

open_ro.o:\
	compile open_ro.c\
	open.h 
	./compile open_ro.c

#------------------------------------------------------------------
compile: config-cc shebang make-compile
	(cat shebang; ./make-compile) > compile; chmod u+x compile;
link: config-ld shebang make-link
	(cat shebang; ./make-link) > link; chmod u+x link;
makelib: shebang make-makelib
	(cat shebang; ./make-makelib) > makelib; chmod u+x makelib;
makeso: shebang make-makeso
	(cat shebang; ./make-makeso) > makeso; chmod u+x makeso
targets:
	./make-targets > targets
#------------------------------------------------------------------
clean: sysdeps_clean main_clean proj_clean local_clean
main_clean:
	cat targets | xargs rm -f
	rm -f compile link makelib targets makeso\
	      
regen:
	cpj-genmk > Makefile.tmp
	mv Makefile.tmp Makefile
#------------------------------------------------------------------
sysdeps: sysdeps.out
sysdeps_clean: sysdep_clean
sysdep_dir=SYSDEPS
sysdep_out=sysdeps.out
sysdeps.out:
	${sysdep_dir}/sysdep-header ${sysdep_out}
	( cd ${sysdep_dir} && make )
sysdep_clean:
	( cd ${sysdep_dir} && make clean )
	rm -f ${sysdep_out}

