# auto generated - do not edit

default: all

all: sysdeps.out ch_flags.a depchklist open.a 

sysdeps: sysdeps.out
sysdeps.out:
	SYSDEPS/sysdep-header sysdeps.out
	(cd SYSDEPS && make)
sysdeps_clean:
	(cd SYSDEPS && make clean)
	rm -f sysdeps.out

_aio-mech.h: sysdeps.out
flags-altivec: sysdeps.out
_byteorder.h: sysdeps.out
_ch_flags.h: sysdeps.out
flags-corelib: sysdeps.out
libs-corelib: sysdeps.out
libs-corelib: sysdeps.out
_direntry.h: sysdeps.out
flags-fastcgi: sysdeps.out
libs-fastcgi: sysdeps.out
_float32.h: sysdeps.out
_float64.h: sysdeps.out
flags-fltk11: sysdeps.out
libs-fltk11: sysdeps.out
libs-fltk11: sysdeps.out
flags-fltk2: sysdeps.out
libs-fltk2: sysdeps.out
libs-fltk2: sysdeps.out
_int16.h: sysdeps.out
_int32.h: sysdeps.out
_int64.h: sysdeps.out
flags-io_poll: sysdeps.out
libs-io_poll: sysdeps.out
flags-jack: sysdeps.out
libs-jack: sysdeps.out
flags-loadso: sysdeps.out
libs-loadso: sysdeps.out
libs-loadso: sysdeps.out
flags-opengl: sysdeps.out
libs-opengl: sysdeps.out
flags-pdcgi: sysdeps.out
libs-pdcgi: sysdeps.out
flags-png: sysdeps.out
libs-png: sysdeps.out
flags-portaudio: sysdeps.out
libs-portaudio: sysdeps.out
_sd_dlopen.h: sysdeps.out
libs-dlopen: sysdeps.out
_sd_fcntl.h: sysdeps.out
flags-fcntl: sysdeps.out
libs-fcntl: sysdeps.out
_sd_fd.h: sysdeps.out
_sd_fork.h: sysdeps.out
_sd_inline.h: sysdeps.out
_sd_longlong.h: sysdeps.out
libs-math: sysdeps.out
flags-math: sysdeps.out
_sd_math.h: sysdeps.out
_sd_mmap.h: sysdeps.out
libs-posix_rt: sysdeps.out
flags-posix_rt: sysdeps.out
_sd_posix_rt.h: sysdeps.out
flags-pthreads: sysdeps.out
flags-pthr_rt: sysdeps.out
libs-pthreads: sysdeps.out
libs-pthr_rt: sysdeps.out
_sd-ptr_uint.h: sysdeps.out
_sd_select.h: sysdeps.out
_sig_action.h: sysdeps.out
_sig_pmask.h: sysdeps.out
libs-sockets: sysdeps.out
flags-sdl: sysdeps.out
flags-sdl-image: sysdeps.out
libs-sdl-image: sysdeps.out
libs-sdl: sysdeps.out
flags-sdl-mixer: sysdeps.out
libs-sdl-mixer: sysdeps.out
flags-sdl-ttf: sysdeps.out
libs-sdl-ttf: sysdeps.out
flags-sndfile: sysdeps.out
libs-sndfile: sysdeps.out
flags-sse: sysdeps.out
flags-sse2: sysdeps.out
flags-sse3: sysdeps.out
_sysinfo.h: sysdeps.out
flags-tiff: sysdeps.out
libs-tiff: sysdeps.out
_uint16.h: sysdeps.out
_uint32.h: sysdeps.out
_uint64.h: sysdeps.out
flags-vector: sysdeps.out
libs-vector: sysdeps.out
libs-vector: sysdeps.out

cc-compile: conf-cc conf-cctype conf-cflags sysdeps.out \
	flags-altivec flags-corelib flags-fastcgi flags-fltk11 flags-fltk2 \
	flags-io_poll flags-jack flags-loadso flags-opengl flags-pdcgi \
	flags-png flags-portaudio flags-pthr_rt flags-pthreads flags-sdl \
	flags-sdl-image flags-sdl-mixer flags-sdl-ttf flags-sndfile \
	flags-sse flags-sse2 flags-sse3 flags-tiff flags-vector 
cc-link: conf-ld conf-ldflags sysdeps.out 
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
	cc-compile depchklist.c aio-mech.h ch_flags.h dlopen.h fd.h \
	floatcast.h sd_fcntl.h sd_fork.h sd_math.h sd_mmap.h sd_posix_rt.h \
	sig_action.h sig_pmask.h sysinfo.h 
	./cc-compile depchklist.c
get_flags.o:\
	cc-compile get_flags.c ch_flags.h open.h uint32.h 
	./cc-compile get_flags.c
mk-cctype: conf-cc conf-systype 
mk-ctxt.o:\
	cc-compile mk-ctxt.c
	./cc-compile mk-ctxt.c
mk-ctxt:\
	cc-link mk-ctxt.o mk-ctxt.ld
	./cc-link mk-ctxt mk-ctxt.o
mk-systype: conf-cc 
open.a:\
	cc-slib open.sld open_ro.o 
	./cc-slib open open_ro.o 
open_ro.o:\
	cc-compile open_ro.c open.h 
	./cc-compile open_ro.c
clean-all: sysdeps_clean obj_clean 
clean: obj_clean
obj_clean: 
	rm -f ch_flags.a ch_flags.o conf-cctype conf-systype depchklist \
	depchklist.o get_flags.o open.a open_ro.o 

regen:
	cpj-genmk > Makefile.tmp && mv Makefile.tmp Makefile

