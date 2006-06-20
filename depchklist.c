#include "ch_flags.h"

int main()
{

#ifdef HAVE_CHFLAGS
  printf("system has ch_flags\n");
  #ifdef CH_FLAGS_HAVE_CHFLAGS
    printf("  type chflags\n");
  #endif
  #ifdef CH_FLAGS_HAVE_EXT2FS_IOCTL
    printf("  type ext2fs_ioctl\n");
  #endif
  #ifndef CH_FLAGS_WORKING
    printf("  non-working ch_flags\n");
  #endif
#else
  printf("system does not have ch_flags\n");
#endif

#ifdef HAVE_LIBPNG
  printf("system has png\n");
#else
  printf("system does not have png\n");
#endif

#ifdef HAVE_SDL
  printf("system has sdl\n");
#else
  printf("system does not have sdl\n");
#endif

#ifdef HAVE_SDL_MIXER
  printf("system has sdl-mixer\n");
#else
  printf("system does not have sdl-mixer\n");
#endif

#ifdef HAVE_SDL_IMAGE
  printf("system has sdl-image\n");
#else
  printf("system does not have sdl-image\n");
#endif

#ifdef HAVE_SDL_TTF
  printf("system has sdl-ttf\n");
#else
  printf("system does not have sdl-ttf\n");
#endif

  return 0;
}
