#include <stdio.h>

#include "ch_flags.h"
#include "dlopen.h"
#include "fd.h"
#include "floatcast.h"
#include "aio-mech.h"
#include "sd_fcntl.h"
#include "sd_mmap.h"
#include "sd_math.h"
#include "sig_action.h"
#include "sig_pmask.h"
#include "sysinfo.h"

int main(void)
{

#ifdef HAVE_KQUEUE
  printf("system has kqueue\n");
#else
  printf("system does not have kqueue\n");
#endif
#ifdef HAVE_EPOLL
  printf("system has epoll\n");
#else
  printf("system does not have epoll\n");
#endif
#ifdef HAVE_POLL
  printf("system has poll\n");
#else
  printf("system does not have poll\n");
#endif
#ifdef HAVE_SELECT
  printf("system has select\n");
#else
  printf("system does not have select\n");
#endif
#ifdef HAVE_DLOPEN
  printf("system has dlopen\n");
#else
  printf("system does not have dlopen\n");
#endif
#ifdef HAVE_DLFUNC
  printf("system has dlfunc\n");
#else
  printf("system does not have dlfunc\n");
#endif
#ifdef HAVE_IO_POLL
  printf("system has io_poll\n");
#else
  printf("system does not have io_poll\n");
#endif
#ifdef HAVE_SDL_IMAGE
  printf("system has sdl_image\n");
#else
  printf("system does not have sdl_image\n");
#endif
#ifdef HAVE_DUP2
  printf("system has dup2\n");
#else
  printf("system does not have dup2\n");
#endif
#ifdef HAVE_MATH_ACOS
  printf("system has math_acos\n");
#else
  printf("system does not have math_acos\n");
#endif
#ifdef HAVE_MATH_ACOSH
  printf("system has math_acosh\n");
#else
  printf("system does not have math_acosh\n");
#endif
#ifdef HAVE_MATH_ACOSHF
  printf("system has math_acoshf\n");
#else
  printf("system does not have math_acoshf\n");
#endif
#ifdef HAVE_MATH_ASIN
  printf("system has math_asin\n");
#else
  printf("system does not have math_asin\n");
#endif
#ifdef HAVE_MATH_ASINF
  printf("system has math_asinf\n");
#else
  printf("system does not have math_asinf\n");
#endif
#ifdef HAVE_MATH_ASINH
  printf("system has math_asinh\n");
#else
  printf("system does not have math_asinh\n");
#endif
#ifdef HAVE_MATH_ASINHF
  printf("system has math_asinhf\n");
#else
  printf("system does not have math_asinhf\n");
#endif
#ifdef HAVE_MATH_ATAN
  printf("system has math_atan\n");
#else
  printf("system does not have math_atan\n");
#endif
#ifdef HAVE_MATH_ATAN2
  printf("system has math_atan2\n");
#else
  printf("system does not have math_atan2\n");
#endif
#ifdef HAVE_MATH_ATAN2F
  printf("system has math_atan2f\n");
#else
  printf("system does not have math_atan2f\n");
#endif
#ifdef HAVE_MATH_ATANF
  printf("system has math_atanf\n");
#else
  printf("system does not have math_atanf\n");
#endif
#ifdef HAVE_MATH_ATANH
  printf("system has math_atanh\n");
#else
  printf("system does not have math_atanh\n");
#endif
#ifdef HAVE_MATH_ATANHF
  printf("system has math_atanhf\n");
#else
  printf("system does not have math_atanhf\n");
#endif
#ifdef HAVE_MATH_CBRT
  printf("system has math_cbrt\n");
#else
  printf("system does not have math_cbrt\n");
#endif
#ifdef HAVE_MATH_CBRTF
  printf("system has math_cbrtf\n");
#else
  printf("system does not have math_cbrtf\n");
#endif
#ifdef HAVE_MATH_CEIL
  printf("system has math_ceil\n");
#else
  printf("system does not have math_ceil\n");
#endif
#ifdef HAVE_MATH_CEILF
  printf("system has math_ceilf\n");
#else
  printf("system does not have math_ceilf\n");
#endif
#ifdef HAVE_MATH_CEILL
  printf("system has math_ceill\n");
#else
  printf("system does not have math_ceill\n");
#endif
#ifdef HAVE_MATH_COPYSIGN
  printf("system has math_copysign\n");
#else
  printf("system does not have math_copysign\n");
#endif
#ifdef HAVE_MATH_COPYSIGNF
  printf("system has math_copysignf\n");
#else
  printf("system does not have math_copysignf\n");
#endif
#ifdef HAVE_MATH_COPYSIGNL
  printf("system has math_copysignl\n");
#else
  printf("system does not have math_copysignl\n");
#endif
#ifdef HAVE_MATH_COS
  printf("system has math_cos\n");
#else
  printf("system does not have math_cos\n");
#endif
#ifdef HAVE_MATH_COSF
  printf("system has math_cosf\n");
#else
  printf("system does not have math_cosf\n");
#endif
#ifdef HAVE_MATH_COSH
  printf("system has math_cosh\n");
#else
  printf("system does not have math_cosh\n");
#endif
#ifdef HAVE_MATH_COSHF
  printf("system has math_coshf\n");
#else
  printf("system does not have math_coshf\n");
#endif
#ifdef HAVE_MATH_ERF
  printf("system has math_erf\n");
#else
  printf("system does not have math_erf\n");
#endif
#ifdef HAVE_MATH_ERFC
  printf("system has math_erfc\n");
#else
  printf("system does not have math_erfc\n");
#endif
#ifdef HAVE_MATH_ERFCF
  printf("system has math_erfcf\n");
#else
  printf("system does not have math_erfcf\n");
#endif
#ifdef HAVE_MATH_ERFF
  printf("system has math_erff\n");
#else
  printf("system does not have math_erff\n");
#endif
#ifdef HAVE_MATH_EXP
  printf("system has math_exp\n");
#else
  printf("system does not have math_exp\n");
#endif
#ifdef HAVE_MATH_EXP2
  printf("system has math_exp2\n");
#else
  printf("system does not have math_exp2\n");
#endif
#ifdef HAVE_MATH_EXP2F
  printf("system has math_exp2f\n");
#else
  printf("system does not have math_exp2f\n");
#endif
#ifdef HAVE_MATH_EXPF
  printf("system has math_expf\n");
#else
  printf("system does not have math_expf\n");
#endif
#ifdef HAVE_MATH_EXPM1
  printf("system has math_expm1\n");
#else
  printf("system does not have math_expm1\n");
#endif
#ifdef HAVE_MATH_EXPM1F
  printf("system has math_expm1f\n");
#else
  printf("system does not have math_expm1f\n");
#endif
#ifdef HAVE_MATH_FABS
  printf("system has math_fabs\n");
#else
  printf("system does not have math_fabs\n");
#endif
#ifdef HAVE_MATH_FABSL
  printf("system has math_fabsl\n");
#else
  printf("system does not have math_fabsl\n");
#endif
#ifdef HAVE_MATH_FDIM
  printf("system has math_fdim\n");
#else
  printf("system does not have math_fdim\n");
#endif
#ifdef HAVE_MATH_FDIMF
  printf("system has math_fdimf\n");
#else
  printf("system does not have math_fdimf\n");
#endif
#ifdef HAVE_MATH_FDIML
  printf("system has math_fdiml\n");
#else
  printf("system does not have math_fdiml\n");
#endif
#ifdef HAVE_MATH_FLOOR
  printf("system has math_floor\n");
#else
  printf("system does not have math_floor\n");
#endif
#ifdef HAVE_MATH_FLOORL
  printf("system has math_floorl\n");
#else
  printf("system does not have math_floorl\n");
#endif
#ifdef HAVE_MATH_FMA
  printf("system has math_fma\n");
#else
  printf("system does not have math_fma\n");
#endif
#ifdef HAVE_MATH_FMAF
  printf("system has math_fmaf\n");
#else
  printf("system does not have math_fmaf\n");
#endif
#ifdef HAVE_MATH_FMAL
  printf("system has math_fmal\n");
#else
  printf("system does not have math_fmal\n");
#endif
#ifdef HAVE_MATH_FMAX
  printf("system has math_fmax\n");
#else
  printf("system does not have math_fmax\n");
#endif
#ifdef HAVE_MATH_FMAXF
  printf("system has math_fmaxf\n");
#else
  printf("system does not have math_fmaxf\n");
#endif
#ifdef HAVE_MATH_FMAXL
  printf("system has math_fmaxl\n");
#else
  printf("system does not have math_fmaxl\n");
#endif
#ifdef HAVE_MATH_FMIN
  printf("system has math_fmin\n");
#else
  printf("system does not have math_fmin\n");
#endif
#ifdef HAVE_MATH_FMINF
  printf("system has math_fminf\n");
#else
  printf("system does not have math_fminf\n");
#endif
#ifdef HAVE_MATH_FMINL
  printf("system has math_fminl\n");
#else
  printf("system does not have math_fminl\n");
#endif
#ifdef HAVE_MATH_FPCLASSIFY
  printf("system has math_fpclassify\n");
#else
  printf("system does not have math_fpclassify\n");
#endif
#ifdef HAVE_MATH_FREXP
  printf("system has math_frexp\n");
#else
  printf("system does not have math_frexp\n");
#endif
#ifdef HAVE_MATH_FREXPF
  printf("system has math_frexpf\n");
#else
  printf("system does not have math_frexpf\n");
#endif
#ifdef HAVE_MATH_FREXPL
  printf("system has math_frexpl\n");
#else
  printf("system does not have math_frexpl\n");
#endif
#ifdef HAVE_MATH_ILOGB
  printf("system has math_ilogb\n");
#else
  printf("system does not have math_ilogb\n");
#endif
#ifdef HAVE_MATH_ILOGBF
  printf("system has math_ilogbf\n");
#else
  printf("system does not have math_ilogbf\n");
#endif
#ifdef HAVE_MATH_ILOGBL
  printf("system has math_ilogbl\n");
#else
  printf("system does not have math_ilogbl\n");
#endif
#ifdef HAVE_MATH_ISFINITE
  printf("system has math_isfinite\n");
#else
  printf("system does not have math_isfinite\n");
#endif
#ifdef HAVE_MATH_ISGREATER
  printf("system has math_isgreater\n");
#else
  printf("system does not have math_isgreater\n");
#endif
#ifdef HAVE_MATH_ISGREATEREQUAL
  printf("system has math_isgreaterequal\n");
#else
  printf("system does not have math_isgreaterequal\n");
#endif
#ifdef HAVE_MATH_ISINF
  printf("system has math_isinf\n");
#else
  printf("system does not have math_isinf\n");
#endif
#ifdef HAVE_MATH_ISLESS
  printf("system has math_isless\n");
#else
  printf("system does not have math_isless\n");
#endif
#ifdef HAVE_MATH_ISLESSEQUAL
  printf("system has math_islessequal\n");
#else
  printf("system does not have math_islessequal\n");
#endif
#ifdef HAVE_MATH_ISLESSGREATER
  printf("system has math_islessgreater\n");
#else
  printf("system does not have math_islessgreater\n");
#endif
#ifdef HAVE_MATH_ISNAN
  printf("system has math_isnan\n");
#else
  printf("system does not have math_isnan\n");
#endif
#ifdef HAVE_MATH_ISNANF
  printf("system has math_isnanf\n");
#else
  printf("system does not have math_isnanf\n");
#endif
#ifdef HAVE_MATH_ISNORMAL
  printf("system has math_isnormal\n");
#else
  printf("system does not have math_isnormal\n");
#endif
#ifdef HAVE_MATH_ISUNORDERED
  printf("system has math_isunordered\n");
#else
  printf("system does not have math_isunordered\n");
#endif
#ifdef HAVE_MATH_J0
  printf("system has math_j0\n");
#else
  printf("system does not have math_j0\n");
#endif
#ifdef HAVE_MATH_J0F
  printf("system has math_j0f\n");
#else
  printf("system does not have math_j0f\n");
#endif
#ifdef HAVE_MATH_J1
  printf("system has math_j1\n");
#else
  printf("system does not have math_j1\n");
#endif
#ifdef HAVE_MATH_J1F
  printf("system has math_j1f\n");
#else
  printf("system does not have math_j1f\n");
#endif
#ifdef HAVE_MATH_JN
  printf("system has math_jn\n");
#else
  printf("system does not have math_jn\n");
#endif
#ifdef HAVE_MATH_JNF
  printf("system has math_jnf\n");
#else
  printf("system does not have math_jnf\n");
#endif
#ifdef HAVE_MATH_LDEXP
  printf("system has math_ldexp\n");
#else
  printf("system does not have math_ldexp\n");
#endif
#ifdef HAVE_MATH_LDEXPF
  printf("system has math_ldexpf\n");
#else
  printf("system does not have math_ldexpf\n");
#endif
#ifdef HAVE_MATH_LDEXPL
  printf("system has math_ldexpl\n");
#else
  printf("system does not have math_ldexpl\n");
#endif
#ifdef HAVE_MATH_LGAMMA
  printf("system has math_lgamma\n");
#else
  printf("system does not have math_lgamma\n");
#endif
#ifdef HAVE_MATH_LGAMMAF
  printf("system has math_lgammaf\n");
#else
  printf("system does not have math_lgammaf\n");
#endif
#ifdef HAVE_MATH_LLRINT
  printf("system has math_llrint\n");
#else
  printf("system does not have math_llrint\n");
#endif
#ifdef HAVE_MATH_LLRINTF
  printf("system has math_llrintf\n");
#else
  printf("system does not have math_llrintf\n");
#endif
#ifdef HAVE_MATH_LLROUND
  printf("system has math_llround\n");
#else
  printf("system does not have math_llround\n");
#endif
#ifdef HAVE_MATH_LLROUNDF
  printf("system has math_llroundf\n");
#else
  printf("system does not have math_llroundf\n");
#endif
#ifdef HAVE_MATH_LLROUNDL
  printf("system has math_llroundl\n");
#else
  printf("system does not have math_llroundl\n");
#endif
#ifdef HAVE_MATH_LOG
  printf("system has math_log\n");
#else
  printf("system does not have math_log\n");
#endif
#ifdef HAVE_MATH_LOG10
  printf("system has math_log10\n");
#else
  printf("system does not have math_log10\n");
#endif
#ifdef HAVE_MATH_LOG10F
  printf("system has math_log10f\n");
#else
  printf("system does not have math_log10f\n");
#endif
#ifdef HAVE_MATH_LOG1P
  printf("system has math_log1p\n");
#else
  printf("system does not have math_log1p\n");
#endif
#ifdef HAVE_MATH_LOG1PF
  printf("system has math_log1pf\n");
#else
  printf("system does not have math_log1pf\n");
#endif
#ifdef HAVE_MATH_LOGF
  printf("system has math_logf\n");
#else
  printf("system does not have math_logf\n");
#endif
#ifdef HAVE_MATH_LRINT
  printf("system has math_lrint\n");
#else
  printf("system does not have math_lrint\n");
#endif
#ifdef HAVE_MATH_LRINTF
  printf("system has math_lrintf\n");
#else
  printf("system does not have math_lrintf\n");
#endif
#ifdef HAVE_MATH_LROUND
  printf("system has math_lround\n");
#else
  printf("system does not have math_lround\n");
#endif
#ifdef HAVE_MATH_LROUNDF
  printf("system has math_lroundf\n");
#else
  printf("system does not have math_lroundf\n");
#endif
#ifdef HAVE_MATH_LROUNDL
  printf("system has math_lroundl\n");
#else
  printf("system does not have math_lroundl\n");
#endif
#ifdef HAVE_MATH_MODF
  printf("system has math_modf\n");
#else
  printf("system does not have math_modf\n");
#endif
#ifdef HAVE_MATH_NEARBYINT
  printf("system has math_nearbyint\n");
#else
  printf("system does not have math_nearbyint\n");
#endif
#ifdef HAVE_MATH_NEARBYINTF
  printf("system has math_nearbyintf\n");
#else
  printf("system does not have math_nearbyintf\n");
#endif
#ifdef HAVE_MATH_NEXTAFTER
  printf("system has math_nextafter\n");
#else
  printf("system does not have math_nextafter\n");
#endif
#ifdef HAVE_MATH_NEXTAFTERF
  printf("system has math_nextafterf\n");
#else
  printf("system does not have math_nextafterf\n");
#endif
#ifdef HAVE_MATH_NEXTAFTERL
  printf("system has math_nextafterl\n");
#else
  printf("system does not have math_nextafterl\n");
#endif
#ifdef HAVE_MATH_NEXTTOWARD
  printf("system has math_nexttoward\n");
#else
  printf("system does not have math_nexttoward\n");
#endif
#ifdef HAVE_MATH_NEXTTOWARDF
  printf("system has math_nexttowardf\n");
#else
  printf("system does not have math_nexttowardf\n");
#endif
#ifdef HAVE_MATH_NEXTTOWARDL
  printf("system has math_nexttowardl\n");
#else
  printf("system does not have math_nexttowardl\n");
#endif
#ifdef HAVE_MATH_POW
  printf("system has math_pow\n");
#else
  printf("system does not have math_pow\n");
#endif
#ifdef HAVE_MATH_POWF
  printf("system has math_powf\n");
#else
  printf("system does not have math_powf\n");
#endif
#ifdef HAVE_MATH_REMAINDER
  printf("system has math_remainder\n");
#else
  printf("system does not have math_remainder\n");
#endif
#ifdef HAVE_MATH_REMAINDERF
  printf("system has math_remainderf\n");
#else
  printf("system does not have math_remainderf\n");
#endif
#ifdef HAVE_MATH_REMQUO
  printf("system has math_remquo\n");
#else
  printf("system does not have math_remquo\n");
#endif
#ifdef HAVE_MATH_REMQUOF
  printf("system has math_remquof\n");
#else
  printf("system does not have math_remquof\n");
#endif
#ifdef HAVE_MATH_RINT
  printf("system has math_rint\n");
#else
  printf("system does not have math_rint\n");
#endif
#ifdef HAVE_MATH_RINTF
  printf("system has math_rintf\n");
#else
  printf("system does not have math_rintf\n");
#endif
#ifdef HAVE_MATH_ROUNDL
  printf("system has math_roundl\n");
#else
  printf("system does not have math_roundl\n");
#endif
#ifdef HAVE_MATH_SCALBLN
  printf("system has math_scalbln\n");
#else
  printf("system does not have math_scalbln\n");
#endif
#ifdef HAVE_MATH_SCALBLNF
  printf("system has math_scalblnf\n");
#else
  printf("system does not have math_scalblnf\n");
#endif
#ifdef HAVE_MATH_SCALBLNL
  printf("system has math_scalblnl\n");
#else
  printf("system does not have math_scalblnl\n");
#endif
#ifdef HAVE_MATH_SCALBN
  printf("system has math_scalbn\n");
#else
  printf("system does not have math_scalbn\n");
#endif
#ifdef HAVE_MATH_SCALBNF
  printf("system has math_scalbnf\n");
#else
  printf("system does not have math_scalbnf\n");
#endif
#ifdef HAVE_MATH_SCALBNL
  printf("system has math_scalbnl\n");
#else
  printf("system does not have math_scalbnl\n");
#endif
#ifdef HAVE_MATH_SIGNBIT
  printf("system has math_signbit\n");
#else
  printf("system does not have math_signbit\n");
#endif
#ifdef HAVE_MATH_SIN
  printf("system has math_sin\n");
#else
  printf("system does not have math_sin\n");
#endif
#ifdef HAVE_MATH_SINF
  printf("system has math_sinf\n");
#else
  printf("system does not have math_sinf\n");
#endif
#ifdef HAVE_MATH_SINH
  printf("system has math_sinh\n");
#else
  printf("system does not have math_sinh\n");
#endif
#ifdef HAVE_MATH_SINHF
  printf("system has math_sinhf\n");
#else
  printf("system does not have math_sinhf\n");
#endif
#ifdef HAVE_MATH_SQRT
  printf("system has math_sqrt\n");
#else
  printf("system does not have math_sqrt\n");
#endif
#ifdef HAVE_MATH_SQRTL
  printf("system has math_sqrtl\n");
#else
  printf("system does not have math_sqrtl\n");
#endif
#ifdef HAVE_MATH_TAN
  printf("system has math_tan\n");
#else
  printf("system does not have math_tan\n");
#endif
#ifdef HAVE_MATH_TANF
  printf("system has math_tanf\n");
#else
  printf("system does not have math_tanf\n");
#endif
#ifdef HAVE_MATH_TANH
  printf("system has math_tanh\n");
#else
  printf("system does not have math_tanh\n");
#endif
#ifdef HAVE_MATH_TANHF
  printf("system has math_tanhf\n");
#else
  printf("system does not have math_tanhf\n");
#endif
#ifdef HAVE_MATH_TGAMMA
  printf("system has math_tgamma\n");
#else
  printf("system does not have math_tgamma\n");
#endif
#ifdef HAVE_MATH_TRUNC
  printf("system has math_trunc\n");
#else
  printf("system does not have math_trunc\n");
#endif
#ifdef HAVE_MATH_TRUNCF
  printf("system has math_truncf\n");
#else
  printf("system does not have math_truncf\n");
#endif
#ifdef HAVE_MATH_TRUNCL
  printf("system has math_truncl\n");
#else
  printf("system does not have math_truncl\n");
#endif
#ifdef HAVE_MATH_Y0
  printf("system has math_y0\n");
#else
  printf("system does not have math_y0\n");
#endif
#ifdef HAVE_MATH_Y0F
  printf("system has math_y0f\n");
#else
  printf("system does not have math_y0f\n");
#endif
#ifdef HAVE_MATH_Y1
  printf("system has math_y1\n");
#else
  printf("system does not have math_y1\n");
#endif
#ifdef HAVE_MATH_Y1F
  printf("system has math_y1f\n");
#else
  printf("system does not have math_y1f\n");
#endif
#ifdef HAVE_MATH_YN
  printf("system has math_yn\n");
#else
  printf("system does not have math_yn\n");
#endif
#ifdef HAVE_MATH_YNF
  printf("system has math_ynf\n");
#else
  printf("system does not have math_ynf\n");
#endif
#ifdef HAVE_CHFLAGS
  printf("system has chflags\n");
#else
  printf("system does not have chflags\n");
#endif
#ifdef HAVE_SDL_TTF
  printf("system has sdl_ttf\n");
#else
  printf("system does not have sdl_ttf\n");
#endif
#ifdef HAVE_FASTCGI
  printf("system has fastcgi\n");
#else
  printf("system does not have fastcgi\n");
#endif
#ifdef HAVE_OPENGL
  printf("system has opengl\n");
#else
  printf("system does not have opengl\n");
#endif
#ifdef HAVE_LIBSNDFILE
  printf("system has libsndfile\n");
#else
  printf("system does not have libsndfile\n");
#endif
#ifdef HAVE_PDCGI
  printf("system has pdcgi\n");
#else
  printf("system does not have pdcgi\n");
#endif
#ifdef HAVE_SIGACTION
  printf("system has sigaction\n");
#else
  printf("system does not have sigaction\n");
#endif
#ifdef HAVE_SIGPROCMASK
  printf("system has sigprocmask\n");
#else
  printf("system does not have sigprocmask\n");
#endif
#ifdef HAVE_LIBTIFF
  printf("system has libtiff\n");
#else
  printf("system does not have libtiff\n");
#endif
#ifdef HAVE_FLTK
  printf("system has fltk\n");
#else
  printf("system does not have fltk\n");
#endif
#ifdef HAVE_FLTK11
  printf("system has fltk11\n");
#else
  printf("system does not have fltk11\n");
#endif
#ifdef HAVE_MMAP
  printf("system has mmap\n");
#else
  printf("system does not have mmap\n");
#endif
#ifdef HAVE_SDL_MIXER
  printf("system has sdl_mixer\n");
#else
  printf("system does not have sdl_mixer\n");
#endif
#ifdef HAVE_PORTAUDIO
  printf("system has portaudio\n");
#else
  printf("system does not have portaudio\n");
#endif
#ifdef HAVE_JACK
  printf("system has jack\n");
#else
  printf("system does not have jack\n");
#endif
#ifdef HAVE_CORELIB
  printf("system has corelib\n");
#else
  printf("system does not have corelib\n");
#endif
#ifdef HAVE_FCNTL
  printf("system has fcntl\n");
#else
  printf("system does not have fcntl\n");
#endif
#ifdef HAVE_FLTK
  printf("system has fltk\n");
#else
  printf("system does not have fltk\n");
#endif
#ifdef HAVE_FLTK2
  printf("system has fltk2\n");
#else
  printf("system does not have fltk2\n");
#endif
#ifdef HAVE_SDL
  printf("system has sdl\n");
#else
  printf("system does not have sdl\n");
#endif
#ifdef HAVE_LIBPNG
  printf("system has libpng\n");
#else
  printf("system does not have libpng\n");
#endif
#ifdef HAVE_PTHREADS
  printf("system has pthreads\n");
#else
  printf("system does not have pthreads\n");
#endif
#ifdef HAVE_PTHREADS_REALTIME
  printf("system has pthreads_realtime\n");
#else
  printf("system does not have pthreads_realtime\n");
#endif
#ifdef HAVE_VECTOR
  printf("system has vector\n");
#else
  printf("system does not have vector\n");
#endif
#ifdef HAVE_LOADSO
  printf("system has loadso\n");
#else
  printf("system does not have loadso\n");
#endif
  return 0;
}
