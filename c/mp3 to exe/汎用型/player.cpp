#include "#mplayer.h"

int cMain(){
	slib::DirectShow ds;
	slib::File fp;
	string mp3;
	bool flag=false;
	int size=0,cur=0;
	if(!fp.Open(slib::GetModulePath(),"rb")){
		slib::MsgBox("¸”s");
		return -1;
	}
	size=fp.GetSize();
	mp3.resize(size);
	fp.Read(__ptr(mp3),size);
	slib::ChangeNullString(mp3,size);
	while(1){
		if(mp3.substr(cur,3)=="ID3"){
			if(flag) break;
			else flag=true;
		}
		if(cur>=size){
			cur=0;
			flag=false;
			while(1){
				if(mp3.substr(cur,3)=="ûd\v"){
					if(flag){
						cur--;
						break;
					}
					else flag=true;
				}
				if(cur>=size) break;
				cur++;
			}
		}
		cur++;
	}
	slib::MsgBox(__toString(cur));
	fp.Seek(cur);
	mp3.resize(size-cur-1);
	fp.Read(__ptr(mp3),size-cur-1);
	fp.Open("c:\\mp3.mp3","wb");
	fp.Write(__ptr(mp3),size-cur-1,sizeof(char),true);
	ds.Create();
	ds.Set("c:\\mp3.mp3");
	ds.Play();
	ds.Wait();
	ds.Unset();
	if(!slib::del("c:\\mp3.mp3")) slib::MsgBox("ˆêƒtƒ@ƒCƒ‹íœ‚É¸”s");
	return 0;
}