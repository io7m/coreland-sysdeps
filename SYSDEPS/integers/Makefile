sd_out="../../sysdeps.out"
int16_h="../../_int16.h"
int32_h="../../_int32.h"
int64_h="../../_int64.h"
uint16_h="../../_uint16.h"
uint32_h="../../_uint32.h"
uint64_h="../../_uint64.h"

sysdep: integers
clean: integers_clean

tempi16="_int16.h"
tempi32="_int32.h"
tempi64="_int64.h"
tempu16="_uint16.h"
tempu32="_uint32.h"
tempu64="_uint64.h"
tempsys="sysdep_line.out"

integers:
	./make-integers ${tempi16} ${tempi32} ${tempi64} ${tempu16} \
  ${tempu32} ${tempu64} ${tempsys}
	cp ${tempi16} ${int16_h}
	cp ${tempi32} ${int32_h}
	cp ${tempi64} ${int64_h}
	cp ${tempu16} ${uint16_h}
	cp ${tempu32} ${uint32_h}
	cp ${tempu64} ${uint64_h}
	cat ${tempsys} >> ${sd_out}

integers_clean:
	rm -f ${int16_h} ${int32_h} ${int64_h}
	rm -f int16_make int32_make int64_make
	rm -f ${uint16_h} ${uint32_h} ${uint64_h}
	rm -f uint16_make uint32_make uint64_make
	rm -f ${tempi16} ${tempi32} ${tempi64} ${tempu16} ${tempu32} ${tempu64}
	rm -f ${tempsys}
