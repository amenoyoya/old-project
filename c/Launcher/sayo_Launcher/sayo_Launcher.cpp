#include <sayo/win32.h>

using namespace sayo;

struct AppInfo{
	string name, path;
};

vector<AppInfo> g_appList;
string g_appListText = getModuleDir()+"\\apps.txt";

// apps.txtを読み込みアプリリストを作成する
bool createAppList(){
	File file(g_appListText);
	
	if(file.failed()) return false;
	if(!g_appList.empty()) g_appList.clear();
	
	while(!file.eof()){
		string str = file.gets();
		if(str != ""){
			Tokenizer tok(str, ",");
			AppInfo info = {tok.get(), tok.get()};
			
			g_appList.push_back(info);
		}
	}
	return true;
}

// アプリリストからメニューを作成する(選択IDが返る)
int showAppMenu(HWND hwnd, int x, int y){
	if(g_appList.size() == 0){
		msgbox("ランチャーに登録されているアプリがありません！\n"
			"apps.txtを編集してください", "小夜ランチャー");
		return 0;
	}
	
	int ret = 0;
	Menu menu(Menu::Popup);
	Bitmap *bmpList = new Bitmap[g_appList.size()];
	
	for(uint_t i=0; i<g_appList.size(); ++i){
		Icon ico;
		
		ico.get(g_appList[i].path);
		bmpList[i].openFromIcon(ico);
		menu.append(i, i+1, g_appList[i].name);
		menu.setBMP(i+1, bmpList[i]);
	}
	ret = menu.show(hwnd, x, y);
	delete [] bmpList;
	
	return ret;
}

// アプリを登録する
void registApp(_rfcSTR appPath){
	File file(g_appListText, "a");
	
	if(file.failed()) file.open(g_appListText, "w");
	fprintf(file, "%s,%s\n", ~File::getStem(appPath), ~appPath);
}

int _WinMain(){
	TWindow win("sayo_LauncherWindow");
	POINT pt;
	int id = 0;
	
	/* ----- アプリ登録モード ----- */
	if(__argc > 1){
		for(int i=1; i<__argc; ++i) registApp(__argv[i]);
		return msgbox("アプリを登録しました", "小夜ランチャー");
	}
	
	/* ----- ランチャー起動モード ----- */
	GetCursorPos(&pt);
	if(!createAppList()){
		File file(g_appListText, "w");
		return msgbox("apps.txtにアプリを登録してください！", "小夜ランチャー");
	}
	win.setAlpha(0);
	win.setExStyle(WS_EX_TOOLWINDOW);
	win.open("小夜ランチャー");
	if(0 < (id = showAppMenu(win, pt.x, pt.y))){
		string errCode;
		
		if(!shellExec(g_appList[id-1].path, NIL, NIL, NULL, &errCode)){
			msgbox(errCode, "小夜ランチャー・エラー");
		}
	}
	return 0;
}
