/*
	デスクトップ・マスコット　のサンプル・プログラム　その１

    Win32 SDK/C&MFC Programming Tips(http://www3.freeweb.ne.jp/misc/kmiwaki/developer/tips/index.shtml)の
	  ・非四角形のウィンドウを作るには？(デスクトップにマスコットを表示させるには？)
	  ・ビットマップの形をしたリージョンを作成するには？
	を元にしている。

	これは、上記サンプル、そのままのルーチンで、
	書き方の好みの変更や、リソースの用意とかの変更をしただけ。
	実行すると、丸いウィンドウができる。つかむこと可能。
	右クリックでメニューだして Exit を選んで終了。

	2000-05-20  by tenk*
 */

#include <core/luna_defapi.h>
#include <windows.h>
#include "resource.h"


HINSTANCE   app_hInst;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE dummy_hPrevInst, LPSTR dummy_lpCmdLine, int nCmdShow)
{
	TCHAR       *szWindowClass = "mascot test program";
	MSG         msg;
	WNDCLASSEX  wcex;
	HWND        hWnd;

	/* ウィンドウ クラスの登録 */
	wcex.cbSize        = sizeof(WNDCLASSEX);
	wcex.style         = 0;
	wcex.lpfnWndProc   = (WNDPROC) WndProc;
	wcex.cbClsExtra    = 0;
	wcex.cbWndExtra    = 0;
	wcex.hInstance     = hInst;
	wcex.hIcon         = 0;
	wcex.hCursor       = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(BLACK_BRUSH);
	wcex.lpszMenuName  = NULL;
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm       = NULL;

	RegisterClassEx(&wcex);

	/* メイン ウィンドウの作成 */
	app_hInst = hInst;
	hWnd = CreateWindowEx(
			  WS_EX_TOPMOST | WS_EX_TOOLWINDOW
			, szWindowClass
			, NULL
			, WS_POPUP
			, 100
			, 100
			, 200
			, 200
			, NULL
			, NULL
			, hInst
			, NULL
	);
	if (hWnd == NULL)
		return FALSE;
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	/* メイン メッセージ ループ: */
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}



LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg) {
	case WM_CREATE:
		{
			HRGN        hRgn;
			RECT        rect;

			GetClientRect(hWnd, &rect);
			hRgn = CreateEllipticRgn(0, 0, rect.right, rect.bottom);
			SetWindowRgn(hWnd, hRgn, TRUE);
			SetProp(hWnd, "region", hRgn);
		}
		break;

	case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC         hdc;
			hdc = BeginPaint(hWnd, &ps);
			/* TODO: この位置に描画用のコードを追加してください... */
			EndPaint(hWnd, &ps);
		}
		break;

	case WM_DESTROY:
		{
			if (GetProp(hWnd, "region")) {
				DeleteObject(GetProp(hWnd, "region"));
				RemoveProp(hWnd, "region");
			}
			PostQuitMessage(0);
		}
		break;

	case WM_NCRBUTTONDOWN:
		{
			int         xPos, yPos;
			HMENU       hMenu, hSubMenu;

			xPos = LOWORD(lParam);
			yPos = HIWORD(lParam);

			hMenu = LoadMenu(app_hInst, MAKEINTRESOURCE(IDC_MAINMENU));
			hSubMenu = GetSubMenu(hMenu, 0);

			TrackPopupMenu(hSubMenu, TPM_LEFTALIGN | TPM_TOPALIGN | TPM_RIGHTBUTTON, xPos, yPos, 0, hWnd, NULL);
		}
		break;

	case WM_NCHITTEST:
		/* あたかもタイトルバーにマウスがあるようにWindowsを騙す */
		wParam = DefWindowProc(hWnd, uMsg, wParam, lParam);
		if (wParam == HTCLIENT)
			return HTCAPTION;
		return wParam;

	case WM_COMMAND:
		{
			//int 	wmEvent = HIWORD(wParam);
			int 	wmId    = LOWORD(wParam);
			/* メニュー選択の解析: */
			switch (wmId) {
			case IDM_EXIT:
				DestroyWindow(hWnd);
				break;
			default:
				return DefWindowProc(hWnd, uMsg, wParam, lParam);
			}
		}
		break;

	default:
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
	return 0;
}
