#include <stdio.h>

const char *os = "UNKNOWN";

int main()
{
#if defined(_AIX) || defined(__TOS_AIX__)
  os = "AIX";
#endif
#if defined(AMIGA) || defined(__amigaos__)
  os = "AMIGAOS";
#endif
#if defined(__BEOS__)
  os = "BEOS";
#endif
#if defined(__bsdi__)
  os = "BSD_OS";
#endif
#if defined(_UNICOS)
  os = "CRAY_UNICOS";
#endif
#if defined(__APPLE__) || defined(__MACH__)
  os = "DARWIN";
#endif
#if defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
  os = "DG_UX";
#endif
#if defined(__DragonFly__)
  os = "DRAGONFLY";
#endif
#if defined(_SEQUENT_) || defined(sequent)
  os = "DYNIX_PTX";
#endif
#if defined(__FreeBSD__)
  os = "FREEBSD";
#endif
#if defined(__GNU__)
  os = "GNU_HURD";
#endif
#if defined(__hiuxmpp)
  os = "HI_UX_MPP";
#endif
#if defined(_hpux) || defined(hpux) || defined(__hpux)
  os = "HPUX";
#endif
#if defined(sgi) || defined(__sgi)
  os = "IRIX";
#endif
#if defined(linux) || defined(__linux)
  os = "LINUX";
#endif
#if defined(__Lynx__)
  os = "LYNXOS";
#endif
#if defined(macintosh) || defined(Macintosh)
  os = "MACOS";
#endif
#if defined(__OS9000) || defined(_OSK)
  os = "MICROWARE_OS_9";
#endif
#if defined(__minix)
  os = "MINIX";
#endif
#if defined(mpeix) || defined(__mpexl)
  os = "MPE_IX";
#endif
#if defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(__DOS__)
  os = "MSDOS";
#endif
#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__)
  os = "MS_WINDOWS";
#endif
#if defined(__NetBSD__)
  os = "NETBSD";
#endif
#if defined(__OpenBSD__)
  os = "OPENBSD";
#endif
#if defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
  os = "OS2";
#endif
#if defined(pyr)
  os = "PYRAMID_DC_OS";
#endif
#if defined(__QNX__) || defined(__QNXNTO__)
  os = "QNX";
#endif
#if defined(sinux)
  os = "RELIANT_UNIX";
#endif
#if defined(M_I386) || defined(M_XENIX) || defined(_SCO_DS)
  os = "SCO_OPENSERVER";
#endif
#if defined(sun) || defined(__sun)
  os = "SUNOS";
#endif
#if defined(__SYMBIAN32__)
  os = "SYMBIANOS";
#endif
#if defined(__osf__)
  os = "TRU64_OSF_1";
#endif
#if defined(ultrix) || defined(__ultrix) || defined(__ultrix__)
  os = "ULTRIX";
#endif
#if defined(sco) || defined(_UNIXWARE7)
  os = "UNIXWARE";
#endif
#if defined(VMS) || defined(__VMS) || defined(__VMS_VER)
  os = "VMS";
#endif
#if defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
  os = "Z_OS_OS390";
#endif
  printf("SYSDEP_OS_%s\n", os);
  return 0;
}
