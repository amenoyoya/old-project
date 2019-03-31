#define _WindowsSystem
#include <eve/d3d9.h>

int hantei[15][20] = {
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,1,1,1,0,0,0,1,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
};

bool able2go(int x,int y,int muki){//進めるかを判定する
	if(muki==0)//上向きなら
		if(hantei[y/32-1][x/32]==1)//進めるか判定
			return false;//エラー
	if(muki==1)//左向きなら
		if(hantei[y/32][x/32-1]==1)
			return false;
	if(muki==2)//下向きなら
		if(hantei[y/32+1][x/32]==1)
			return false;
	if(muki==3)//右向きなら
		if(hantei[y/32][x/32+1]==1)
			return false;
	return true;//正常
}


int app_Main(){
	DxWindow win("dxwin");
	DxSprite back, chara;
	DxString fps;
	int x = 320, y = 160, dir = 3;
	bool walking = false;
	
	win.open();
	di_Open(win);
	
	back.open(win.device(), "back.bmp");
	chara.DivOpen(win.device(), "char.png", 4, 4, 32, 32, d3d_RGB(0,0,0));
	back.SetSize(640, 480);
	
	fps.init(win.device());
	fps.SetPos(0, 0);
	fps.SetColor(d3d_RGBA(255,0,0,140));
	
	ogg_Open("dan.ogg");
	while(Window::run() && win.BeginScene() && di_GetAllStates()){
		back.draw();
		
		/*白い壁を描画*/
		for(int i=0; i<15; ++i){
			for(int j=0; j<20; ++j){
				if(hantei[i][j] == 1){
					win.drawer().DrawBox(j*32, i*32, 32, 32, d3d_RGB(255,255,255));
				}
			}
		}
		
		if(x%32==0 && y%32==0){	//座標が32で割り切れたら入力可能
			walking = true;		//歩くフラグを立てる。
			if(di_GetKey(DIK_UP)) dir = 0;
			else if(di_GetKey(DIK_LEFT)) dir = 1;
			else if(di_GetKey(DIK_DOWN)) dir = 2;
			else if(di_GetKey(DIK_RIGHT)) dir = 3;
			else walking = false;	// キー入力がなければフラグを折る
			
			if(walking){
				//もし歩くなら
				if(!able2go(x, y, dir)){
					//行き先が歩けないなら
					ogg_Play();
					walking = false;	//歩かないフラグを立てる。
				}
			}
		}
		
		if(walking){	//歩くフラグが立っていたら
			if(dir == 0) --y;
			else if(dir == 1) --x;
			else if(dir == 2) ++y;
			else if(dir == 3) ++x;
		}
		
		chara.SetPos(x, y);
		chara.draw((x%32+y%32)/8 + dir*4);
		
		fps.regist(~str_Format("stick: %03ld", Window::fps()));
		fps.draw();
	}
	return 0;
}
