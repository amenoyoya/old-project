/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -O3 -fno-strict-aliasing  -IC:\App\native-toolchain\nim-0.10.2\lib -o c:\users\nigahachi\desktop\projectc\nim\nimcache\winlean.o c:\users\nigahachi\desktop\projectc\nim\nimcache\winlean.c */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tguid104414 tguid104414;
typedef NI8 TY104427[8];
struct  tguid104414  {
NI32 D1;
NI16 D2;
NI16 D3;
TY104427 D4;
};
typedef NI8 TY104508[8];
NIM_CONST TY104508 TMP15 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST TY104508 TMP16 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
tguid104414 wsaidconnectex_104510;
tguid104414 wsaidacceptex_104514;
tguid104414 wsaidgetacceptexsockaddrs_104518;
NIM_EXTERNC N_NOINLINE(void, HEX00_winleanInit)(void) {
	tguid104414 LOC1;
	tguid104414 LOC2;
	tguid104414 LOC3;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.D1 = ((NI32) 631375801);
	LOC1.D2 = ((NI16) -8717);
	LOC1.D3 = ((NI16) 18016);
	memcpy((void*)LOC1.D4, (NIM_CONST void*)TMP15, sizeof(LOC1.D4));
	wsaidconnectex_104510 = LOC1;
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	LOC2.D1 = ((NI32) -1254720015);
	LOC2.D2 = ((NI16) -13396);
	LOC2.D3 = ((NI16) 4559);
	memcpy((void*)LOC2.D4, (NIM_CONST void*)TMP16, sizeof(LOC2.D4));
	wsaidacceptex_104514 = LOC2;
	memset((void*)(&LOC3), 0, sizeof(LOC3));
	LOC3.D1 = ((NI32) -1254720014);
	LOC3.D2 = ((NI16) -13396);
	LOC3.D3 = ((NI16) 4559);
	memcpy((void*)LOC3.D4, (NIM_CONST void*)TMP16, sizeof(LOC3.D4));
	wsaidgetacceptexsockaddrs_104518 = LOC3;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_winleanDatInit)(void) {
}
