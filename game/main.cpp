#include <d3d9.hpp>

namespace ILib{
	void main(){
		DXWindow win(L"DXWindow00");
		stringx fileNameList[2]={
			L"BMP\\マーボーm00.bmp",L"BMP\\背景m000.bmp"
		};
		LPDIRECT3DTEXTURE9 texList[2]={NULL,NULL};
		int mapIndexList[1]={1};	//1枚を繰り返し描画
		ScrollBG bg;
		DXInput di;
		bool visible=true;
		int frmcnt=0;
		
		win.open(L"ゲーム画面を表示",BOUNDS(50,50,640,480));
		//画像リストロード
		for(int i=0; i<2; ++i){
			if(!makeTexture(win,texList[i],fileNameList[i])){
				msgBox(L"画像のロードに失敗");
				exit(1);
			}
		}
		bg.set(mapIndexList,1,1,Size(256,256));
		di.open(win);
		
		while(getProcMsg()){
			win.beginScene(0xff000000);
			bg.draw(&win,Point(frmcnt,frmcnt),texList);
			if(visible) win.draw(texList[0],BOUNDS(0,0,128,128),BOUNDS(128,192,128,128));
			win.endScene();
			
			if(di.get()){
				if(di.check(DIK_RETURN)==1) visible=!visible;
				if(di.check(DIK_SPACE)) ++frmcnt;
				if(di.check(DIK_ESCAPE)) break;
			}
		}
		//後始末
		for(int i=0; i<2; ++i){
			SAFE_RELEASE(texList[i]);
		}
	}
}
CONNECT_APP(WIN_STAGE,ILib::main)