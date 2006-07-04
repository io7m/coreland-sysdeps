#include "ch_flags.h"
#include "dlopen.h"
#include "floatcast.h"
#include "sig_action.h"
#include "sig_pmask.h"

int main()
{
  /* generated by tools/genchkcode.sh */

#ifdef HAVE_CHFLAGS
  printf("system has chflags\n");
#else
  printf("system does not have chflags\n");
#endif
#ifdef HAVE_LIBPNG
  printf("system has libpng\n");
#else
  printf("system does not have libpng\n");
#endif
#ifdef HAVE_SDL
  printf("system has sdl\n");
#else
  printf("system does not have sdl\n");
#endif
#ifdef HAVE_SDL_MIXER
  printf("system has sdl_mixer\n");
#else
  printf("system does not have sdl_mixer\n");
#endif
#ifdef HAVE_SDL_IMAGE
  printf("system has sdl_image\n");
#else
  printf("system does not have sdl_image\n");
#endif
#ifdef HAVE_SDL_TTF
  printf("system has sdl_ttf\n");
#else
  printf("system does not have sdl_ttf\n");
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
#ifdef HAVE_LIBSNDFILE
  printf("system has libsndfile\n");
#else
  printf("system does not have libsndfile\n");
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
#ifdef HAVE_LLRINT
  printf("system has llrint\n");
#else
  printf("system does not have llrint\n");
#endif
#ifdef HAVE_LLRINTF
  printf("system has llrintf\n");
#else
  printf("system does not have llrintf\n");
#endif
#ifdef HAVE_LRINT
  printf("system has lrint\n");
#else
  printf("system does not have lrint\n");
#endif
#ifdef HAVE_LRINTF
  printf("system has lrintf\n");
#else
  printf("system does not have lrintf\n");
#endif
  return 0;
}
