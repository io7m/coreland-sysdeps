#include <stdio.h>

const char *cctype = "UNKNOWN";

int main()
{
#if defined(__TURBOC__)
  cctype = "BORLAND_TURBO_C";
#endif
#if defined(__BORLANDC__)
  cctype = "BORLAND_CXX";
#endif
#if defined(__COMO__)
  cctype = "COMEAU_CXX";
#endif
#if defined(__DECC)
  cctype = "COMPAQ_C";
#endif
#if defined(__DECCXX)
  cctype = "COMPAQ_CXX";
#endif
#if defined(_CRAYC)
  cctype = "CRAY_C";
#endif
#if defined(__DCC__)
  cctype = "DIAB";
#endif
#if defined(__DMC__) || defined(__SC__) || defined(__ZTC__)
  cctype = "DIGITAL_MARS";
#endif
#if defined(__DJGPP__)
  cctype = "DJGPP";
#endif
#if defined(__PATHCC__)
  cctype = "EKOPATH";
#endif
#if defined(__GNUC__)
  cctype = "GCC";
#endif
#if defined(__ghs__)
  cctype = "GREENHILL";
#endif
#if defined(__HP_cc)
  cctype = "HP_C";
#endif
#if defined(__HP_aCC)
  cctype = "HP_ACC";
#endif
#if defined(__xlC__) || defined(__IBMC__) || defined(__IBMCPP__)
  cctype = "IBM_XL";
#endif
#if defined(__IAR_SYSTEMS_ICC__)
  cctype = "IAR";
#endif
#if defined(__INTEL_COMPILER) || defined(__ICC) || defined(__ECC) || defined(__ICL)
  cctype = "INTEL";
#endif
#if defined(__KCC)
  cctype = "KAI";
#endif
#if defined(__CA__) || defined(__KEIL__)
  cctype = "KEIL_CARM";
#endif
#if defined(__C166__)
  cctype = "KEIL_C166";
#endif
#if defined(__C51__) || defined(__CX51__)
  cctype = "KEIL_C51";
#endif
#if defined(__LCC__)
  cctype = "LCC";
#endif
#if defined(__llvm__)
  cctype = "LLVM";
#endif
#if defined(__HIGHC__)
  cctype = "METAWARE";
#endif
#if defined(__MWERKS__)
  cctype = "CODEWARRIOR";
#endif
#if defined(__MINGW32__)
  cctype = "MINGW32";
#endif
#if defined(__sgi) || defined(sgi) || defined(_SGI_COMPILER_VERSION)
  cctype = "MIPSPRO";
#endif
#if defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
  cctype = "MPW";
#endif
#if defined(_MSC_VER)
  cctype = "VISUAL_CXX";
#endif
#if defined(_MRI)
  cctype = "MICROTEC";
#endif
#if defined(__CC_NORCROFT)
  cctype = "NORCROFT";
#endif
#if defined(__PACIFIC__)
  cctype = "PACIFIC";
#endif
#if defined(_PACC_VER)
  cctype = "PALM";
#endif
#if defined(__POCC__)
  cctype = "PELLES";
#endif
#if defined(__PGI)
  cctype = "PORTLAND";
#endif
#if defined(__CC_ARM)
  cctype = "REALVIEW";
#endif
#if defined(SASC) || defined(__SASC) || defined(__SASC__)
  cctype = "SAS";
#endif
#if defined(_SCO_DS)
  cctype = "SCO";
#endif
#if defined(SDCC)
  cctype = "SMALLDEV";
#endif
#if defined(__SUNPRO_C)
  cctype = "SUN_C";
#endif
#if defined(__SUNPRO_CC)
  cctype = "SUN_CXX";
#endif
#if defined(__SYSC__)
  cctype = "SYSTEMS";
#endif
#if defined(__TenDRA__)
  cctype = "TENDRA";
#endif
#if defined(__TINYC__)
  cctype = "TINYC";
#endif
#if defined(_UCC)
  cctype = "ULTIMATE";
#endif
#if defined(__USLC__)
  cctype = "USL_C";
#endif
#if defined(__WATCOMC__)
  cctype = "WATCOM";
#endif

  printf("SYSDEP_CCTYPE_%s\n", cctype);
  return 0;
}
