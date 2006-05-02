# auto generated - do not edit
# cpj-genmk-0.3

SHELL=/bin/sh
default: all
all: phase_tools_local phase_tools phase_compile_local phase_compile \
	phase_library_local phase_library phase_link_local phase_link 

tests: phase_test_local phase_test 

clean: phase_local_clean phase_tools_clean phase_compile_clean \
	phase_library_clean phase_link_clean phase_test_clean 


#--PHASE-TOOLS----------------------------------------------------------------

phase_tools: 
phase_tools_clean: 

#--PHASE-COMPILE--------------------------------------------------------------

t_ch_flags.o: compile t_ch_flags.c ../ch_flags.h ../uint32.h 
	./compile t_ch_flags.c 
phase_compile: t_ch_flags.o 
phase_compile_clean: 
	rm -f t_ch_flags.o 

#--PHASE-LIBRARY--------------------------------------------------------------

phase_library: 
phase_library_clean: 

#--PHASE-LINK-----------------------------------------------------------------

t_ch_flags: link t_ch_flags.ld t_ch_flags.o ../ch_flags.a ../open.a 
	./link t_ch_flags t_ch_flags.o ../ch_flags.a ../open.a 
phase_link: t_ch_flags 
phase_link_clean: 
	rm -f t_ch_flags 

#--PHASE-TEST-----------------------------------------------------------------

phase_test: list_tests run_tests
phase_test_clean: tests_clean

tests_clean:
	rm -f testlist

list_tests:
	./list-tests > testlist

run_tests:
	./run-tests -v

#--LOCAL----------------------------------------------------------------------

phase_sysdeps_local:
phase_tools_local: tools
phase_compile_local:
phase_library_local:
phase_link_local:
phase_test_local:
phase_install_check_local:
phase_local_clean: toollink_clean

toollink_clean:
	rm -f compile link makelib config-cc config-ld shebang make-compile \
	make-link make-makelib make-targets make-makeso make-targets targets \
	makeso

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

#--TOOLS----------------------------------------------------------------------

regen:
	cpj-genmk -t -s > Makefile.tmp
	mv Makefile.tmp Makefile
