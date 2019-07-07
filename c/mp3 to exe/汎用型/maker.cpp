#include "#system.h"
#include "#winlib.h"

int cMain(){
	slib::File fp(slib::GetModuleFolder()+"\\player.exe","rb");
	string exe,mp3,arg=argv[1];
	int exe_size=0,mp3_size=0;
	exe_size=fp.GetSize();
	exe.resize(exe_size);
	fp.Read(__ptr(exe),exe_size);
	fp.Open(argv[1],"rb");
	mp3_size=fp.GetSize();
	mp3.resize(mp3_size);
	fp.Read(__ptr(mp3),mp3_size);
	slib::MsgBox(__toString(exe_size)+"\n"+__toString(mp3_size));
	arg=arg.substr(0,arg.size()-3);
	fp.Open(arg+"exe","wb");
	fp.Write(__ptr(exe),exe_size);
	fp.Write(__ptr(mp3),mp3_size);
	return 0;
}