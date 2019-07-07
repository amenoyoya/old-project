#include <sayo/win32.h>

using namespace sayo;

int _WinMain(){
	const auto max = 16;
	const auto cbSize = sizeof(DISPLAY_DEVICE);
	 
	// 初期化
	DISPLAY_DEVICE devices[max], monitors[max];
	ZeroMemory(devices, sizeof(devices));
	ZeroMemory(monitors, sizeof(monitors));
	// DISPLAY_DEVICE の cb メンバを DISPLAY_DEVICE のサイズで初期化する必要がある (by MSDN)
	for (int i = 0; i < max; ++i)
	{
	    devices[i].cb = cbSize;
	    monitors[i].cb = cbSize;
	}
	 
	// 各ディスプレイデバイスを取得
	for (int i = 0; (i < max) && EnumDisplayDevices(NULL, i, &devices[i], 0); ++i)
	{
	    // アクティブなデバイス以外は無視
	    if ( (devices[i].StateFlags & DISPLAY_DEVICE_ACTIVE) == 0 ) continue;
	 
	    // モニタ情報を取得
	    EnumDisplayDevices(devices[i].DeviceName, 0, &monitors[i], 0);
	 
	    // CreateDC の第1,2引数にデバイス名を指定してディスプレイコンテキストを取得
	    auto hdc = CreateDC(devices[i].DeviceName, devices[i].DeviceName, NULL, NULL);
	    // HORZSIZE を指定してディスプレイの幅を取得(mm 単位なので10で割って cm 単位に)
	    auto width = GetDeviceCaps(hdc, HORZSIZE) / 10.0;
	    // VERTSIZE を指定してディスプレイの高さを取得(同上)
	    auto height = GetDeviceCaps(hdc, VERTSIZE) / 10.0;
	    // ついでにインチも計算
	    auto inch = sqrt(width * width + height * height) / 2.54;
	    MessageBox(NULL, format("%s\n幅=%.1f, 高さ=%.1f\n%.1fインチ",
	    	monitors[i].DeviceString, width, height, inch).c_str(),
	    	"ディスプレイデバイス情報", MB_OK);
	 
	    DeleteDC(hdc);
	}
	return 0;
}
