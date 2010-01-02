#ifndef UINT32_H
#define UINT32_H

#if SIZEOF_LONG == 4
	typedef unsigned long uint32;
#else
	typedef unsigned int uint32;
#endif

extern void uint32_pack(char *,uint32);
extern void uint32_pack_big(char *,uint32);
extern void uint32_unpack(char *,uint32 *);
extern void uint32_unpack_big(char *,uint32 *);

#endif
