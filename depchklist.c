#include "ch_flags.h"
#include "dlopen.h"
#include "fd.h"
#include "floatcast.h"
#include "aio-mech.h"
#include "sig_action.h"
#include "sig_pmask.h"

int main()
{
  /* generated by tools/genchkcode.sh */
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
#ifdef HAVE_CHFLAGS
  printf("system has chflags\n");
#else
  printf("system does not have chflags\n");
#endif
#ifdef HAVE_CORELIB
  printf("system has corelib\n");
#else
  printf("system does not have corelib\n");
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
#ifdef HAVE_DUP2
  printf("system has dup2\n");
#else
  printf("system does not have dup2\n");
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
#ifdef HAVE_JACK
  printf("system has jack\n");
#else
  printf("system does not have jack\n");
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
#ifdef HAVE_SDL_IMAGE
  printf("system has sdl_image\n");
#else
  printf("system does not have sdl_image\n");
#endif
#ifdef HAVE_SDL_MIXER
  printf("system has sdl_mixer\n");
#else
  printf("system does not have sdl_mixer\n");
#endif
#ifdef HAVE_SDL_TTF
  printf("system has sdl_ttf\n");
#else
  printf("system does not have sdl_ttf\n");
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
#ifdef HAVE_IO_POLL
  printf("system has io_poll\n");
#else
  printf("system does not have io_poll\n");
#endif
#ifdef HAVE_PDCGI
  printf("system has pdcgi\n");
#else
  printf("system does not have pdcgi\n");
#endif
#ifdef HAVE_PORTAUDIO
  printf("system has portaudio\n");
#else
  printf("system does not have portaudio\n");
#endif
#ifdef HAVE_FASTCGI
  printf("system has fastcgi\n");
#else
  printf("system does not have fastcgi\n");
#endif

  return 0;
}
