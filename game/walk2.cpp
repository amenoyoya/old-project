#define WIN_MODE
#include <system.hpp>
#include <d3d9.hpp>

bool ILib::main(){
	MyGame game(L"MyGame::DXWindow001");
	stringx fileNameList[7]={
		L"BMP\\�}�[�{�[m00.bmp",L"BMP\\�w�is100.bmp",
		L"BMP\\�w�is101.bmp",L"BMP\\�w�is102.bmp",
		L"BMP\\�w�is103.bmp",L"BMP\\�w�is104.bmp",L"BMP\\�w�is105.bmp"
	};
	int mapIndexList[2][5]={
		1,3,5,1,1,
		2,4,4,2,6
	};
	int x=-64,y=360,vx=0;	//�}�[�{�[�̈ʒu�A���x
	int wx=0;				//�}�b�v��x���W
	int frmcnt=0;
	
	game.open(L"�����A�j���[�V�����A",BOUNDS(10,10,640,480));
	game.makeTextures(7,fileNameList);
	game.setBG((int*)mapIndexList,5,2,Size(256,256));
	while(game.getProcMsg()){
		game.drawBG(Point(wx,0));
		game.drawSprite(0,BOUNDS(64*(frmcnt/16%4),128,64,64),
			BOUNDS(x-wx,y,64,64));
		if(game.checkKey(DIK_ESCAPE)) break;
		if(game.checkKey(DIK_RETURN)==1){
			wx=0;
			x=-64;
		}
		vx=0;
		if(game.checkKey(DIK_RIGHT)){
			vx=1;
			++frmcnt;
		}
		x+=vx;
		//�w�i�X�N���[��
		if(x>240 && x<880) wx=x-240;
	}
	return true;
}