#include <luna_gui.h>

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

class Region{
	HRGN hRgn;
public:
	Region(): hRgn(NULL) {}
	~Region(){
		release();
	}
	
	void release(){
		if(hRgn){
			DeleteObject(hRgn);
			hRgn = NULL;
		}
	}
	
	Region &operator=(HRGN rgn){
		release();
		hRgn = rgn;
		return *this;
	}
	operator HRGN(){return hRgn;}
};

int _WinMain(){
	GWindow win("win");
	Bitmap bmp;
	Region hRgn;
	//RECT rc;
	
	win.eventFunc = [&win, &bmp]()->bool{
		_Event(WM_MAIN){
			win.beginScene();
			if(getKey(VK_ESCAPE) == 1) PostQuitMessage(0);
			
			win.gdi().drawBMP(bmp, 0, 0, 80, 80);
		}
		_Event(WM_NCHITTEST){
			// あたかもタイトルバーにマウスがあるようにWindowsを騙す
			WPARAM wParam = DefWindowProc(getEvent()->hwnd, getEvent()->message,
				getEvent()->wParam, getEvent()->lParam);
			if(wParam == HTCLIENT){
				win.retWndProc = HTCAPTION;
				return false;
			}
			return true;
		}
		return true;
	};
	win.style = WS_POPUP;
	win.exStyle = WS_EX_TOOLWINDOW;
	win.create("title",50,50,640,480);
	
	bmp.load("image_00.bmp");
	//GetClientRect(win, &rc);
	//hRgn = CreateEllipticRgn(0, 0, rc.right, rc.bottom);
	hRgn = CreateRgnFromBmp(bmp, 0x00ffda3f);
	SetWindowRgn(win, hRgn, TRUE);
	return win.run();
}
