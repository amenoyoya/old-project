/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -O3 -fno-strict-aliasing  -IC:\App\native-toolchain\nim-0.10.2\lib -o c:\users\nigahachi\desktop\projectc\nim\nimcache\os.o c:\users\nigahachi\desktop\projectc\nim\nimcache\os.c */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdlib.h>
typedef struct TY119608 TY119608;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY119608 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
NIM_BOOL envcomputed_119607;
TY119608* environment_119609;
TY119608* ownargv_124009;

N_NIMCALL(NI, nosexecShellCmd)(NimStringDesc* command) {
	NI result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = system(command->data);
	result = ((NI) (LOC1));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_osInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_osDatInit)(void) {
}
