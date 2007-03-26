#ifndef FLOATCAST_H
#define FLOATCAST_H

#include "sd_math.h"

#define _ISOC9X_SOURCE  1
#define _ISOC99_SOURCE  1
#define __USE_ISOC9X  1
#define __USE_ISOC99  1
#include  <math.h>

#if defined(HAVE_LRINT)
  #define doublecast(n) lrint((n))
#else
  #define doublecast(n) ((long)(n))
#endif

#if defined(HAVE_LRINTF)
  #define floatcast(n) lrintf((n))
#else
  #define floatcast(n) ((long)(n))
#endif

#if defined(HAVE_LLRINT)
  #define lldoublecast(n) llrint((n))
#else
  #define lldoublecast(n) ((long long)(n))
#endif

#if defined(HAVE_LLRINTF)
  #define llfloatcast(n) llrintf((n))
#else
  #define llfloatcast(n) ((long long)(n))
#endif

#endif
