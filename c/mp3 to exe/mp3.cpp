#include "#mplayer.h"

int cMain(){
	slib::DirectShow ds;
	slib::File fp;
	string mp3;
	if(!fp.Open(slib::GetModuleFolder()+"\\MP3 Player.exe","rb")){
		slib::MsgBox("Ž¸”s");
		return -1;
	}
	//fp.Seek(104961); 680822
	slib::MsgBox(__toString(fp.GetSize()));
	fp.Seek(6702756,SEEK_END);
	slib::MsgBox(__toString(fp.Tell()));
	mp3.resize(6702756);
	fp.Read(__ptr(mp3),6702756);
	fp.Open("c:\\GodKnows....mp3","wb");
	fp.Write(__ptr(mp3),6702756,sizeof(char),true);
	ds.Create();
	ds.Set("c:\\GodKnows....mp3");
	ds.Play();
	ds.Wait();
	slib::del("c:\\GodKnows....mp3");
	return 0;
}