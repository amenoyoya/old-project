#include <sayo/win32.h>

using namespace sayo;

// �^�X�N�g���C�ɂ��܂������ɕ\������A�C�R��
Icon icon(getModuleDir()+"\\krkr.ico");
// �^�[�Q�b�g�t�H���_
string targetdir;

/* ini�t�@�C���ǂݏ��� */
inline int getIntSetting(_rfcSTR key){
	return getIniInt("�g���g�������`���[", key, 50, getModuleDir()+"\\kurukuru.ini");
}

inline bool setIntSetting(_rfcSTR key, int val){
	return setIniInt("�g���g�������`���[", key, val, getModuleDir()+"\\kurukuru.ini");
}

inline string getStrSetting(_rfcSTR key){
	return getIniStr("�g���g�������`���[", key, "", getModuleDir()+"\\kurukuru.ini");
}

// �^�X�N�g���C�ɂ��܂�
void hideWindow(HWND hwnd){
	ShowWindow(hwnd, SW_HIDE);
	addTaskIcon(100, hwnd, WM_APP+1, icon);
}

// ���C���E�B���h�E��\������
void showWindow(HWND hwnd){
	ShowWindow(hwnd, SW_SHOW);
	deleteTaskIcon(100, hwnd);
}

// �o�^���ꂽ�^�[�Q�b�g�t�H���_���g���g���Ŏ��s
void runKirikiri(){
	static Process proc;
	
	if(targetdir == ""){
		msgbox("�^�[�Q�b�g�t�H���_���o�^����Ă��܂���", "�g���g�������`���[�G���[");
		return;
	}
	if(!isDir(targetdir)){
		msgbox(targetdir+"\n���t�H���_�ł͂���܂���", "�g���g�������`���[�G���[");
		return;
	}
	
	// �g���g�����N�����Ȃ�Kill����
	if((HANDLE)proc != NULL) proc.kill();
	// ini�t�@�C������g���g����PATH��ǂݍ���ŋN��
	if(!proc.exec("\""+getStrSetting("�g���g��PATH")+"\" \""+targetdir+"\"")){
		msgbox("�g���g�����N���o���܂���ł���\n"
			"kurukuru.ini�̋g���g��PATH���m�F���Ă�������", "�g���g�������`���[�G���[");
	}
}

// �E�B���h�E�v���V�[�W��
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
		// �^�X�N�g���C�A�C�R�����N���b�N�����烁�j���[�\��
		if(lp == WM_LBUTTONDOWN || lp == WM_RBUTTONDOWN){
			Menu menu(Menu::Popup);
			POINT pt;
			
			GetCursorPos(&pt);
			menu.append(0, 10, "���C���E�B���h�E�\��(&W)");
			menu.append(1, 20, "�g���g�����s(&R)");
			menu.append(2, 30, "�I��(&F)");
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
		// D&D�Ń^�[�Q�b�g�t�H���_��o�^����
		vector<string> files;
		
		getDropFiles(files, wp);
		targetdir = files[0];
	}
	_Event(DESTROY){
		// �I�����ɃE�B���h�E�̈ʒu���L�����Ă���
		RECT rc;
		
		GetWindowRect(hwnd, &rc);
		setIntSetting("X", rc.left);
		setIntSetting("Y", rc.top);
	}
	return _CallProc(baseWinProc);
}

// ���C���֐�
int _WinMain(){
	Window win("kurukuruWindow");
	DirectInput di;
	Menu menu;
	Layer layer;
	/* ��Bitmap�{�^���p�ϐ��� */
	Bitmap bmp(getModuleDir()+"\\krkr.bmp");
	GButton button;
	
	if(icon.failed()) return msgbox("krkr.ico��������܂���", "�g���g�������`���[�G���[");
	if(bmp.failed()) return msgbox("krkr.bmp��������܂���", "�g���g�������`���[�G���[");
	// DirectInput���o�b�N�O���E���h�ŊĎ������邱�Ƃ�
	// ���̃A�v���P�[�V��������A�N�e�B�u�ł��{�^��1���ŋg���g�����N���ł���悤�ɂ���
	if(!di.open(NULL)) return msgbox("DirectInput�̐����Ɏ��s���܂���", "�g���g�������`���[�G���[");
	
	win.setIcon("MainIcon");
	win.setStyle(WS_GAMEWINDOW);
	win.setExStyle(WS_EX_ACCEPTFILES);
	win.setProc(wndproc);
	win.open("�g���g�������`���[",
		getIntSetting("X"), getIntSetting("Y"), 320, 240);
	
	// ���C���[������ăt�H���g�T�C�Y��20�ɂ���
	layer.open(win.gdi(), 320, 240);
	layer.setFont(20);
	
	// Bitmap�{�^���̉摜�A�^�[�Q�b�g�E�B���h�E�AID���w��
	button.setData(&bmp, &bmp, win, 50);
	
	// ���j���[�o�[�Z�b�g
	menu.append(0, 10, "�I��(&F)");
	menu.append(2, 50, "�g���g�����s(&R)");
	menu.set(win);
	
	// �C�x���g���[�v
	while(win.proc() && di.get() && layer.flip()){
		if(di.key(DIK_LCONTROL) || di.key(DIK_RCONTROL)){
			if(di.key(DIK_LSHIFT) || di.key(DIK_RSHIFT)){
				if(di.key(DIK_R) == 1){
					// Ctrl+Shift+R�ŋg���g���N��
					runKirikiri();
				}
			}
		}
		
		// ���C���E�B���h�E�Ɋe�탁�b�Z�[�W��\�����Ă���
		layer.clear(0, 0, -1, -1, RGB(255,255,255));
		layer.setTextColor(RGB(250,0,0));
		layer.drawText(5, 5, 310, 40, "�^�[�Q�b�g�t�H���_��\n"
			"�����Ƀh���b�v���ēo�^���Ă��������B");
		layer.setTextColor(RGB(0,150,0));
		layer.drawText(5, 55, 230, 60, "�E�̋��{�^���������Ƌg���g����\n"
			"�o�^���ꂽ�t�H���_�����s���܂��B\n"
			"Ctrl+Shift+R�ł��펞���s�\�ł��I");
		button.draw(layer, 240, 50, 64, 64);
		layer.setTextColor(RGB(0,0,250));
		layer.textOut(5, 125, "<���݃^�[�Q�b�g�t�H���_>");
		layer.setTextColor(RGB(0,0,0));
		layer.drawText(5, 145, 310, 80, targetdir == ""? "�Ȃ�": targetdir);
	}
	return 0;
}
