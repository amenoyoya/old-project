#define WIN_MODE
#include <system.hpp>
#include <d3d9.hpp>

bool ILib::main(){
	MyGame game(L"JumpAction");
	stringx fileNameList[6]={
		L"BMP\\�}�[�{�[s00.bmp",L"BMP\\�w�is100.bmp",
		L"BMP\\�w�is101.bmp",L"BMP\\�w�is102.bmp",
		L"BMP\\�w�is103.bmp",L"BMP\\�w�is104.bmp"
	};
	int mapIndexList[2][3]={
		1,3,5,
		2,4,4
	};
	int x=0,y=0,grd=360,frmcnt=0;
	double px=288,py=grd,vx=0,vy=0,ay=0;
	
	game.open(L"�L�����N�^�[�̃W�����v�ƒ��n�̔���",BOUNDS(10,10,640,480));
	if(!game.makeTextures(6,fileNameList)){
		msgBox(L"failed");
		return false;
	}
	game.setBG((int*)mapIndexList,3,2,Size(256,256));
	while(game.getProcMsg()){
		game.drawBG(Point(0,0));
		//�n�ʏ�ɂ���ꍇ
		if(vy==0){
			x=64*((frmcnt/30)%2);
			y=0;
		}
		//�W�����v�̒���t��
		else if(vy<2.5 && vy>-2.0){
			x=192;
			y=0;
		}
		//�㏸��
		else if(vy<0){
			x=128;
			y=0;
		}
		//������
		else{
			x=0;
			y=64;
		}
		game.drawSprite(0,BOUNDS(x,y,64,64),BOUNDS(px,py,64,64));
		
		if(game.key(DIK_ESCAPE)==1) break;
		//�n�ʏ�ŃX�y�[�X���������ꂽ�Ƃ�
		if(vy==0 && game.key(DIK_SPACE)==1){
			vy=-4.5;	//����
			ay=0.1f;	//�d��
		}
		//���W�̍X�V
		vy+=ay;
		py+=vy;
		//�n�ʂɂ߂荞�܂Ȃ��悤��
		if(py>grd){
			py=grd;
			vy=0;
			ay=0;
		}
		++frmcnt;
	}
	return true;
}