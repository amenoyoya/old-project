#define __WindowMode__
#define __UseCommCtrl__
#include "#windowsx.h"
#include "#controlsx.h"
#include "#com.h"

__beginWndEventMap(Map)
static slib::TrackBar playBar;
static slib::Button play,stop,pause;
static slib::MediaPlayer player;
static bool second=false;
__event(CREATE){
	slib::Menu<MENUBAR> menu;
	menu.Add(590,"Open");
	menu.Set(hWnd);
	playBar.Create(0,hWnd,10,420,620,20);
	play.Create(4416,"Play",hWnd,10,450,100,20);
	stop.Create(99,"Stop",hWnd,120,450,100,20);
	pause.Create(123,"Pause",hWnd,230,450,100,20);
	slib::CreateTimer(hWnd,100);
}
__event(TIMER){
	player.Update();
	if(player.IsPlaying()){
		playBar.SetPos(player.GetPos());
	}
	if(player.IsEnd()){
		if(!second){
			second=true;
			slib::MsgBox("end");
		}
	}
}
__event(HSCROLL){
	if(__isScroll(playBar)){
		player.SetPos(playBar.GetPos());
	}
}
__event(DROPFILES){
	string tape=slib::GetDropFiles(DROP_ID,1);
	int hr=player.Set(tape,hWnd,10,10,620,410);
	playBar.SetParams(0,player.GetVideoLength(),0,10);
	second=false;
}
__event(COMMAND){
	if(COMMAND_ID==4416) player.Play();
	if(COMMAND_ID==99) player.Stop();
	if(COMMAND_ID==123) player.Pause();
	if(COMMAND_ID==590){
		string tape=slib::GetOpenFile("Video選択",hWnd,"動画ファイル\v"
			"*.avi;*.flv;*.wmv;*.rmvb;*.mpg");
		int hr=player.Set(tape,hWnd,10,10,620,410);
		playBar.SetParams(0,player.GetVideoLength(),0,10);
		second=false;
	}
}
__event(SIZE){
	RECT rc;
	GetClientRect(hWnd,&rc);
	player.SetVideoPos(10,10,rc.right-20,rc.bottom-70);
	MoveWindow(playBar,10,rc.bottom-60,rc.right-20,20,true);
	MoveWindow(play,10,rc.bottom-30,100,20,true);
	MoveWindow(stop,120,rc.bottom-30,100,20,true);
	MoveWindow(pause,230,rc.bottom-30,100,20,true);
}
__endWndEventMap(slib::DefWndMap)

inline int __appMain(){
	slib::Window win;
	win.exStyle=WS_EX_ACCEPTFILES;
	win.Create(Map);
	return slib::MsgLoop();
}