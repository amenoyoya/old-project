/*
	デスクトップ・マスコット　のサンプル・プログラム　その２

    Win32 SDK/C&MFC Programming Tips(http://www3.freeweb.ne.jp/misc/kmiwaki/developer/tips/index.shtml)の
	  ・非四角形のウィンドウを作るには？(デスクトップにマスコットを表示させるには？)
	  ・ビットマップの形をしたリージョンを作成するには？(CreateRgnFromBmp)
	を元にしている。

	これは、上記サンプル２つを、適当に繋げただけのルーチン。
	実行すると、bmp一枚絵の形のウィンドウが表示される。つかむこと可能。
	右クリックでメニューだして Exit を選んで終了。


	bmp素材提供は, pukaku.

	2000-05-20  by tenk*
 */

#include <windows.h>
#include "resource.h"

static HINSTANCE    app_hInst;
static HBITMAP		hBitmap;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
HRGN    CreateRgnFromBmp(HBITMAP hBitmap, COLORREF cTransparentColor);


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
	wcex.hbrBackground = (HBRUSH)(NULL_BRUSH);	// (COLOR_WINDOW + 1);
	wcex.lpszMenuName  = NULL;
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm       = NULL;
	RegisterClassEx(&wcex);

	/* グローバル変数にインスタンス ハンドルの保存 */
	app_hInst = hInst;

	/* メイン ウィンドウの作成 */
	hWnd = CreateWindowEx(
		  WS_EX_TOPMOST | WS_EX_TOOLWINDOW
		, szWindowClass
		, NULL
		, WS_POPUP
		, CW_USEDEFAULT
		, CW_USEDEFAULT
		, 80
		, 80
		, NULL
		, NULL
		, hInst
		, NULL
	);
	if (hWnd == 0)
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

			hBitmap = LoadBitmap(app_hInst, MAKEINTRESOURCE(IDB_IMAGE_00));
			//GetObject(hBitmap, sizeof(BITMAP), &bm);
			GetClientRect(hWnd, &rect);
			//hRgn = CreateEllipticRgn(0, 0, rect.right, rect.bottom);
			hRgn = CreateRgnFromBmp(hBitmap, (UINT)-1);
			SetWindowRgn(hWnd, hRgn, TRUE);
			SetProp(hWnd, "region", hRgn);
		}
		break;

	case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC         hdc;
			HDC         hBmpDc;
			hdc = BeginPaint(hWnd, &ps);
			{	/* この位置に描画用のコードを追加 */
				hBmpDc = CreateCompatibleDC(hdc);
				SelectObject(hBmpDc, hBitmap);
				BitBlt(hdc, 0,0,80,80, hBmpDc, 0,0, SRCCOPY);
				DeleteDC(hBmpDc);
			}
			EndPaint(hWnd, &ps);
		}
		break;

	case WM_DESTROY:
		if (hBitmap) {
			DeleteObject(hBitmap);
		}
		if (GetProp(hWnd, "region")) {
			DeleteObject(GetProp(hWnd, "region"));
			RemoveProp(hWnd, "region");
		}
		PostQuitMessage(0);
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



/*--------------------------------------------------------------------------*/
/* 関数 : CreateRgnFromBmp ( HBITMAP, COLORREF ) 							*/
/* 用途 : ビットマップからリージョンを作成する 								*/
/* 引数 : 																	*/
/*      hBitmap - リージョンを作成するビットマップ 							*/
/*      cTransparentColor - 透明色(RGB(255,255,255)のように指定する) 		*/
/*                          デフォルトでは左下隅のドットの色が透明色となる 	*/

HRGN  CreateRgnFromBmp(HBITMAP hBitmap, COLORREF cTransparentColor/* = 0xffffffff*/)
{
	BITMAP      bm;								/* BITMAP structure */
	HBITMAP     hDIBSection = NULL;				/* Handle to DIB */
	COLORREF   *pBits = NULL;					/* Pointer to the DIB's bit values */
	HRGN        hRgn = NULL;					/* Handle to Region */

	/* hBitmap のチェック */
	if (hBitmap == 0)
		return NULL;

	/* ビットマップのサイズを取得 */
	if (GetObject(hBitmap, sizeof(bm), &bm) == 0)
		return NULL;

	/* BLOCK : DIBの作成 */
	/* 成功すると hDIBSection にビットマップハンドル、pBits にビットへの */
	/* ポインタが設定される。(DeleteObject(hDIBSection); を忘れてはいけない) */
	/* 失敗すると hDIBSection 及び pBits は NULL のまま。 */
	{
		HDC         hMemDC      = NULL;			/* Handle to a device context : DIB */
		HDC         hCopyDC     = NULL;			/* Handle to a device context : DDB -> DIB */
		HBITMAP     hOldDIBsBmp = NULL;			/* Handle of the object being replaced : DIB */
		HBITMAP     hOldDDBsBmp = NULL;			/* Handle of the object being replaced : DDB */
		BITMAPINFOHEADER bmih;					/* DIB's BITMAPINFOHEADER structure */
		BOOL        bResultBitBlt = TRUE;		/* Result of BitBlt function */

		/* メモリデバイスコンテキストを作成 */
		hMemDC = CreateCompatibleDC(NULL);
		if (hMemDC == NULL)
			goto CLEANUP_DIB;

		/* DIB(Device Independent Bitmaps : デバイスに依存しないビットマップ) */
		/* のヘッダ情報を書きこむ */
		bmih.biSize = sizeof(BITMAPINFOHEADER),	/* size of the structure */
		bmih.biWidth = bm.bmWidth;				/* width of the bitmap */
		bmih.biHeight = bm.bmHeight;			/* height of the bitmap */
		bmih.biPlanes = 1;						/* must be set to 1 */
		bmih.biBitCount = 32;					/* maximum of 2^32 colors */
		bmih.biCompression = BI_RGB;			/* an uncompressed format */
		bmih.biSizeImage = 0;					/* must be set to zero for BI_RGB bitmaps */
		bmih.biXPelsPerMeter = 0;				/* set to zero */
		bmih.biYPelsPerMeter = 0;				/* set to zero */
		bmih.biClrUsed = 0;						/* must be set to zero */
		bmih.biClrImportant = 0;				/* set to zero, all colors are required */

		/* DIBの作成 */
		hDIBSection = CreateDIBSection(
			hMemDC,						/* HDC hdc : handle to device context */
			(CONST BITMAPINFO *)&bmih,	/* CONST BITMAPINFO *pbmi : pointer to BITMAPINFO structure */
			DIB_RGB_COLORS,				/* UINT iUsage : color data type(RGB values) */
			(void **) &pBits,			/* VOID *ppvBits : pointer to receive the bitmap's bit values */
			NULL,						/* HANDLE hSection : handle to a file mapping object. */
										/* This parameter can be NULL. */
			0							/* DWORD dwOffset : ignored by hSection */
		);
		if (hDIBSection == NULL)
			goto CLEANUP_DIB;

		/* 作成したDIBをDCに選択 */
		hOldDIBsBmp = (HBITMAP) SelectObject(hMemDC, hDIBSection);

		/* 画像の転送元となるメモリデバイスコンテキストを作成 */
		hCopyDC = CreateCompatibleDC(hMemDC);
		if (hCopyDC == NULL)
			goto CLEANUP_DIB;

		/* hBitmap で指定されたビットマップをデバイスコンテキストに選択 */
		hOldDDBsBmp = (HBITMAP) SelectObject(hCopyDC, hBitmap);

		/* ビットマップをhMemDCに転送 */
		bResultBitBlt = BitBlt(hMemDC, 0, 0, bm.bmWidth, bm.bmHeight, hCopyDC, 0, 0, SRCCOPY);

		/* クリーンアップ */
	  CLEANUP_DIB:
		if (hOldDDBsBmp)
			SelectObject(hCopyDC, hOldDDBsBmp);
		if (hCopyDC)
			DeleteDC(hCopyDC);
		if (hOldDIBsBmp)
			SelectObject(hMemDC, hOldDIBsBmp);
		if (hMemDC)
			DeleteDC(hMemDC);

		/* BitBlt 関数が失敗していたらDIBを削除しNULLに設定 */
		if (bResultBitBlt == 0) {
			DeleteObject(hDIBSection);
			hDIBSection = NULL;
			pBits = NULL;
		}
	}	/* End of BLOCK : DIBの作成 */

	/* DIBの作成に失敗していたらリージョンは作れない */
	if (hDIBSection == NULL)
		return NULL;

	/* BLOCK : リージョンの作成 */
	{
		HRGN        hDotRgn;					/* 一時的なドットのリージョン */
		int         x,y,xx;

		/* 透明色が指定されていなければ、左下隅のドットの色が透明色となる */
		if (cTransparentColor == 0xffffffff)
			cTransparentColor = *pBits;

		/* 空のリージョンの作成 */
		hRgn = CreateRectRgn(0, 0, 0, 0);

		/* 縦横にビットが透明色かを調べ、透明色で無い部分をリージョンに追加 */
		for (y = 0; y < bm.bmHeight; y++) {				/* 縦方向 */
			for (x = 0; x < bm.bmWidth; x++) {			/* 横方向 */
				if (*pBits != cTransparentColor) {		/* 透明色ではない？ *//* Yes! */
					xx = x;								/* x を保存(透明色ではない点の始まりを保存) */
					/* 連続した透明色ではない領域を求める */
					for (x = x + 1; x < bm.bmWidth; x++) {
						/* ポインタをインクリメント */
						pBits++;

						/* 透明色になったら break */
						if (*pBits == cTransparentColor)
							break;
					}

					/* 一時的な透明色でない領域のリージョンを作成 */
					hDotRgn = CreateRectRgn(xx, bm.bmHeight - y, x, bm.bmHeight - y - 1);
					/* hRgn と合成(ビットマップ全体のリージョンを作成) */
					CombineRgn(hRgn, hRgn, hDotRgn, RGN_OR);
					/* 一時的なリージョンを削除 */
					DeleteObject(hDotRgn);
				}
				/* ポインタをインクリメント */
				pBits++;
			}
		}
	}	/* End of BLOCK : リージョンの作成 */

	/* HBITMAP(DIB)を削除 */
	DeleteObject(hDIBSection);

	/* return the handle of the region */
	return hRgn;
}
