#include <sayo/win32.h>

using namespace sayo;

// タスクトレイにしまった時に表示するアイコン
Icon icon(getModuleDir()+"\\krkr.ico");
// ターゲットフォルダ
string targetdir;

/* iniファイル読み書き */
inline int getIntSetting(_rfcSTR key){
	return getIniInt("吉里吉里ランチャー", key, 50, getModuleDir()+"\\kurukuru.ini");
}

inline bool setIntSetting(_rfcSTR key, int val){
	return setIniInt("吉里吉里ランチャー", key, val, getModuleDir()+"\\kurukuru.ini");
}

inline string getStrSetting(_rfcSTR key){
	return getIniStr("吉里吉里ランチャー", key, "", getModuleDir()+"\\kurukuru.ini");
}

// タスクトレイにしまう
void hideWindow(HWND hwnd){
	ShowWindow(hwnd, SW_HIDE);
	addTaskIcon(100, hwnd, WM_APP+1, icon);
}

// メインウィンドウを表示する
void showWindow(HWND hwnd){
	ShowWindow(hwnd, SW_SHOW);
	deleteTaskIcon(100, hwnd);
}

// 登録されたターゲットフォルダを吉里吉里で実行
void runKirikiri(){
	static Process proc;
	
	if(targetdir == ""){
		msgbox("ターゲットフォルダが登録されていません", "吉里吉里ランチャーエラー");
		return;
	}
	if(!isDir(targetdir)){
		msgbox(targetdir+"\nがフォルダではありません", "吉里吉里ランチャーエラー");
		return;
	}
	
	// 吉里吉里が起動中ならKillする
	if((HANDLE)proc != NULL) proc.kill();
	// iniファイルから吉里吉里のPATHを読み込んで起動
	if(!proc.exec("\""+getStrSetting("吉里吉里PATH")+"\" \""+targetdir+"\"")){
		msgbox("吉里吉里が起動出来ませんでした\n"
			"kurukuru.iniの吉里吉里PATHを確認してください", "吉里吉里ランチャーエラー");
	}
}

// ウィンドウプロシージャ
_WndProc(wndproc){
	_Event(CLOSE){
		hideWindow(hwnd);
		return 0;
	}
	_Event(COMMAND){
		switch(LOWORD(wp)){
		case 10:
			showWindow(hwnd);
			PostQuitMessage(0); break;
		case 50:
			runKirikiri(); break;
		}
	}
	_Event(APP+1){
		// タスクトレイアイコンをクリックしたらメニュー表示
		if(lp == WM_LBUTTONDOWN || lp == WM_RBUTTONDOWN){
			Menu menu(Menu::Popup);
			POINT pt;
			
			GetCursorPos(&pt);
			menu.append(0, 10, "メインウィンドウ表示(&W)");
			menu.append(1, 20, "吉里吉里実行(&R)");
			menu.append(2, 30, "終了(&F)");
			SetForegroundWindow(hwnd);
			switch(menu.show(hwnd, pt.x, pt.y)){
			case 10:
				showWindow(hwnd); break;
			case 20:
				runKirikiri(); break;
			case 30:
				showWindow(hwnd);
				PostQuitMessage(0); break;
			}
		}
	}
	_Event(DROPFILES){
		// D&Dでターゲットフォルダを登録する
		vector<string> files;
		
		getDropFiles(files, wp);
		targetdir = files[0];
	}
	_Event(DESTROY){
		// 終了時にウィンドウの位置を記憶しておく
		RECT rc;
		
		GetWindowRect(hwnd, &rc);
		setIntSetting("X", rc.left);
		setIntSetting("Y", rc.top);
	}
	return _CallProc(baseWinProc);
}

// メイン関数
int _WinMain(){
	Window win("kurukuruWindow");
	DirectInput di;
	Menu menu;
	Layer layer;
	/* ↓Bitmapボタン用変数↓ */
	Bitmap bmp(getModuleDir()+"\\krkr.bmp");
	GButton button;
	
	if(icon.failed()) return msgbox("krkr.icoが見つかりません", "吉里吉里ランチャーエラー");
	if(bmp.failed()) return msgbox("krkr.bmpが見つかりません", "吉里吉里ランチャーエラー");
	// DirectInputをバックグラウンドで監視させることで
	// このアプリケーションが非アクティブでもボタン1発で吉里吉里が起動できるようにする
	if(!di.open(NULL)) return msgbox("DirectInputの生成に失敗しました", "吉里吉里ランチャーエラー");
	
	win.setIcon("MainIcon");
	win.setStyle(WS_GAMEWINDOW);
	win.setExStyle(WS_EX_ACCEPTFILES);
	win.setProc(wndproc);
	win.open("吉里吉里ランチャー",
		getIntSetting("X"), getIntSetting("Y"), 320, 240);
	
	// レイヤーを作ってフォントサイズを20にする
	layer.open(win.gdi(), 320, 240);
	layer.setFont(20);
	
	// Bitmapボタンの画像、ターゲットウィンドウ、IDを指定
	button.setData(&bmp, &bmp, win, 50);
	
	// メニューバーセット
	menu.append(0, 10, "終了(&F)");
	menu.append(2, 50, "吉里吉里実行(&R)");
	menu.set(win);
	
	// イベントループ
	while(win.proc() && di.get() && layer.flip()){
		if(di.key(DIK_LCONTROL) || di.key(DIK_RCONTROL)){
			if(di.key(DIK_LSHIFT) || di.key(DIK_RSHIFT)){
				if(di.key(DIK_R) == 1){
					// Ctrl+Shift+Rで吉里吉里起動
					runKirikiri();
				}
			}
		}
		
		// メインウィンドウに各種メッセージを表示しておく
		layer.clear(0, 0, -1, -1, RGB(255,255,255));
		layer.setTextColor(RGB(250,0,0));
		layer.drawText(5, 5, 310, 40, "ターゲットフォルダを\n"
			"ここにドロップして登録してください。");
		layer.setTextColor(RGB(0,150,0));
		layer.drawText(5, 55, 230, 60, "右の魚ボタンを押すと吉里吉里で\n"
			"登録されたフォルダを実行します。\n"
			"Ctrl+Shift+Rでも常時実行可能です！");
		button.draw(layer, 240, 50, 64, 64);
		layer.setTextColor(RGB(0,0,250));
		layer.textOut(5, 125, "<現在ターゲットフォルダ>");
		layer.setTextColor(RGB(0,0,0));
		layer.drawText(5, 145, 310, 80, targetdir == ""? "なし": targetdir);
	}
	return 0;
}
