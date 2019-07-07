#include <sayo/win32.h>

using namespace sayo;

int _WinMain(){
	const auto max = 16;
	const auto cbSize = sizeof(DISPLAY_DEVICE);
	 
	// ������
	DISPLAY_DEVICE devices[max], monitors[max];
	ZeroMemory(devices, sizeof(devices));
	ZeroMemory(monitors, sizeof(monitors));
	// DISPLAY_DEVICE �� cb �����o�� DISPLAY_DEVICE �̃T�C�Y�ŏ���������K�v������ (by MSDN)
	for (int i = 0; i < max; ++i)
	{
	    devices[i].cb = cbSize;
	    monitors[i].cb = cbSize;
	}
	 
	// �e�f�B�X�v���C�f�o�C�X���擾
	for (int i = 0; (i < max) && EnumDisplayDevices(NULL, i, &devices[i], 0); ++i)
	{
	    // �A�N�e�B�u�ȃf�o�C�X�ȊO�͖���
	    if ( (devices[i].StateFlags & DISPLAY_DEVICE_ACTIVE) == 0 ) continue;
	 
	    // ���j�^�����擾
	    EnumDisplayDevices(devices[i].DeviceName, 0, &monitors[i], 0);
	 
	    // CreateDC �̑�1,2�����Ƀf�o�C�X�����w�肵�ăf�B�X�v���C�R���e�L�X�g���擾
	    auto hdc = CreateDC(devices[i].DeviceName, devices[i].DeviceName, NULL, NULL);
	    // HORZSIZE ���w�肵�ăf�B�X�v���C�̕����擾(mm �P�ʂȂ̂�10�Ŋ����� cm �P�ʂ�)
	    auto width = GetDeviceCaps(hdc, HORZSIZE) / 10.0;
	    // VERTSIZE ���w�肵�ăf�B�X�v���C�̍������擾(����)
	    auto height = GetDeviceCaps(hdc, VERTSIZE) / 10.0;
	    // ���łɃC���`���v�Z
	    auto inch = sqrt(width * width + height * height) / 2.54;
	    MessageBox(NULL, format("%s\n��=%.1f, ����=%.1f\n%.1f�C���`",
	    	monitors[i].DeviceString, width, height, inch).c_str(),
	    	"�f�B�X�v���C�f�o�C�X���", MB_OK);
	 
	    DeleteDC(hdc);
	}
	return 0;
}
