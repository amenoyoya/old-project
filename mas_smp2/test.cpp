#include <luna_gui.h>

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
			// ���������^�C�g���o�[�Ƀ}�E�X������悤��Windows���x��
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
