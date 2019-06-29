/*
	�f�X�N�g�b�v�E�}�X�R�b�g�@�̃T���v���E�v���O�����@���̂Q

    Win32 SDK/C&MFC Programming Tips(http://www3.freeweb.ne.jp/misc/kmiwaki/developer/tips/index.shtml)��
	  �E��l�p�`�̃E�B���h�E�����ɂ́H(�f�X�N�g�b�v�Ƀ}�X�R�b�g��\��������ɂ́H)
	  �E�r�b�g�}�b�v�̌`���������[�W�������쐬����ɂ́H(CreateRgnFromBmp)
	�����ɂ��Ă���B

	����́A��L�T���v���Q���A�K���Ɍq���������̃��[�`���B
	���s����ƁAbmp�ꖇ�G�̌`�̃E�B���h�E���\�������B���ނ��Ɖ\�B
	�E�N���b�N�Ń��j���[������ Exit ��I��ŏI���B


	bmp�f�ޒ񋟂�, pukaku.

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

	/* �E�B���h�E �N���X�̓o�^ */
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

	/* �O���[�o���ϐ��ɃC���X�^���X �n���h���̕ۑ� */
	app_hInst = hInst;

	/* ���C�� �E�B���h�E�̍쐬 */
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

	/* ���C�� ���b�Z�[�W ���[�v: */
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
			{	/* ���̈ʒu�ɕ`��p�̃R�[�h��ǉ� */
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
		/* ���������^�C�g���o�[�Ƀ}�E�X������悤��Windows���x�� */
		wParam = DefWindowProc(hWnd, uMsg, wParam, lParam);
		if (wParam == HTCLIENT)
			return HTCAPTION;
		return wParam;

	case WM_COMMAND:
		{
			//int 	wmEvent = HIWORD(wParam);
			int 	wmId    = LOWORD(wParam);
			/* ���j���[�I���̉��: */
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
/* �֐� : CreateRgnFromBmp ( HBITMAP, COLORREF ) 							*/
/* �p�r : �r�b�g�}�b�v���烊�[�W�������쐬���� 								*/
/* ���� : 																	*/
/*      hBitmap - ���[�W�������쐬����r�b�g�}�b�v 							*/
/*      cTransparentColor - �����F(RGB(255,255,255)�̂悤�Ɏw�肷��) 		*/
/*                          �f�t�H���g�ł͍������̃h�b�g�̐F�������F�ƂȂ� 	*/

HRGN  CreateRgnFromBmp(HBITMAP hBitmap, COLORREF cTransparentColor/* = 0xffffffff*/)
{
	BITMAP      bm;								/* BITMAP structure */
	HBITMAP     hDIBSection = NULL;				/* Handle to DIB */
	COLORREF   *pBits = NULL;					/* Pointer to the DIB's bit values */
	HRGN        hRgn = NULL;					/* Handle to Region */

	/* hBitmap �̃`�F�b�N */
	if (hBitmap == 0)
		return NULL;

	/* �r�b�g�}�b�v�̃T�C�Y���擾 */
	if (GetObject(hBitmap, sizeof(bm), &bm) == 0)
		return NULL;

	/* BLOCK : DIB�̍쐬 */
	/* ��������� hDIBSection �Ƀr�b�g�}�b�v�n���h���ApBits �Ƀr�b�g�ւ� */
	/* �|�C���^���ݒ肳���B(DeleteObject(hDIBSection); ��Y��Ă͂����Ȃ�) */
	/* ���s����� hDIBSection �y�� pBits �� NULL �̂܂܁B */
	{
		HDC         hMemDC      = NULL;			/* Handle to a device context : DIB */
		HDC         hCopyDC     = NULL;			/* Handle to a device context : DDB -> DIB */
		HBITMAP     hOldDIBsBmp = NULL;			/* Handle of the object being replaced : DIB */
		HBITMAP     hOldDDBsBmp = NULL;			/* Handle of the object being replaced : DDB */
		BITMAPINFOHEADER bmih;					/* DIB's BITMAPINFOHEADER structure */
		BOOL        bResultBitBlt = TRUE;		/* Result of BitBlt function */

		/* �������f�o�C�X�R���e�L�X�g���쐬 */
		hMemDC = CreateCompatibleDC(NULL);
		if (hMemDC == NULL)
			goto CLEANUP_DIB;

		/* DIB(Device Independent Bitmaps : �f�o�C�X�Ɉˑ����Ȃ��r�b�g�}�b�v) */
		/* �̃w�b�_������������ */
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

		/* DIB�̍쐬 */
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

		/* �쐬����DIB��DC�ɑI�� */
		hOldDIBsBmp = (HBITMAP) SelectObject(hMemDC, hDIBSection);

		/* �摜�̓]�����ƂȂ郁�����f�o�C�X�R���e�L�X�g���쐬 */
		hCopyDC = CreateCompatibleDC(hMemDC);
		if (hCopyDC == NULL)
			goto CLEANUP_DIB;

		/* hBitmap �Ŏw�肳�ꂽ�r�b�g�}�b�v���f�o�C�X�R���e�L�X�g�ɑI�� */
		hOldDDBsBmp = (HBITMAP) SelectObject(hCopyDC, hBitmap);

		/* �r�b�g�}�b�v��hMemDC�ɓ]�� */
		bResultBitBlt = BitBlt(hMemDC, 0, 0, bm.bmWidth, bm.bmHeight, hCopyDC, 0, 0, SRCCOPY);

		/* �N���[���A�b�v */
	  CLEANUP_DIB:
		if (hOldDDBsBmp)
			SelectObject(hCopyDC, hOldDDBsBmp);
		if (hCopyDC)
			DeleteDC(hCopyDC);
		if (hOldDIBsBmp)
			SelectObject(hMemDC, hOldDIBsBmp);
		if (hMemDC)
			DeleteDC(hMemDC);

		/* BitBlt �֐������s���Ă�����DIB���폜��NULL�ɐݒ� */
		if (bResultBitBlt == 0) {
			DeleteObject(hDIBSection);
			hDIBSection = NULL;
			pBits = NULL;
		}
	}	/* End of BLOCK : DIB�̍쐬 */

	/* DIB�̍쐬�Ɏ��s���Ă����烊�[�W�����͍��Ȃ� */
	if (hDIBSection == NULL)
		return NULL;

	/* BLOCK : ���[�W�����̍쐬 */
	{
		HRGN        hDotRgn;					/* �ꎞ�I�ȃh�b�g�̃��[�W���� */
		int         x,y,xx;

		/* �����F���w�肳��Ă��Ȃ���΁A�������̃h�b�g�̐F�������F�ƂȂ� */
		if (cTransparentColor == 0xffffffff)
			cTransparentColor = *pBits;

		/* ��̃��[�W�����̍쐬 */
		hRgn = CreateRectRgn(0, 0, 0, 0);

		/* �c���Ƀr�b�g�������F���𒲂ׁA�����F�Ŗ������������[�W�����ɒǉ� */
		for (y = 0; y < bm.bmHeight; y++) {				/* �c���� */
			for (x = 0; x < bm.bmWidth; x++) {			/* ������ */
				if (*pBits != cTransparentColor) {		/* �����F�ł͂Ȃ��H *//* Yes! */
					xx = x;								/* x ��ۑ�(�����F�ł͂Ȃ��_�̎n�܂��ۑ�) */
					/* �A�����������F�ł͂Ȃ��̈�����߂� */
					for (x = x + 1; x < bm.bmWidth; x++) {
						/* �|�C���^���C���N�������g */
						pBits++;

						/* �����F�ɂȂ����� break */
						if (*pBits == cTransparentColor)
							break;
					}

					/* �ꎞ�I�ȓ����F�łȂ��̈�̃��[�W�������쐬 */
					hDotRgn = CreateRectRgn(xx, bm.bmHeight - y, x, bm.bmHeight - y - 1);
					/* hRgn �ƍ���(�r�b�g�}�b�v�S�̂̃��[�W�������쐬) */
					CombineRgn(hRgn, hRgn, hDotRgn, RGN_OR);
					/* �ꎞ�I�ȃ��[�W�������폜 */
					DeleteObject(hDotRgn);
				}
				/* �|�C���^���C���N�������g */
				pBits++;
			}
		}
	}	/* End of BLOCK : ���[�W�����̍쐬 */

	/* HBITMAP(DIB)���폜 */
	DeleteObject(hDIBSection);

	/* return the handle of the region */
	return hRgn;
}
