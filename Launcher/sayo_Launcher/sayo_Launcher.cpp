#include <sayo/win32.h>

using namespace sayo;

struct AppInfo{
	string name, path;
};

vector<AppInfo> g_appList;
string g_appListText = getModuleDir()+"\\apps.txt";

// apps.txt��ǂݍ��݃A�v�����X�g���쐬����
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

// �A�v�����X�g���烁�j���[���쐬����(�I��ID���Ԃ�)
int showAppMenu(HWND hwnd, int x, int y){
	if(g_appList.size() == 0){
		msgbox("�����`���[�ɓo�^����Ă���A�v��������܂���I\n"
			"apps.txt��ҏW���Ă�������", "���郉���`���[");
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

// �A�v����o�^����
void registApp(_rfcSTR appPath){
	File file(g_appListText, "a");
	
	if(file.failed()) file.open(g_appListText, "w");
	fprintf(file, "%s,%s\n", ~File::getStem(appPath), ~appPath);
}

int _WinMain(){
	TWindow win("sayo_LauncherWindow");
	POINT pt;
	int id = 0;
	
	/* ----- �A�v���o�^���[�h ----- */
	if(__argc > 1){
		for(int i=1; i<__argc; ++i) registApp(__argv[i]);
		return msgbox("�A�v����o�^���܂���", "���郉���`���[");
	}
	
	/* ----- �����`���[�N�����[�h ----- */
	GetCursorPos(&pt);
	if(!createAppList()){
		File file(g_appListText, "w");
		return msgbox("apps.txt�ɃA�v����o�^���Ă��������I", "���郉���`���[");
	}
	win.setAlpha(0);
	win.setExStyle(WS_EX_TOOLWINDOW);
	win.open("���郉���`���[");
	if(0 < (id = showAppMenu(win, pt.x, pt.y))){
		string errCode;
		
		if(!shellExec(g_appList[id-1].path, NIL, NIL, NULL, &errCode)){
			msgbox(errCode, "���郉���`���[�E�G���[");
		}
	}
	return 0;
}
