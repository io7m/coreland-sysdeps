# $Id: Makefile,v 1.1 2006/04/26 18:34:31 mzero Exp $
# auto generated - do not edit

SHELL=/bin/sh
default: all
all:\
  local_pre\
  compile link makelib makeso local \
  targets objects dlibs slibs execs local_post 

dlibs:\
	

slibs:\
	

execs:\
	t_ch_flags 

t_ch_flags:\
	link t_ch_flags.o\
	../ch_flags.a ../open.a 
	./link t_ch_flags\
	../ch_flags.a ../open.a 

objects:\
	t_ch_flags.o 

#------------------------------------------------------------------
proj_clean:
	rm -f t_ch_flags 

#------------------------------------------------------------------
local_pre: tools
local:
local_clean: tests_clean toollink_clean
local_post: list_tests run_tests

tests_clean:
	rm -f testlist

toollink_clean:
	rm -f compile link makelib config-cc config-ld shebang make-compile \
	make-link make-makelib make-targets make-makeso make-targets targets

tools: compile link makeso makelib targets
 
compile:
	ln -s ../compile compile
link:
	ln -s ../link link
makeso:
	ln -s ../makeso makeso
makelib:
	ln -s ../makelib makelib
make-targets:
	ln -s ../make-targets make-targets
targets: make-targets
	./make-targets > targets

list_tests:
	./list-tests > testlist

run_tests:
	./run-tests -v

#------------------------------------------------------------------
t_ch_flags.o:\
	compile t_ch_flags.c\
	
	./compile t_ch_flags.c

#------------------------------------------------------------------
clean: main_clean proj_clean local_clean
main_clean:
	cat targets | xargs rm -f
	rm -f compile link makelib targets makeso\
	      
regen:
	cpj-genmk -s -t > Makefile.tmp
	mv Makefile.tmp Makefile
#------------------------------------------------------------------

