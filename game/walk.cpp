#define USE_SOURCE
#define WIN_MODE
#include <system.hpp>
#include <d3d9.hpp>

bool ILib::main(){
	MyGame game(L"DXMyGame");
	stringx fileNameList[6]={
		L"BMP\\É}Å[É{Å[m00.bmp",L"BMP\\îwåis100.bmp",
		L"BMP\\îwåis101.bmp",L"BMP\\îwåis102.bmp",
		L"BMP\\îwåis103.bmp",L"BMP\\îwåis104.bmp"
	};
	int mapIndexList[2][3]={
		1,3,5,2,4,4
	};
	int px=-64, py=360, vx=0;
	int frmcnt=0;
	
	if(!game.open(L"ï‡Ç≠ÉAÉjÉÅÅ[ÉVÉáÉì",BOUNDS(50,50,640,480))){
		msgBox(L"failed to init game");
		return false;
	}
	game.setBG((int*)mapIndexList,3,2,Size(256,256));
	if(!game.makeTextures(6,fileNameList)){
		msgBox(L"failed to make texture");
		return false;
	}
	
	while(game.getProcMsg()){
		game.drawBG();
		game.drawSprite(0,BOUNDS(64*(frmcnt/16%4),128,64,64),BOUNDS(px,py,64,64));
		vx=0;
		
		if(game.key(DIK_ESCAPE)) break;
		if(game.key(DIK_RIGHT)){
			vx=1;
			++frmcnt;
		}
		if(game.key(DIK_RETURN)==1) px=-64;
		
		px+=vx;
	}
	return true;
}