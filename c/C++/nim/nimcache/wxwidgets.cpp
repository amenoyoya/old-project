/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   g++.exe -c -w -fpermissive -O3 -fno-strict-aliasing  -IC:\App\native-toolchain\nim-0.10.2\lib -o c:\users\nigahachi\desktop\projectc++\nim\nimcache\wxwidgets.o c:\users\nigahachi\desktop\projectc++\nim\nimcache\wxwidgets.cpp */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <wx/wx.h>

#include <wx/string.h>
typedef NCSTRING TY90024[256];
#include <wx/wx.h>

void wxStartProgram(int &argc, char **argv){
    wxApp::SetInstance(new wxApp());
    wxEntryStart(argc, argv);
}

void wxMainLoop(){
    wxTheApp->OnRun();
    wxTheApp->OnExit();
    wxEntryCleanup();
}

N_NIMCALL(void, wxstartprogram_90022)(void);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, wxwidgetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, wxwidgetsDatInit)(void);
wxFrame* frame_90082;

N_NIMCALL(void, wxstartprogram_90022)(void) {
	TY90024 cmdLine;
	int cmdCount;
	memset((void*)cmdLine, 0, sizeof(cmdLine));
	cmdCount = 0;
	wxStartProgram(cmdCount, ((void*) (cmdLine)));
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	wxwidgetsDatInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	wxwidgetsInit();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, wxwidgetsInit)(void) {
	wxString LOC1;
	wxstartprogram_90022();
	LOC1 = wxString::FromUTF8("\343\201\223\343\202\214\343\201\214nim\343\201\253\343\202\210\343\202\213wxWidgets\343\201\240\342\235\244");
	frame_90082 = new wxFrame(NIM_NIL, -1, LOC1);
	frame_90082->Show(NIM_TRUE);
	wxMainLoop();
}

NIM_EXTERNC N_NOINLINE(void, wxwidgetsDatInit)(void) {
}

