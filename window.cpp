#include <lily/core.h>
#include <windows.h>

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg,
	WPARAM wParam, LPARAM lParam)
{
	switch (msg) { 
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, msg, wParam, lParam);
	}
	return 0;
}

int _WinMain(){
	HWND hWnd;
	MSG msg;
	WNDCLASS myProg;
	
	myProg.style =CS_HREDRAW | CS_VREDRAW;
	myProg.lpfnWndProc = WndProc;
	myProg.cbClsExtra =0;
	myProg.cbWndExtra =0;
	myProg.hInstance = GetModuleHandle(NULL);
	myProg.hIcon =NULL;
	myProg.hCursor =LoadCursor(NULL, IDC_ARROW);
	myProg.hbrBackground =(HBRUSH)GetStockObject(WHITE_BRUSH);
	myProg.lpszMenuName =NULL;
	myProg.lpszClassName ="testwindow";
	if (!RegisterClass(&myProg)) return 0;
	
	hWnd = CreateWindow("testwindow",
		"猫でもわかるプログラミング", WS_OVERLAPPEDWINDOW,
		100, 100, 640, 480, NULL, NULL, GetModuleHandle(NULL), NULL);
	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);
	
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return (msg.wParam);
}
