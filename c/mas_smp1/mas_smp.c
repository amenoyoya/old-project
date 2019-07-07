/*
	�f�X�N�g�b�v�E�}�X�R�b�g�@�̃T���v���E�v���O�����@���̂P

    Win32 SDK/C&MFC Programming Tips(http://www3.freeweb.ne.jp/misc/kmiwaki/developer/tips/index.shtml)��
	  �E��l�p�`�̃E�B���h�E�����ɂ́H(�f�X�N�g�b�v�Ƀ}�X�R�b�g��\��������ɂ́H)
	  �E�r�b�g�}�b�v�̌`���������[�W�������쐬����ɂ́H
	�����ɂ��Ă���B

	����́A��L�T���v���A���̂܂܂̃��[�`���ŁA
	�������̍D�݂̕ύX��A���\�[�X�̗p�ӂƂ��̕ύX�����������B
	���s����ƁA�ۂ��E�B���h�E���ł���B���ނ��Ɖ\�B
	�E�N���b�N�Ń��j���[������ Exit ��I��ŏI���B

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

	/* �E�B���h�E �N���X�̓o�^ */
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

	/* ���C�� �E�B���h�E�̍쐬 */
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
			/* TODO: ���̈ʒu�ɕ`��p�̃R�[�h��ǉ����Ă�������... */
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
