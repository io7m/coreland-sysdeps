/*
 * Attempt to check OS type.
 */

#define SD_LOCKER_OS_POSIX 0x0000
#define SD_LOCKER_OS_WIN32 0x0001

/* Win32 */
#ifndef SD_LOCKER_OS_TYPE
#  if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__WIN64__) || defined(__TOS_WIN__)
#    define SD_LOCKER_OS_TYPE SD_LOCKER_OS_WIN32
#  endif
#endif

/* Fallback OS type - POSIX */
#ifndef SD_LOCKER_OS_TYPE
#  define SD_LOCKER_OS_TYPE SD_LOCKER_OS_POSIX
#endif

/* Select implementation based on OS. */
#if SD_LOCKER_OS_TYPE == SD_LOCKER_OS_WIN32
#  include "sd-locker_win32.c"
#else
#  include "sd-locker_posix.c"
#endif
