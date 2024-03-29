#define WIN_MODE
#include <system.hpp>
#include "lib/mygame.cpp"

bool ILib::main(){
	stringx fileNameList[]={
		L"BMP\\マーボーs00.bmp",L"BMP\\いろいろs01.bmp",
		L"BMP\\背景s100.bmp",L"BMP\\背景s101.bmp",L"BMP\\背景s102.bmp",
		L"BMP\\背景s103.bmp",L"BMP\\背景s104.bmp",
	};
	int mapIndexList[2][3]={
		2,4,6,
		3,5,5,
	};
	MyGame game(L"当たり判定");
	Muscat muscat;
	Gaimon gaimon;
	
	game.open(L"キャラクター同士の当たり判定",BOUNDS(10,10,640,480));
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