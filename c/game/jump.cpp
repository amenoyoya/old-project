#define WIN_MODE
#include <system.hpp>
#include <d3d9.hpp>

bool ILib::main(){
	MyGame game(L"JumpAction");
	stringx fileNameList[6]={
		L"BMP\\マーボーs00.bmp",L"BMP\\背景s100.bmp",
		L"BMP\\背景s101.bmp",L"BMP\\背景s102.bmp",
		L"BMP\\背景s103.bmp",L"BMP\\背景s104.bmp"
	};
	int mapIndexList[2][3]={
		1,3,5,
		2,4,4
	};
	int x=0,y=0,grd=360,frmcnt=0;
	double px=288,py=grd,vx=0,vy=0,ay=0;
	
	game.open(L"キャラクターのジャンプと着地の判定",BOUNDS(10,10,640,480));
	if(!game.makeTextures(6,fileNameList)){
		msgBox(L"failed");
		return false;
	}
	game.setBG((int*)mapIndexList,3,2,Size(256,256));
	while(game.getProcMsg()){
		game.drawBG(Point(0,0));
		//地面上にいる場合
		if(vy==0){
			x=64*((frmcnt/30)%2);
			y=0;
		}
		//ジャンプの頂上付近
		else if(vy<2.5 && vy>-2.0){
			x=192;
			y=0;
		}
		//上昇中
		else if(vy<0){
			x=128;
			y=0;
		}
		//落下中
		else{
			x=0;
			y=64;
		}
		game.drawSprite(0,BOUNDS(x,y,64,64),BOUNDS(px,py,64,64));
		
		if(game.key(DIK_ESCAPE)==1) break;
		//地面上でスペースが押下されたとき
		if(vy==0 && game.key(DIK_SPACE)==1){
			vy=-4.5;	//初速
			ay=0.1f;	//重力
		}
		//座標の更新
		vy+=ay;
		py+=vy;
		//地面にめり込まないように
		if(py>grd){
			py=grd;
			vy=0;
			ay=0;
		}
		++frmcnt;
	}
	return true;
}