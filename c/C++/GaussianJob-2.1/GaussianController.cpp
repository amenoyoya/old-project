#include <sltk2/core.h>
#include <sltk2/main.h>
#include <Shlobj.h>

using namespace Sltk;

static BOOL CALLBACK enumChildProc(HWND hwnd, LPARAM lp){
	wchar_t name[256];
	HWND *target = (HWND*)lp;
	
	GetClassName(hwnd, name, 256);
	int id = GetDlgCtrlID(hwnd);
	if(wcscmp(name, L"Button") == 0 && id == 18000) target[0] = hwnd;
	if(wcscmp(name, L"Edit") == 0 && id == 10025) target[1] = hwnd;
	if(target[0] && target[1]) return FALSE;
	return TRUE;
}

static BOOL CALLBACK findProcessWindowHandleProc(HWND hwnd, LPARAM lp){
	HWND *hProcessWnd = (HWND*)lp;
	
	if(GetParent(hwnd)==nullptr){
		*hProcessWnd = hwnd;
		return FALSE;
	}
	return TRUE;
}

static HWND getConsoleHandle(u32 procID){
	wchar_t oldTitle[512];
	wstring newTitle = Encoding::utf8ToUnicode("sltk.win32." + toString(procID));
	HWND ret = nullptr;
	
	GetConsoleTitle(oldTitle, 512);
	SetConsoleTitle(newTitle.c_str());
	Sleep(50);	// アップデートを確実なものに
	ret = FindWindow(nullptr, newTitle.c_str());
	SetConsoleTitle(oldTitle);
	return ret;
}


extern "C" {
	/* プロセスを起動し、HANDLE、HWND、IDを得る */
	u32 openProcess(const wchar_t *path, u32 *hwnd_dest, u32 *id_dest){
		PROCESS_INFORMATION pi;
		STARTUPINFO si;
		
		ZeroMemory(&si,sizeof(si));
		si.cb = sizeof(si);
		si.dwFlags = STARTF_USESHOWWINDOW;
		si.wShowWindow = SW_SHOW;
		if(FALSE == CreateProcess(nullptr, (LPWSTR)path, nullptr, nullptr, FALSE,
			NORMAL_PRIORITY_CLASS, nullptr, nullptr, &si, &pi)) return 0;
		
		if(hwnd_dest){
			while(*hwnd_dest == 0){
				// ウィンドウハンドルを得る
				if(WaitForInputIdle(pi.hProcess,INFINITE) == 0){
					EnumThreadWindows(pi.dwThreadId,
						findProcessWindowHandleProc, (LPARAM)hwnd_dest);
				}
				// ウィンドウハンドルを取得できなかった場合(コンソールアプリなど)
				if(!(*hwnd_dest)){
					(*hwnd_dest) = (u32)getConsoleHandle(pi.dwProcessId);
				}
				Sleep(1);
			}
		}
		if(id_dest) (*id_dest) = pi.dwProcessId;
		CloseHandle(pi.hThread);
		return (u32)pi.hProcess;
	}
	
	/* openProcessのハンドルをクローズする */
	void closeProcess(u32 handle){
		if(handle) CloseHandle((HANDLE)handle);
	}
	
	/* プロセスを閉じる */
	bool killProcess(u32 handle){
		return handle? FALSE != TerminateProcess((HANDLE)handle, 0): false;
	}
	
	/* プロセスが存在しているか */
	bool isProcessAlive(u32 handle){
		if(handle){
			DWORD code = 0;
			GetExitCodeProcess((HANDLE)handle, &code);
			return code == STILL_ACTIVE;
		}
		return false;
	}
	
	/* GaussianのSTARTボタンとSTATUSウィンドウを取得 */
	void getGaussianControl(u32 hwnd, u32 *btn, u32 *status){
		if(hwnd){
			HWND child[2] = {nullptr, nullptr};
			EnumChildWindows((HWND)hwnd, enumChildProc, (LPARAM)child);
			*btn = (u32)child[0], *status = (u32)child[1];
		}
	}
	
	/* Gaussianにファイルをドロップする */
	bool dropToGaussian(u32 hwnd, const wchar_t *filename){
		HGLOBAL hGlobal = nullptr;
		string file = Encoding::utf8ToSjis(Encoding::toUtf8(filename));
		if(nullptr == (hGlobal = GlobalAlloc(GHND, sizeof(DROPFILES) + file.size() + 2))) return false;
		
		DROPFILES * df = static_cast<DROPFILES *>(GlobalLock(hGlobal));
		df->pFiles = sizeof(DROPFILES);
		strcpy(reinterpret_cast<char*>(df + 1), file.c_str());
		GlobalUnlock(hGlobal);
		if(!PostMessage((HWND)hwnd, WM_DROPFILES, (WPARAM)hGlobal, 0)){
			GlobalFree(hGlobal);
			return false;
		}
		return true;
	}
	
	/* Gaussianのジョブスタートさせる */
	void startGaussian(u32 button){
		if(button) SendMessage((HWND)button, BM_CLICK, 0, 0);
	}
	
	/* Gaussianが初期状態か */
	bool isGaussianInitialized(u32 status){
		if(status){
			wchar_t text[32];
			SendMessage((HWND)status, WM_GETTEXT, (WPARAM)32, (LPARAM)text);
			return wcscmp(text, L"") == 0;
		}
		return false;
	}
	
	/* Gaussianの実行が完了しているか */
	bool isGaussianCompleted(u32 status){
		if(status){
			wchar_t text[32];
			SendMessage((HWND)status, WM_GETTEXT, (WPARAM)32, (LPARAM)text);
			return wcscmp(text, L"Processing Complete.") == 0;
		}
		return false;
	}
	
	/* Gaussianステータスを初期化 */
	void initializeGaussian(u32 status){
		if(status) SendMessage((HWND)status, WM_SETTEXT, 0, (LPARAM)L"");
	}
}

#pragma comment(linker, "/export:openProcess=_openProcess")
#pragma comment(linker, "/export:closeProcess=_closeProcess")
#pragma comment(linker, "/export:killProcess=_killProcess")
#pragma comment(linker, "/export:isProcessAlive=_isProcessAlive")
#pragma comment(linker, "/export:getGaussianControl=_getGaussianControl")
#pragma comment(linker, "/export:dropToGaussian=_dropToGaussian")
#pragma comment(linker, "/export:startGaussian=_startGaussian")
#pragma comment(linker, "/export:isGaussianInitialized=_isGaussianInitialized")
#pragma comment(linker, "/export:isGaussianCompleted=_isGaussianCompleted")
#pragma comment(linker, "/export:initializeGaussian=_initializeGaussian")
