#define WIN_MODE
#include <system.hpp>
#include "lib/mygame.cpp"

bool ILib::main(){
	stringx fileNameList[]={
		L"BMP\\�}�[�{�[s00.bmp",L"BMP\\���낢��s01.bmp",
		L"BMP\\�w�is100.bmp",L"BMP\\�w�is101.bmp",L"BMP\\�w�is102.bmp",
		L"BMP\\�w�is103.bmp",L"BMP\\�w�is104.bmp",
	};
	int mapIndexList[2][3]={
		2,4,6,
		3,5,5,
	};
	MyGame game(L"�����蔻��");
	Muscat muscat;
	Gaimon gaimon;
	
	game.open(L"�L�����N�^�[���m�̓����蔻��",BOUNDS(10,10,640,480));
	game.makeTextures(7,fileNameList);
	game.setBG((int*)mapIndexList,3,2,Size(256,256));
	while(game.getProcMsg()){
		game.drawBG(Point(0,0));
		gaimon.draw(&game);
		muscat.draw(&game);
		
		if(game.key(DIK_ESCAPE)==1) break;
		gaimon.moveAndCheck(muscat);
		muscat.check(&game);
		muscat.move();
	}
	return true;
}