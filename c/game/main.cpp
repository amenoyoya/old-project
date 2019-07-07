#include <d3d9.hpp>

namespace ILib{
	void main(){
		DXWindow win(L"DXWindow00");
		stringx fileNameList[2]={
			L"BMP\\�}�[�{�[m00.bmp",L"BMP\\�w�im000.bmp"
		};
		LPDIRECT3DTEXTURE9 texList[2]={NULL,NULL};
		int mapIndexList[1]={1};	//1�����J��Ԃ��`��
		ScrollBG bg;
		DXInput di;
		bool visible=true;
		int frmcnt=0;
		
		win.open(L"�Q�[����ʂ�\��",BOUNDS(50,50,640,480));
		//�摜���X�g���[�h
		for(int i=0; i<2; ++i){
			if(!makeTexture(win,texList[i],fileNameList[i])){
				msgBox(L"�摜�̃��[�h�Ɏ��s");
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
		//��n��
		for(int i=0; i<2; ++i){
			SAFE_RELEASE(texList[i]);
		}
	}
}
CONNECT_APP(WIN_STAGE,ILib::main)