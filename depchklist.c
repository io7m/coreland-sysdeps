#include <stdio.h>

#include "_sd_byteorder.h"
#include "_sd_chflags.h"
#include "_sd_direntry.h"
#include "_sd_dlopen.h"
#include "_sd_dup2.h"
#include "_sd_fcntl.h"
#include "_sd_float32.h"
#include "_sd_float64.h"
#include "_sd_fork.h"
#include "_sd_inline.h"
#include "_sd_int16.h"
#include "_sd_int32.h"
#include "_sd_int64.h"
#include "_sd_io-notice.h"
#include "_sd_longlong.h"
#include "_sd_math.h"
#include "_sd_mmap.h"
#include "_sd_posix_rt.h"
#include "_sd_ptr_uint.h"
#include "_sd_select.h"
#include "_sd_sendfile.h"
#include "_sd_sig_action.h"
#include "_sd_sig_pmask.h"
#include "_sd_streams.h"
#include "_sd_sysinfo.h"
#include "_sd_uint16.h"
#include "_sd_uint32.h"
#include "_sd_uint64.h"
int
main (void)
{

#ifdef SD_HAVE_AGAR_CORE
  printf("system has agar_core\n");
#else
  printf("system does not have agar_core\n");
#endif
#ifdef SD_HAVE_AGAR_GUI
  printf("system has agar_gui\n");
#else
  printf("system does not have agar_gui\n");
#endif
#ifdef SD_HAVE_LIBAIFF
  printf("system has libaiff\n");
#else
  printf("system does not have libaiff\n");
#endif
#ifdef SD_HAVE_ALUT
  printf("system has alut\n");
#else
  printf("system does not have alut\n");
#endif
#ifdef SD_HAVE_CHRONO
  printf("system has chrono\n");
#else
  printf("system does not have chrono\n");
#endif
#ifdef SD_HAVE_CIRCBUF
  printf("system has circbuf\n");
#else
  printf("system does not have circbuf\n");
#endif
#ifdef SD_HAVE_CORELIB
  printf("system has corelib\n");
#else
  printf("system does not have corelib\n");
#endif
#ifdef SD_HAVE_ENET
  printf("system has enet\n");
#else
  printf("system does not have enet\n");
#endif
#ifdef SD_HAVE_FASTCGI
  printf("system has fastcgi\n");
#else
  printf("system does not have fastcgi\n");
#endif
#ifdef SD_HAVE_FLAC
  printf("system has flac\n");
#else
  printf("system does not have flac\n");
#endif
#ifdef SD_HAVE_FLTK
  printf("system has fltk\n");
#else
  printf("system does not have fltk\n");
#endif
#ifdef SD_HAVE_FLTK11
  printf("system has fltk11\n");
#else
  printf("system does not have fltk11\n");
#endif
#ifdef SD_HAVE_FLTK
  printf("system has fltk\n");
#else
  printf("system does not have fltk\n");
#endif
#ifdef SD_HAVE_FLTK2
  printf("system has fltk2\n");
#else
  printf("system does not have fltk2\n");
#endif
#ifdef SD_HAVE_GLSOLOAD
  printf("system has glsoload\n");
#else
  printf("system does not have glsoload\n");
#endif
#ifdef SD_HAVE_GLTXLOAD
  printf("system has gltxload\n");
#else
  printf("system does not have gltxload\n");
#endif
#ifdef SD_HAVE_GLUT
  printf("system has glut\n");
#else
  printf("system does not have glut\n");
#endif
#ifdef SD_HAVE_INTEGER
  printf("system has integer\n");
#else
  printf("system does not have integer\n");
#endif
#ifdef SD_HAVE_IO_POLL
  printf("system has io_poll\n");
#else
  printf("system does not have io_poll\n");
#endif
#ifdef SD_HAVE_JACK
  printf("system has jack\n");
#else
  printf("system does not have jack\n");
#endif
#ifdef SD_HAVE_LOADSO
  printf("system has loadso\n");
#else
  printf("system does not have loadso\n");
#endif
#ifdef SD_HAVE_LUA
  printf("system has lua\n");
#else
  printf("system does not have lua\n");
#endif
#ifdef SD_HAVE_LUA_PHYSFS
  printf("system has lua_physfs\n");
#else
  printf("system does not have lua_physfs\n");
#endif
#ifdef SD_HAVE_CARBON
  printf("system has carbon\n");
#else
  printf("system does not have carbon\n");
#endif
#ifdef SD_HAVE_MATRIX4
  printf("system has matrix4\n");
#else
  printf("system does not have matrix4\n");
#endif
#ifdef SD_HAVE_NETLIB
  printf("system has netlib\n");
#else
  printf("system does not have netlib\n");
#endif
#ifdef SD_HAVE_OPENAL
  printf("system has openal\n");
#else
  printf("system does not have openal\n");
#endif
#ifdef SD_HAVE_OPENGL
  printf("system has opengl\n");
#else
  printf("system does not have opengl\n");
#endif
#ifdef SD_HAVE_OPENSSL
  printf("system has openssl\n");
#else
  printf("system does not have openssl\n");
#endif
#ifdef SD_HAVE_PDCGI
  printf("system has pdcgi\n");
#else
  printf("system does not have pdcgi\n");
#endif
#ifdef SD_HAVE_PHYSFS
  printf("system has physfs\n");
#else
  printf("system does not have physfs\n");
#endif
#ifdef SD_HAVE_PLEXLOG
  printf("system has plexlog\n");
#else
  printf("system does not have plexlog\n");
#endif
#ifdef SD_HAVE_LIBPNG
  printf("system has libpng\n");
#else
  printf("system does not have libpng\n");
#endif
#ifdef SD_HAVE_PNGLOAD
  printf("system has pngload\n");
#else
  printf("system does not have pngload\n");
#endif
#ifdef SD_HAVE_PORTAUDIO
  printf("system has portaudio\n");
#else
  printf("system does not have portaudio\n");
#endif
#ifdef SD_HAVE_LIBSNDFILE
  printf("system has libsndfile\n");
#else
  printf("system does not have libsndfile\n");
#endif
#ifdef SD_CHFLAGS_SUPPORTED
  printf("system has sd_chflags_supported\n");
#else
  printf("system does not have sd_chflags_supported\n");
#endif
#ifdef SD_HAVE_DLOPEN
  printf("system has dlopen\n");
#else
  printf("system does not have dlopen\n");
#endif
#ifdef SD_HAVE_DLFUNC
  printf("system has dlfunc\n");
#else
  printf("system does not have dlfunc\n");
#endif
#ifdef SD_HAVE_DUP2
  printf("system has dup2\n");
#else
  printf("system does not have dup2\n");
#endif
#ifdef SD_HAVE_FCNTL
  printf("system has fcntl\n");
#else
  printf("system does not have fcntl\n");
#endif
#ifdef SD_FLOAT32_SUPPORTED
  printf("system has sd_float32_supported\n");
#else
  printf("system does not have sd_float32_supported\n");
#endif
#ifdef SD_FLOAT64_SUPPORTED
  printf("system has sd_float64_supported\n");
#else
  printf("system does not have sd_float64_supported\n");
#endif
#ifdef SD_HAVE_FORK
  printf("system has fork\n");
#else
  printf("system does not have fork\n");
#endif
#ifdef SD_HAVE_VFORK
  printf("system has vfork\n");
#else
  printf("system does not have vfork\n");
#endif
#ifdef SD_HAVE_INLINE
  printf("system has inline\n");
#else
  printf("system does not have inline\n");
#endif
#ifdef SD_INT16_SUPPORTED
  printf("system has sd_int16_supported\n");
#else
  printf("system does not have sd_int16_supported\n");
#endif
#ifdef SD_INT32_SUPPORTED
  printf("system has sd_int32_supported\n");
#else
  printf("system does not have sd_int32_supported\n");
#endif
#ifdef SD_INT64_SUPPORTED
  printf("system has sd_int64_supported\n");
#else
  printf("system does not have sd_int64_supported\n");
#endif
#ifdef SD_IO_NOTICE_SUPPORT_KQUEUE
  printf("system has sd_io_notice_support_kqueue\n");
#else
  printf("system does not have sd_io_notice_support_kqueue\n");
#endif
#ifdef SD_IO_NOTICE_SUPPORT_EPOLL
  printf("system has sd_io_notice_support_epoll\n");
#else
  printf("system does not have sd_io_notice_support_epoll\n");
#endif
#ifdef SD_IO_NOTICE_SUPPORT_POLL
  printf("system has sd_io_notice_support_poll\n");
#else
  printf("system does not have sd_io_notice_support_poll\n");
#endif
#ifdef SD_IO_NOTICE_SUPPORT_SELECT
  printf("system has sd_io_notice_support_select\n");
#else
  printf("system does not have sd_io_notice_support_select\n");
#endif
#ifdef SD_HAVE_LONGLONG
  printf("system has longlong\n");
#else
  printf("system does not have longlong\n");
#endif
#ifdef SD_HAVE_MATH_ACOS
  printf("system has math_acos\n");
#else
  printf("system does not have math_acos\n");
#endif
#ifdef SD_HAVE_MATH_ACOSH
  printf("system has math_acosh\n");
#else
  printf("system does not have math_acosh\n");
#endif
#ifdef SD_HAVE_MATH_ACOSHF
  printf("system has math_acoshf\n");
#else
  printf("system does not have math_acoshf\n");
#endif
#ifdef SD_HAVE_MATH_ASIN
  printf("system has math_asin\n");
#else
  printf("system does not have math_asin\n");
#endif
#ifdef SD_HAVE_MATH_ASINF
  printf("system has math_asinf\n");
#else
  printf("system does not have math_asinf\n");
#endif
#ifdef SD_HAVE_MATH_ASINH
  printf("system has math_asinh\n");
#else
  printf("system does not have math_asinh\n");
#endif
#ifdef SD_HAVE_MATH_ASINHF
  printf("system has math_asinhf\n");
#else
  printf("system does not have math_asinhf\n");
#endif
#ifdef SD_HAVE_MATH_ATAN
  printf("system has math_atan\n");
#else
  printf("system does not have math_atan\n");
#endif
#ifdef SD_HAVE_MATH_ATAN2
  printf("system has math_atan2\n");
#else
  printf("system does not have math_atan2\n");
#endif
#ifdef SD_HAVE_MATH_ATAN2F
  printf("system has math_atan2f\n");
#else
  printf("system does not have math_atan2f\n");
#endif
#ifdef SD_HAVE_MATH_ATANF
  printf("system has math_atanf\n");
#else
  printf("system does not have math_atanf\n");
#endif
#ifdef SD_HAVE_MATH_ATANH
  printf("system has math_atanh\n");
#else
  printf("system does not have math_atanh\n");
#endif
#ifdef SD_HAVE_MATH_ATANHF
  printf("system has math_atanhf\n");
#else
  printf("system does not have math_atanhf\n");
#endif
#ifdef SD_HAVE_MATH_CBRT
  printf("system has math_cbrt\n");
#else
  printf("system does not have math_cbrt\n");
#endif
#ifdef SD_HAVE_MATH_CBRTF
  printf("system has math_cbrtf\n");
#else
  printf("system does not have math_cbrtf\n");
#endif
#ifdef SD_HAVE_MATH_CEIL
  printf("system has math_ceil\n");
#else
  printf("system does not have math_ceil\n");
#endif
#ifdef SD_HAVE_MATH_CEILF
  printf("system has math_ceilf\n");
#else
  printf("system does not have math_ceilf\n");
#endif
#ifdef SD_HAVE_MATH_CEILL
  printf("system has math_ceill\n");
#else
  printf("system does not have math_ceill\n");
#endif
#ifdef SD_HAVE_MATH_COPYSIGN
  printf("system has math_copysign\n");
#else
  printf("system does not have math_copysign\n");
#endif
#ifdef SD_HAVE_MATH_COPYSIGNF
  printf("system has math_copysignf\n");
#else
  printf("system does not have math_copysignf\n");
#endif
#ifdef SD_HAVE_MATH_COPYSIGNL
  printf("system has math_copysignl\n");
#else
  printf("system does not have math_copysignl\n");
#endif
#ifdef SD_HAVE_MATH_COS
  printf("system has math_cos\n");
#else
  printf("system does not have math_cos\n");
#endif
#ifdef SD_HAVE_MATH_COSF
  printf("system has math_cosf\n");
#else
  printf("system does not have math_cosf\n");
#endif
#ifdef SD_HAVE_MATH_COSH
  printf("system has math_cosh\n");
#else
  printf("system does not have math_cosh\n");
#endif
#ifdef SD_HAVE_MATH_COSHF
  printf("system has math_coshf\n");
#else
  printf("system does not have math_coshf\n");
#endif
#ifdef SD_HAVE_MATH_ERF
  printf("system has math_erf\n");
#else
  printf("system does not have math_erf\n");
#endif
#ifdef SD_HAVE_MATH_ERFC
  printf("system has math_erfc\n");
#else
  printf("system does not have math_erfc\n");
#endif
#ifdef SD_HAVE_MATH_ERFCF
  printf("system has math_erfcf\n");
#else
  printf("system does not have math_erfcf\n");
#endif
#ifdef SD_HAVE_MATH_ERFF
  printf("system has math_erff\n");
#else
  printf("system does not have math_erff\n");
#endif
#ifdef SD_HAVE_MATH_EXP
  printf("system has math_exp\n");
#else
  printf("system does not have math_exp\n");
#endif
#ifdef SD_HAVE_MATH_EXP2
  printf("system has math_exp2\n");
#else
  printf("system does not have math_exp2\n");
#endif
#ifdef SD_HAVE_MATH_EXP2F
  printf("system has math_exp2f\n");
#else
  printf("system does not have math_exp2f\n");
#endif
#ifdef SD_HAVE_MATH_EXPF
  printf("system has math_expf\n");
#else
  printf("system does not have math_expf\n");
#endif
#ifdef SD_HAVE_MATH_EXPM1
  printf("system has math_expm1\n");
#else
  printf("system does not have math_expm1\n");
#endif
#ifdef SD_HAVE_MATH_EXPM1F
  printf("system has math_expm1f\n");
#else
  printf("system does not have math_expm1f\n");
#endif
#ifdef SD_HAVE_MATH_FABS
  printf("system has math_fabs\n");
#else
  printf("system does not have math_fabs\n");
#endif
#ifdef SD_HAVE_MATH_FABSL
  printf("system has math_fabsl\n");
#else
  printf("system does not have math_fabsl\n");
#endif
#ifdef SD_HAVE_MATH_FDIM
  printf("system has math_fdim\n");
#else
  printf("system does not have math_fdim\n");
#endif
#ifdef SD_HAVE_MATH_FDIMF
  printf("system has math_fdimf\n");
#else
  printf("system does not have math_fdimf\n");
#endif
#ifdef SD_HAVE_MATH_FDIML
  printf("system has math_fdiml\n");
#else
  printf("system does not have math_fdiml\n");
#endif
#ifdef SD_HAVE_MATH_FLOOR
  printf("system has math_floor\n");
#else
  printf("system does not have math_floor\n");
#endif
#ifdef SD_HAVE_MATH_FLOORL
  printf("system has math_floorl\n");
#else
  printf("system does not have math_floorl\n");
#endif
#ifdef SD_HAVE_MATH_FMA
  printf("system has math_fma\n");
#else
  printf("system does not have math_fma\n");
#endif
#ifdef SD_HAVE_MATH_FMAF
  printf("system has math_fmaf\n");
#else
  printf("system does not have math_fmaf\n");
#endif
#ifdef SD_HAVE_MATH_FMAL
  printf("system has math_fmal\n");
#else
  printf("system does not have math_fmal\n");
#endif
#ifdef SD_HAVE_MATH_FMAX
  printf("system has math_fmax\n");
#else
  printf("system does not have math_fmax\n");
#endif
#ifdef SD_HAVE_MATH_FMAXF
  printf("system has math_fmaxf\n");
#else
  printf("system does not have math_fmaxf\n");
#endif
#ifdef SD_HAVE_MATH_FMAXL
  printf("system has math_fmaxl\n");
#else
  printf("system does not have math_fmaxl\n");
#endif
#ifdef SD_HAVE_MATH_FMIN
  printf("system has math_fmin\n");
#else
  printf("system does not have math_fmin\n");
#endif
#ifdef SD_HAVE_MATH_FMINF
  printf("system has math_fminf\n");
#else
  printf("system does not have math_fminf\n");
#endif
#ifdef SD_HAVE_MATH_FMINL
  printf("system has math_fminl\n");
#else
  printf("system does not have math_fminl\n");
#endif
#ifdef SD_HAVE_MATH_FPCLASSIFY
  printf("system has math_fpclassify\n");
#else
  printf("system does not have math_fpclassify\n");
#endif
#ifdef SD_HAVE_MATH_FREXP
  printf("system has math_frexp\n");
#else
  printf("system does not have math_frexp\n");
#endif
#ifdef SD_HAVE_MATH_FREXPF
  printf("system has math_frexpf\n");
#else
  printf("system does not have math_frexpf\n");
#endif
#ifdef SD_HAVE_MATH_FREXPL
  printf("system has math_frexpl\n");
#else
  printf("system does not have math_frexpl\n");
#endif
#ifdef SD_HAVE_MATH_ILOGB
  printf("system has math_ilogb\n");
#else
  printf("system does not have math_ilogb\n");
#endif
#ifdef SD_HAVE_MATH_ILOGBF
  printf("system has math_ilogbf\n");
#else
  printf("system does not have math_ilogbf\n");
#endif
#ifdef SD_HAVE_MATH_ILOGBL
  printf("system has math_ilogbl\n");
#else
  printf("system does not have math_ilogbl\n");
#endif
#ifdef SD_HAVE_MATH_ISFINITE
  printf("system has math_isfinite\n");
#else
  printf("system does not have math_isfinite\n");
#endif
#ifdef SD_HAVE_MATH_ISGREATER
  printf("system has math_isgreater\n");
#else
  printf("system does not have math_isgreater\n");
#endif
#ifdef SD_HAVE_MATH_ISGREATEREQUAL
  printf("system has math_isgreaterequal\n");
#else
  printf("system does not have math_isgreaterequal\n");
#endif
#ifdef SD_HAVE_MATH_ISINF
  printf("system has math_isinf\n");
#else
  printf("system does not have math_isinf\n");
#endif
#ifdef SD_HAVE_MATH_ISLESS
  printf("system has math_isless\n");
#else
  printf("system does not have math_isless\n");
#endif
#ifdef SD_HAVE_MATH_ISLESSEQUAL
  printf("system has math_islessequal\n");
#else
  printf("system does not have math_islessequal\n");
#endif
#ifdef SD_HAVE_MATH_ISLESSGREATER
  printf("system has math_islessgreater\n");
#else
  printf("system does not have math_islessgreater\n");
#endif
#ifdef SD_HAVE_MATH_ISNAN
  printf("system has math_isnan\n");
#else
  printf("system does not have math_isnan\n");
#endif
#ifdef SD_HAVE_MATH_ISNANF
  printf("system has math_isnanf\n");
#else
  printf("system does not have math_isnanf\n");
#endif
#ifdef SD_HAVE_MATH_ISNORMAL
  printf("system has math_isnormal\n");
#else
  printf("system does not have math_isnormal\n");
#endif
#ifdef SD_HAVE_MATH_ISUNORDERED
  printf("system has math_isunordered\n");
#else
  printf("system does not have math_isunordered\n");
#endif
#ifdef SD_HAVE_MATH_J0
  printf("system has math_j0\n");
#else
  printf("system does not have math_j0\n");
#endif
#ifdef SD_HAVE_MATH_J0F
  printf("system has math_j0f\n");
#else
  printf("system does not have math_j0f\n");
#endif
#ifdef SD_HAVE_MATH_J1
  printf("system has math_j1\n");
#else
  printf("system does not have math_j1\n");
#endif
#ifdef SD_HAVE_MATH_J1F
  printf("system has math_j1f\n");
#else
  printf("system does not have math_j1f\n");
#endif
#ifdef SD_HAVE_MATH_JN
  printf("system has math_jn\n");
#else
  printf("system does not have math_jn\n");
#endif
#ifdef SD_HAVE_MATH_JNF
  printf("system has math_jnf\n");
#else
  printf("system does not have math_jnf\n");
#endif
#ifdef SD_HAVE_MATH_LDEXP
  printf("system has math_ldexp\n");
#else
  printf("system does not have math_ldexp\n");
#endif
#ifdef SD_HAVE_MATH_LDEXPF
  printf("system has math_ldexpf\n");
#else
  printf("system does not have math_ldexpf\n");
#endif
#ifdef SD_HAVE_MATH_LDEXPL
  printf("system has math_ldexpl\n");
#else
  printf("system does not have math_ldexpl\n");
#endif
#ifdef SD_HAVE_MATH_LGAMMA
  printf("system has math_lgamma\n");
#else
  printf("system does not have math_lgamma\n");
#endif
#ifdef SD_HAVE_MATH_LGAMMAF
  printf("system has math_lgammaf\n");
#else
  printf("system does not have math_lgammaf\n");
#endif
#ifdef SD_HAVE_MATH_LLRINT
  printf("system has math_llrint\n");
#else
  printf("system does not have math_llrint\n");
#endif
#ifdef SD_HAVE_MATH_LLRINTF
  printf("system has math_llrintf\n");
#else
  printf("system does not have math_llrintf\n");
#endif
#ifdef SD_HAVE_MATH_LLROUND
  printf("system has math_llround\n");
#else
  printf("system does not have math_llround\n");
#endif
#ifdef SD_HAVE_MATH_LLROUNDF
  printf("system has math_llroundf\n");
#else
  printf("system does not have math_llroundf\n");
#endif
#ifdef SD_HAVE_MATH_LLROUNDL
  printf("system has math_llroundl\n");
#else
  printf("system does not have math_llroundl\n");
#endif
#ifdef SD_HAVE_MATH_LOG
  printf("system has math_log\n");
#else
  printf("system does not have math_log\n");
#endif
#ifdef SD_HAVE_MATH_LOG10
  printf("system has math_log10\n");
#else
  printf("system does not have math_log10\n");
#endif
#ifdef SD_HAVE_MATH_LOG10F
  printf("system has math_log10f\n");
#else
  printf("system does not have math_log10f\n");
#endif
#ifdef SD_HAVE_MATH_LOG1P
  printf("system has math_log1p\n");
#else
  printf("system does not have math_log1p\n");
#endif
#ifdef SD_HAVE_MATH_LOG1PF
  printf("system has math_log1pf\n");
#else
  printf("system does not have math_log1pf\n");
#endif
#ifdef SD_HAVE_MATH_LOGF
  printf("system has math_logf\n");
#else
  printf("system does not have math_logf\n");
#endif
#ifdef SD_HAVE_MATH_LRINT
  printf("system has math_lrint\n");
#else
  printf("system does not have math_lrint\n");
#endif
#ifdef SD_HAVE_MATH_LRINTF
  printf("system has math_lrintf\n");
#else
  printf("system does not have math_lrintf\n");
#endif
#ifdef SD_HAVE_MATH_LROUND
  printf("system has math_lround\n");
#else
  printf("system does not have math_lround\n");
#endif
#ifdef SD_HAVE_MATH_LROUNDF
  printf("system has math_lroundf\n");
#else
  printf("system does not have math_lroundf\n");
#endif
#ifdef SD_HAVE_MATH_LROUNDL
  printf("system has math_lroundl\n");
#else
  printf("system does not have math_lroundl\n");
#endif
#ifdef SD_HAVE_MATH_MODF
  printf("system has math_modf\n");
#else
  printf("system does not have math_modf\n");
#endif
#ifdef SD_HAVE_MATH_NEARBYINT
  printf("system has math_nearbyint\n");
#else
  printf("system does not have math_nearbyint\n");
#endif
#ifdef SD_HAVE_MATH_NEARBYINTF
  printf("system has math_nearbyintf\n");
#else
  printf("system does not have math_nearbyintf\n");
#endif
#ifdef SD_HAVE_MATH_NEXTAFTER
  printf("system has math_nextafter\n");
#else
  printf("system does not have math_nextafter\n");
#endif
#ifdef SD_HAVE_MATH_NEXTAFTERF
  printf("system has math_nextafterf\n");
#else
  printf("system does not have math_nextafterf\n");
#endif
#ifdef SD_HAVE_MATH_NEXTAFTERL
  printf("system has math_nextafterl\n");
#else
  printf("system does not have math_nextafterl\n");
#endif
#ifdef SD_HAVE_MATH_NEXTTOWARD
  printf("system has math_nexttoward\n");
#else
  printf("system does not have math_nexttoward\n");
#endif
#ifdef SD_HAVE_MATH_NEXTTOWARDF
  printf("system has math_nexttowardf\n");
#else
  printf("system does not have math_nexttowardf\n");
#endif
#ifdef SD_HAVE_MATH_NEXTTOWARDL
  printf("system has math_nexttowardl\n");
#else
  printf("system does not have math_nexttowardl\n");
#endif
#ifdef SD_HAVE_MATH_POW
  printf("system has math_pow\n");
#else
  printf("system does not have math_pow\n");
#endif
#ifdef SD_HAVE_MATH_POWF
  printf("system has math_powf\n");
#else
  printf("system does not have math_powf\n");
#endif
#ifdef SD_HAVE_MATH_REMAINDER
  printf("system has math_remainder\n");
#else
  printf("system does not have math_remainder\n");
#endif
#ifdef SD_HAVE_MATH_REMAINDERF
  printf("system has math_remainderf\n");
#else
  printf("system does not have math_remainderf\n");
#endif
#ifdef SD_HAVE_MATH_REMQUO
  printf("system has math_remquo\n");
#else
  printf("system does not have math_remquo\n");
#endif
#ifdef SD_HAVE_MATH_REMQUOF
  printf("system has math_remquof\n");
#else
  printf("system does not have math_remquof\n");
#endif
#ifdef SD_HAVE_MATH_RINT
  printf("system has math_rint\n");
#else
  printf("system does not have math_rint\n");
#endif
#ifdef SD_HAVE_MATH_RINTF
  printf("system has math_rintf\n");
#else
  printf("system does not have math_rintf\n");
#endif
#ifdef SD_HAVE_MATH_ROUNDL
  printf("system has math_roundl\n");
#else
  printf("system does not have math_roundl\n");
#endif
#ifdef SD_HAVE_MATH_SCALBLN
  printf("system has math_scalbln\n");
#else
  printf("system does not have math_scalbln\n");
#endif
#ifdef SD_HAVE_MATH_SCALBLNF
  printf("system has math_scalblnf\n");
#else
  printf("system does not have math_scalblnf\n");
#endif
#ifdef SD_HAVE_MATH_SCALBLNL
  printf("system has math_scalblnl\n");
#else
  printf("system does not have math_scalblnl\n");
#endif
#ifdef SD_HAVE_MATH_SCALBN
  printf("system has math_scalbn\n");
#else
  printf("system does not have math_scalbn\n");
#endif
#ifdef SD_HAVE_MATH_SCALBNF
  printf("system has math_scalbnf\n");
#else
  printf("system does not have math_scalbnf\n");
#endif
#ifdef SD_HAVE_MATH_SCALBNL
  printf("system has math_scalbnl\n");
#else
  printf("system does not have math_scalbnl\n");
#endif
#ifdef SD_HAVE_MATH_SIGNBIT
  printf("system has math_signbit\n");
#else
  printf("system does not have math_signbit\n");
#endif
#ifdef SD_HAVE_MATH_SIN
  printf("system has math_sin\n");
#else
  printf("system does not have math_sin\n");
#endif
#ifdef SD_HAVE_MATH_SINF
  printf("system has math_sinf\n");
#else
  printf("system does not have math_sinf\n");
#endif
#ifdef SD_HAVE_MATH_SINH
  printf("system has math_sinh\n");
#else
  printf("system does not have math_sinh\n");
#endif
#ifdef SD_HAVE_MATH_SINHF
  printf("system has math_sinhf\n");
#else
  printf("system does not have math_sinhf\n");
#endif
#ifdef SD_HAVE_MATH_SQRT
  printf("system has math_sqrt\n");
#else
  printf("system does not have math_sqrt\n");
#endif
#ifdef SD_HAVE_MATH_SQRTL
  printf("system has math_sqrtl\n");
#else
  printf("system does not have math_sqrtl\n");
#endif
#ifdef SD_HAVE_MATH_TAN
  printf("system has math_tan\n");
#else
  printf("system does not have math_tan\n");
#endif
#ifdef SD_HAVE_MATH_TANF
  printf("system has math_tanf\n");
#else
  printf("system does not have math_tanf\n");
#endif
#ifdef SD_HAVE_MATH_TANH
  printf("system has math_tanh\n");
#else
  printf("system does not have math_tanh\n");
#endif
#ifdef SD_HAVE_MATH_TANHF
  printf("system has math_tanhf\n");
#else
  printf("system does not have math_tanhf\n");
#endif
#ifdef SD_HAVE_MATH_TGAMMA
  printf("system has math_tgamma\n");
#else
  printf("system does not have math_tgamma\n");
#endif
#ifdef SD_HAVE_MATH_TRUNC
  printf("system has math_trunc\n");
#else
  printf("system does not have math_trunc\n");
#endif
#ifdef SD_HAVE_MATH_TRUNCF
  printf("system has math_truncf\n");
#else
  printf("system does not have math_truncf\n");
#endif
#ifdef SD_HAVE_MATH_TRUNCL
  printf("system has math_truncl\n");
#else
  printf("system does not have math_truncl\n");
#endif
#ifdef SD_HAVE_MATH_Y0
  printf("system has math_y0\n");
#else
  printf("system does not have math_y0\n");
#endif
#ifdef SD_HAVE_MATH_Y0F
  printf("system has math_y0f\n");
#else
  printf("system does not have math_y0f\n");
#endif
#ifdef SD_HAVE_MATH_Y1
  printf("system has math_y1\n");
#else
  printf("system does not have math_y1\n");
#endif
#ifdef SD_HAVE_MATH_Y1F
  printf("system has math_y1f\n");
#else
  printf("system does not have math_y1f\n");
#endif
#ifdef SD_HAVE_MATH_YN
  printf("system has math_yn\n");
#else
  printf("system does not have math_yn\n");
#endif
#ifdef SD_HAVE_MATH_YNF
  printf("system has math_ynf\n");
#else
  printf("system does not have math_ynf\n");
#endif
#ifdef SD_HAVE_MMAP
  printf("system has mmap\n");
#else
  printf("system does not have mmap\n");
#endif
#ifdef SD_HAVE_POSIX_RT_AIO_CANCEL
  printf("system has posix_rt_aio_cancel\n");
#else
  printf("system does not have posix_rt_aio_cancel\n");
#endif
#ifdef SD_HAVE_POSIX_RT_AIO_ERROR
  printf("system has posix_rt_aio_error\n");
#else
  printf("system does not have posix_rt_aio_error\n");
#endif
#ifdef SD_HAVE_POSIX_RT_AIO_FSYNC
  printf("system has posix_rt_aio_fsync\n");
#else
  printf("system does not have posix_rt_aio_fsync\n");
#endif
#ifdef SD_HAVE_POSIX_RT_AIO_READ
  printf("system has posix_rt_aio_read\n");
#else
  printf("system does not have posix_rt_aio_read\n");
#endif
#ifdef SD_HAVE_POSIX_RT_AIO_RETURN
  printf("system has posix_rt_aio_return\n");
#else
  printf("system does not have posix_rt_aio_return\n");
#endif
#ifdef SD_HAVE_POSIX_RT_AIO_SUSPEND
  printf("system has posix_rt_aio_suspend\n");
#else
  printf("system does not have posix_rt_aio_suspend\n");
#endif
#ifdef SD_HAVE_POSIX_RT_AIO_WRITE
  printf("system has posix_rt_aio_write\n");
#else
  printf("system does not have posix_rt_aio_write\n");
#endif
#ifdef SD_HAVE_POSIX_RT_CLOCK_GETCPUCLOCKID
  printf("system has posix_rt_clock_getcpuclockid\n");
#else
  printf("system does not have posix_rt_clock_getcpuclockid\n");
#endif
#ifdef SD_HAVE_POSIX_RT_CLOCK_GETRES
  printf("system has posix_rt_clock_getres\n");
#else
  printf("system does not have posix_rt_clock_getres\n");
#endif
#ifdef SD_HAVE_POSIX_RT_CLOCK_GETTIME
  printf("system has posix_rt_clock_gettime\n");
#else
  printf("system does not have posix_rt_clock_gettime\n");
#endif
#ifdef SD_HAVE_POSIX_RT_CLOCK_NANOSLEEP
  printf("system has posix_rt_clock_nanosleep\n");
#else
  printf("system does not have posix_rt_clock_nanosleep\n");
#endif
#ifdef SD_HAVE_POSIX_RT_CLOCK_SETTIME
  printf("system has posix_rt_clock_settime\n");
#else
  printf("system does not have posix_rt_clock_settime\n");
#endif
#ifdef SD_HAVE_POSIX_RT_FCHMOD
  printf("system has posix_rt_fchmod\n");
#else
  printf("system does not have posix_rt_fchmod\n");
#endif
#ifdef SD_HAVE_POSIX_RT_FDATASYNC
  printf("system has posix_rt_fdatasync\n");
#else
  printf("system does not have posix_rt_fdatasync\n");
#endif
#ifdef SD_HAVE_POSIX_RT_FSYNC
  printf("system has posix_rt_fsync\n");
#else
  printf("system does not have posix_rt_fsync\n");
#endif
#ifdef SD_HAVE_POSIX_RT_FTRUNCATE
  printf("system has posix_rt_ftruncate\n");
#else
  printf("system does not have posix_rt_ftruncate\n");
#endif
#ifdef SD_HAVE_POSIX_RT_LIO_LISTIO
  printf("system has posix_rt_lio_listio\n");
#else
  printf("system does not have posix_rt_lio_listio\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MLOCK
  printf("system has posix_rt_mlock\n");
#else
  printf("system does not have posix_rt_mlock\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MLOCKALL
  printf("system has posix_rt_mlockall\n");
#else
  printf("system does not have posix_rt_mlockall\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MMAP
  printf("system has posix_rt_mmap\n");
#else
  printf("system does not have posix_rt_mmap\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MPROTECT
  printf("system has posix_rt_mprotect\n");
#else
  printf("system does not have posix_rt_mprotect\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_CLOSE
  printf("system has posix_rt_mq_close\n");
#else
  printf("system does not have posix_rt_mq_close\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_GETATTR
  printf("system has posix_rt_mq_getattr\n");
#else
  printf("system does not have posix_rt_mq_getattr\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_NOTIFY
  printf("system has posix_rt_mq_notify\n");
#else
  printf("system does not have posix_rt_mq_notify\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_OPEN
  printf("system has posix_rt_mq_open\n");
#else
  printf("system does not have posix_rt_mq_open\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_RECEIVE
  printf("system has posix_rt_mq_receive\n");
#else
  printf("system does not have posix_rt_mq_receive\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_SEND
  printf("system has posix_rt_mq_send\n");
#else
  printf("system does not have posix_rt_mq_send\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_SETATTR
  printf("system has posix_rt_mq_setattr\n");
#else
  printf("system does not have posix_rt_mq_setattr\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_TIMEDRECEIVE
  printf("system has posix_rt_mq_timedreceive\n");
#else
  printf("system does not have posix_rt_mq_timedreceive\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_TIMEDSEND
  printf("system has posix_rt_mq_timedsend\n");
#else
  printf("system does not have posix_rt_mq_timedsend\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MQ_UNLINK
  printf("system has posix_rt_mq_unlink\n");
#else
  printf("system does not have posix_rt_mq_unlink\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MSYNC
  printf("system has posix_rt_msync\n");
#else
  printf("system does not have posix_rt_msync\n");
#endif
#ifdef SD_HAVE_POSIX_RT_MUNMAP
  printf("system has posix_rt_munmap\n");
#else
  printf("system does not have posix_rt_munmap\n");
#endif
#ifdef SD_HAVE_POSIX_RT_NANOSLEEP
  printf("system has posix_rt_nanosleep\n");
#else
  printf("system does not have posix_rt_nanosleep\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_FADVISE
  printf("system has posix_rt_posix_fadvise\n");
#else
  printf("system does not have posix_rt_posix_fadvise\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_FALLOCATE
  printf("system has posix_rt_posix_fallocate\n");
#else
  printf("system does not have posix_rt_posix_fallocate\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_MADVISE
  printf("system has posix_rt_posix_madvise\n");
#else
  printf("system does not have posix_rt_posix_madvise\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_MEM_OFFSET
  printf("system has posix_rt_posix_mem_offset\n");
#else
  printf("system does not have posix_rt_posix_mem_offset\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_MEMALIGN
  printf("system has posix_rt_posix_memalign\n");
#else
  printf("system does not have posix_rt_posix_memalign\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWN
  printf("system has posix_rt_posix_spawn\n");
#else
  printf("system does not have posix_rt_posix_spawn\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE
  printf("system has posix_rt_posix_spawn_file_actions_addclose\n");
#else
  printf("system does not have posix_rt_posix_spawn_file_actions_addclose\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2
  printf("system has posix_rt_posix_spawn_file_actions_adddup2\n");
#else
  printf("system does not have posix_rt_posix_spawn_file_actions_adddup2\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN
  printf("system has posix_rt_posix_spawn_file_actions_addopen\n");
#else
  printf("system does not have posix_rt_posix_spawn_file_actions_addopen\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWN_FILE_ACTIONS_DESTROY
  printf("system has posix_rt_posix_spawn_file_actions_destroy\n");
#else
  printf("system does not have posix_rt_posix_spawn_file_actions_destroy\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWN_FILE_ACTIONS_INIT
  printf("system has posix_rt_posix_spawn_file_actions_init\n");
#else
  printf("system does not have posix_rt_posix_spawn_file_actions_init\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_DESTROY
  printf("system has posix_rt_posix_spawnattr_destroy\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_destroy\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_GETFLAGS
  printf("system has posix_rt_posix_spawnattr_getflags\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_getflags\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_GETPGROUP
  printf("system has posix_rt_posix_spawnattr_getpgroup\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_getpgroup\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_GETSCHEDPARAM
  printf("system has posix_rt_posix_spawnattr_getschedparam\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_getschedparam\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_GETSCHEDPOLICY
  printf("system has posix_rt_posix_spawnattr_getschedpolicy\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_getschedpolicy\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_GETSIGDEFAULT
  printf("system has posix_rt_posix_spawnattr_getsigdefault\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_getsigdefault\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_GETSIGMASK
  printf("system has posix_rt_posix_spawnattr_getsigmask\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_getsigmask\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_INIT
  printf("system has posix_rt_posix_spawnattr_init\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_init\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_SETFLAGS
  printf("system has posix_rt_posix_spawnattr_setflags\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_setflags\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_SETPGROUP
  printf("system has posix_rt_posix_spawnattr_setpgroup\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_setpgroup\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_SETSCHEDPARAM
  printf("system has posix_rt_posix_spawnattr_setschedparam\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_setschedparam\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_SETSCHEDPOLICY
  printf("system has posix_rt_posix_spawnattr_setschedpolicy\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_setschedpolicy\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_SETSIGDEFAULT
  printf("system has posix_rt_posix_spawnattr_setsigdefault\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_setsigdefault\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNATTR_SETSIGMASK
  printf("system has posix_rt_posix_spawnattr_setsigmask\n");
#else
  printf("system does not have posix_rt_posix_spawnattr_setsigmask\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_SPAWNP
  printf("system has posix_rt_posix_spawnp\n");
#else
  printf("system does not have posix_rt_posix_spawnp\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_TYPED_MEM_GET_INFO
  printf("system has posix_rt_posix_typed_mem_get_info\n");
#else
  printf("system does not have posix_rt_posix_typed_mem_get_info\n");
#endif
#ifdef SD_HAVE_POSIX_RT_POSIX_TYPED_MEM_OPEN
  printf("system has posix_rt_posix_typed_mem_open\n");
#else
  printf("system does not have posix_rt_posix_typed_mem_open\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SCHED_GET_PRIORITY_MAX
  printf("system has posix_rt_sched_get_priority_max\n");
#else
  printf("system does not have posix_rt_sched_get_priority_max\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SCHED_GETPARAM
  printf("system has posix_rt_sched_getparam\n");
#else
  printf("system does not have posix_rt_sched_getparam\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SCHED_GETSCHEDULER
  printf("system has posix_rt_sched_getscheduler\n");
#else
  printf("system does not have posix_rt_sched_getscheduler\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SCHED_RR_GET_INTERVAL
  printf("system has posix_rt_sched_rr_get_interval\n");
#else
  printf("system does not have posix_rt_sched_rr_get_interval\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SCHED_SETPARAM
  printf("system has posix_rt_sched_setparam\n");
#else
  printf("system does not have posix_rt_sched_setparam\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SCHED_SETSCHEDULER
  printf("system has posix_rt_sched_setscheduler\n");
#else
  printf("system does not have posix_rt_sched_setscheduler\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_CLOSE
  printf("system has posix_rt_sem_close\n");
#else
  printf("system does not have posix_rt_sem_close\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_DESTROY
  printf("system has posix_rt_sem_destroy\n");
#else
  printf("system does not have posix_rt_sem_destroy\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_GETVALUE
  printf("system has posix_rt_sem_getvalue\n");
#else
  printf("system does not have posix_rt_sem_getvalue\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_INIT
  printf("system has posix_rt_sem_init\n");
#else
  printf("system does not have posix_rt_sem_init\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_OPEN
  printf("system has posix_rt_sem_open\n");
#else
  printf("system does not have posix_rt_sem_open\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_POST
  printf("system has posix_rt_sem_post\n");
#else
  printf("system does not have posix_rt_sem_post\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_TIMEDWAIT
  printf("system has posix_rt_sem_timedwait\n");
#else
  printf("system does not have posix_rt_sem_timedwait\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_TRYWAIT
  printf("system has posix_rt_sem_trywait\n");
#else
  printf("system does not have posix_rt_sem_trywait\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_UNLINK
  printf("system has posix_rt_sem_unlink\n");
#else
  printf("system does not have posix_rt_sem_unlink\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SEM_WAIT
  printf("system has posix_rt_sem_wait\n");
#else
  printf("system does not have posix_rt_sem_wait\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SHM_OPEN
  printf("system has posix_rt_shm_open\n");
#else
  printf("system does not have posix_rt_shm_open\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SHM_UNLINK
  printf("system has posix_rt_shm_unlink\n");
#else
  printf("system does not have posix_rt_shm_unlink\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SIGQUEUE
  printf("system has posix_rt_sigqueue\n");
#else
  printf("system does not have posix_rt_sigqueue\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SIGTIMEDWAIT
  printf("system has posix_rt_sigtimedwait\n");
#else
  printf("system does not have posix_rt_sigtimedwait\n");
#endif
#ifdef SD_HAVE_POSIX_RT_SIGWAITINFO
  printf("system has posix_rt_sigwaitinfo\n");
#else
  printf("system does not have posix_rt_sigwaitinfo\n");
#endif
#ifdef SD_HAVE_POSIX_RT_TIMER_CREATE
  printf("system has posix_rt_timer_create\n");
#else
  printf("system does not have posix_rt_timer_create\n");
#endif
#ifdef SD_HAVE_POSIX_RT_TIMER_DELETE
  printf("system has posix_rt_timer_delete\n");
#else
  printf("system does not have posix_rt_timer_delete\n");
#endif
#ifdef SD_HAVE_POSIX_RT_TIMER_GETOVERRUN
  printf("system has posix_rt_timer_getoverrun\n");
#else
  printf("system does not have posix_rt_timer_getoverrun\n");
#endif
#ifdef SD_HAVE_PTHREADS
  printf("system has pthreads\n");
#else
  printf("system does not have pthreads\n");
#endif
#ifdef SD_HAVE_PTHREADS_REALTIME
  printf("system has pthreads_realtime\n");
#else
  printf("system does not have pthreads_realtime\n");
#endif
#ifdef SD_HAVE_SENDFILE
  printf("system has sendfile\n");
#else
  printf("system does not have sendfile\n");
#endif
#ifdef SD_HAVE_SENDFILE_BSD
  printf("system has sendfile_bsd\n");
#else
  printf("system does not have sendfile_bsd\n");
#endif
#ifdef SD_HAVE_SENDFILE_HPUX
  printf("system has sendfile_hpux\n");
#else
  printf("system does not have sendfile_hpux\n");
#endif
#ifdef SD_HAVE_SENDFILE_SYSV
  printf("system has sendfile_sysv\n");
#else
  printf("system does not have sendfile_sysv\n");
#endif
#ifdef SD_HAVE_SIGACTION
  printf("system has sigaction\n");
#else
  printf("system does not have sigaction\n");
#endif
#ifdef SD_HAVE_SIGPROCMASK
  printf("system has sigprocmask\n");
#else
  printf("system does not have sigprocmask\n");
#endif
#ifdef SD_HAVE_STREAMS
  printf("system has streams\n");
#else
  printf("system does not have streams\n");
#endif
#ifdef SD_SYSINFO_OS
  printf("system has sd_sysinfo_os\n");
#else
  printf("system does not have sd_sysinfo_os\n");
#endif
#ifdef SD_SYSINFO_OSVERSION
  printf("system has sd_sysinfo_osversion\n");
#else
  printf("system does not have sd_sysinfo_osversion\n");
#endif
#ifdef SD_SYSINFO_ARCH
  printf("system has sd_sysinfo_arch\n");
#else
  printf("system does not have sd_sysinfo_arch\n");
#endif
#ifdef SD_SYSINFO_CC_TYPE
  printf("system has sd_sysinfo_cctype\n");
#else
  printf("system does not have sd_sysinfo_cctype\n");
#endif
#ifdef SD_SYSINFO_CFLAGS
  printf("system has sd_sysinfo_cflags\n");
#else
  printf("system does not have sd_sysinfo_cflags\n");
#endif
#ifdef SD_SYSINFO_LDFLAGS
  printf("system has sd_sysinfo_ldflags\n");
#else
  printf("system does not have sd_sysinfo_ldflags\n");
#endif
#ifdef SD_SYSINFO_CC_VERSION
  printf("system has sd_sysinfo_ccversion\n");
#else
  printf("system does not have sd_sysinfo_ccversion\n");
#endif
#ifdef SD_SYSINFO_CC_VERSION_MAJOR
  printf("system has sd_sysinfo_ccversion_major\n");
#else
  printf("system does not have sd_sysinfo_ccversion_major\n");
#endif
#ifdef SD_SYSINFO_CC_VERSION_MINOR
  printf("system has sd_sysinfo_ccversion_minor\n");
#else
  printf("system does not have sd_sysinfo_ccversion_minor\n");
#endif
#ifdef SD_SYSINFO_CC_VERSION_PATCH
  printf("system has sd_sysinfo_ccversion_patch\n");
#else
  printf("system does not have sd_sysinfo_ccversion_patch\n");
#endif
#ifdef SD_SYSINFO_ADA_CFLAGS
  printf("system has sd_sysinfo_ada_cflags\n");
#else
  printf("system does not have sd_sysinfo_ada_cflags\n");
#endif
#ifdef SD_SYSINFO_ADA_BFLAGS
  printf("system has sd_sysinfo_ada_bflags\n");
#else
  printf("system does not have sd_sysinfo_ada_bflags\n");
#endif
#ifdef SD_SYSINFO_ADA_LDFLAGS
  printf("system has sd_sysinfo_ada_ldflags\n");
#else
  printf("system does not have sd_sysinfo_ada_ldflags\n");
#endif
#ifdef SD_SYSINFO_ADA_TYPE
  printf("system has sd_sysinfo_ada_type\n");
#else
  printf("system does not have sd_sysinfo_ada_type\n");
#endif
#ifdef SD_SYSINFO_ADA_VERSION
  printf("system has sd_sysinfo_ada_version\n");
#else
  printf("system does not have sd_sysinfo_ada_version\n");
#endif
#ifdef SD_SYSINFO_ADA_VERSION_MAJOR
  printf("system has sd_sysinfo_ada_version_major\n");
#else
  printf("system does not have sd_sysinfo_ada_version_major\n");
#endif
#ifdef SD_SYSINFO_ADA_VERSION_MINOR
  printf("system has sd_sysinfo_ada_version_minor\n");
#else
  printf("system does not have sd_sysinfo_ada_version_minor\n");
#endif
#ifdef SD_SYSINFO_ADA_VERSION_PATCH
  printf("system has sd_sysinfo_ada_version_patch\n");
#else
  printf("system does not have sd_sysinfo_ada_version_patch\n");
#endif
#ifdef SD_SYSINFO_CPU_NUM
  printf("system has sd_sysinfo_cpu_num\n");
#else
  printf("system does not have sd_sysinfo_cpu_num\n");
#endif
#ifdef SD_SYSINFO_CPU_L1_INST_CACHE_SIZE
  printf("system has sd_sysinfo_cpu_l1_inst_cache_size\n");
#else
  printf("system does not have sd_sysinfo_cpu_l1_inst_cache_size\n");
#endif
#ifdef SD_SYSINFO_CPU_L1_DATA_CACHE_SIZE
  printf("system has sd_sysinfo_cpu_l1_data_cache_size\n");
#else
  printf("system does not have sd_sysinfo_cpu_l1_data_cache_size\n");
#endif
#ifdef SD_SYSINFO_CPU_L2_CACHE_SIZE
  printf("system has sd_sysinfo_cpu_l2_cache_size\n");
#else
  printf("system does not have sd_sysinfo_cpu_l2_cache_size\n");
#endif
#ifdef SD_SYSINFO_CPU_L3_CACHE_SIZE
  printf("system has sd_sysinfo_cpu_l3_cache_size\n");
#else
  printf("system does not have sd_sysinfo_cpu_l3_cache_size\n");
#endif
#ifdef SD_SYSINFO_CPU_CACHE_LINE_SIZE
  printf("system has sd_sysinfo_cpu_cache_line_size\n");
#else
  printf("system does not have sd_sysinfo_cpu_cache_line_size\n");
#endif
#ifdef SD_SYSINFO_CPU_FREQ
  printf("system has sd_sysinfo_cpu_freq\n");
#else
  printf("system does not have sd_sysinfo_cpu_freq\n");
#endif
#ifdef SD_SYSINFO_CPU_EXT
  printf("system has sd_sysinfo_cpu_ext\n");
#else
  printf("system does not have sd_sysinfo_cpu_ext\n");
#endif
#ifdef SD_SYSINFO_HAVE_CPU_EXT_MMX
  printf("system has sd_sysinfo_have_cpu_ext_mmx\n");
#else
  printf("system does not have sd_sysinfo_have_cpu_ext_mmx\n");
#endif
#ifdef SD_SYSINFO_HAVE_CPU_EXT_MMX2
  printf("system has sd_sysinfo_have_cpu_ext_mmx2\n");
#else
  printf("system does not have sd_sysinfo_have_cpu_ext_mmx2\n");
#endif
#ifdef SD_SYSINFO_HAVE_CPU_EXT_SSE
  printf("system has sd_sysinfo_have_cpu_ext_sse\n");
#else
  printf("system does not have sd_sysinfo_have_cpu_ext_sse\n");
#endif
#ifdef SD_SYSINFO_HAVE_CPU_EXT_SSE2
  printf("system has sd_sysinfo_have_cpu_ext_sse2\n");
#else
  printf("system does not have sd_sysinfo_have_cpu_ext_sse2\n");
#endif
#ifdef SD_SYSINFO_HAVE_CPU_EXT_SSE3
  printf("system has sd_sysinfo_have_cpu_ext_sse3\n");
#else
  printf("system does not have sd_sysinfo_have_cpu_ext_sse3\n");
#endif
#ifdef SD_SYSINFO_HAVE_CPU_EXT_SSE4_1
  printf("system has sd_sysinfo_have_cpu_ext_sse4_1\n");
#else
  printf("system does not have sd_sysinfo_have_cpu_ext_sse4_1\n");
#endif
#ifdef SD_SYSINFO_HAVE_CPU_EXT_SSE4_2
  printf("system has sd_sysinfo_have_cpu_ext_sse4_2\n");
#else
  printf("system does not have sd_sysinfo_have_cpu_ext_sse4_2\n");
#endif
#ifdef SD_UINT16_SUPPORTED
  printf("system has sd_uint16_supported\n");
#else
  printf("system does not have sd_uint16_supported\n");
#endif
#ifdef SD_UINT32_SUPPORTED
  printf("system has sd_uint32_supported\n");
#else
  printf("system does not have sd_uint32_supported\n");
#endif
#ifdef SD_UINT64_SUPPORTED
  printf("system has sd_uint64_supported\n");
#else
  printf("system does not have sd_uint64_supported\n");
#endif
#ifdef SD_HAVE_SDL
  printf("system has sdl\n");
#else
  printf("system does not have sdl\n");
#endif
#ifdef SD_HAVE_SDL_GFX
  printf("system has sdl_gfx\n");
#else
  printf("system does not have sdl_gfx\n");
#endif
#ifdef SD_HAVE_SDL_IMAGE
  printf("system has sdl_image\n");
#else
  printf("system does not have sdl_image\n");
#endif
#ifdef SD_HAVE_SDL_MIXER
  printf("system has sdl_mixer\n");
#else
  printf("system does not have sdl_mixer\n");
#endif
#ifdef SD_HAVE_SDL_TTF
  printf("system has sdl_ttf\n");
#else
  printf("system does not have sdl_ttf\n");
#endif
#ifdef SD_HAVE_SILC
  printf("system has silc\n");
#else
  printf("system does not have silc\n");
#endif
#ifdef SD_HAVE_SKEL
  printf("system has skel\n");
#else
  printf("system does not have skel\n");
#endif
#ifdef SD_HAVE_SMTPLIB
  printf("system has smtplib\n");
#else
  printf("system does not have smtplib\n");
#endif
#ifdef SD_HAVE_LIBSNDFILE
  printf("system has libsndfile\n");
#else
  printf("system does not have libsndfile\n");
#endif
#ifdef SD_HAVE_SQLITE3
  printf("system has sqlite3\n");
#else
  printf("system does not have sqlite3\n");
#endif
#ifdef SD_HAVE_LIBTIFF
  printf("system has libtiff\n");
#else
  printf("system does not have libtiff\n");
#endif
#ifdef SD_HAVE_VECTOR
  printf("system has vector\n");
#else
  printf("system does not have vector\n");
#endif

  return 0;
}
