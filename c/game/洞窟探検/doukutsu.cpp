#include <sayo/dxlib.h>

using namespace sayo;

class MainRoutine: public Routine{
	int my;			// ���L����Y�ʒu
	double speed;	// ���L�����X�s�[�h
	uint_t sc, hisc, LV;	// �X�R�A
	int uekabe, sukima;
	
	void routine(){
		_CoBegin
		// �ŏ��ɉ�ʂ�^���������Ă���
		SetDrawScreen(layer.handle());
		DrawBox(0, 0, 480, 360, GetColor(0, 0, 0), true);
		// ������
		speed = 0; uekabe = 200, sukima = 100, my = 180; sc = 0;
		next();
		
		_CoNext
		SetDrawScreen(layer.handle());
		// �X�R�A���烌�x���Z�o
		// 500�_���Ƃɓ�Փx�㏸
		LV = sc/500 + 1;
		if(LV > 18) LV = 18;
		// �E�[�ɍ���������
		DrawLine(479, 0, 479, 359, GetColor(0, 0, 0));
		
		// ��ǂ̍��������߂�
		uekabe += mt_rand(LV*2+1)-LV;
		if(uekabe < 10) uekabe = 10;
		if(uekabe > 250) uekabe = 250;
		// ��ǂ�����
		DrawLine(479, 0, 479, uekabe, GetColor(255, LV*40, 0));
		
		// ���Ԃ̍��������߂�
		sukima += mt_rand(LV*2+1)-LV;
		if(sukima < 100) sukima = 100;
		if(sukima > 200) sukima = 200;
		// ���ǂ�����
		DrawLine(479, uekabe+sukima, 479, 359, GetColor(255, LV*40, 0));
		
		// ���L���������蔻��
		if(dxGetPixel(340, my).r != 0) jump(999);	// GAME OVER
		// ���L��������
		DrawPixel(340, my, GetColor(255,255,255));
		if(DxEngine::getKey(DIK_SPACE) > 0) speed -= 0.25;
		else speed += 0.25;
		// �X�s�[�h����
		if(speed < -3) speed = -3;
		if(speed > 3) speed = 3;
		my += speed;
		// ��ʃR�s�[
		layer.drawRect(0, 0, 1, 0, 479, 360);
		// �X�R�A�\��
		++sc;
		DrawBox(80, 5, 270, 21, GetColor(0,0,0), true);
		dxSetFontSize(16);
		dxDrawStr(81, 5, format("LEVEL/%d/Hi/%d/%d", LV, hisc, sc), GetColor(255,255,255));
		next();
		
		_CoNext
		wait(3);	// wait
		next();
		
		_CoNext
		jump(1);	// ���A�`��ɖ߂�
		_CoEnd
		
		/* GAME OVER��� */
		if(status() == 1000){
			string str;
			
			if(hisc < sc){
				hisc = sc;
				str = "�n�C�X�R�A�I "+tostr(hisc)+"�_\n\n";
			}
			str += "������x���킵�܂����H";
			Sleep(500);
			if(IDYES == msgbox(str, "GAME OVER", MB_YESNO)){
				jump(0);	// �Q�[���̃X�^�[�g�ɖ߂�
			}else{
				PostQuitMessage(0);
			}
		}
	}
public:
	DxImage		layer;
	
	MainRoutine(): hisc(0) {
		mt_srand();
		layer.openAsLayer(480, 360);
	}
};

int _WinMain(){
	DxEngine	dx;
	
	dx.setGraph(480, 360);
	dx.open();
	MainRoutine routine;
	while(dx.proc() && dx.getKey(DIK_ESCAPE) == 0){
		routine.layer.draw(0, 0);
		routine.proc();
	}
	return 0;
}
