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

bool able2go(int x,int y,int muki){//�i�߂邩�𔻒肷��
	if(muki==0)//������Ȃ�
		if(hantei[y/32-1][x/32]==1)//�i�߂邩����
			return false;//�G���[
	if(muki==1)//�������Ȃ�
		if(hantei[y/32][x/32-1]==1)
			return false;
	if(muki==2)//�������Ȃ�
		if(hantei[y/32+1][x/32]==1)
			return false;
	if(muki==3)//�E�����Ȃ�
		if(hantei[y/32][x/32+1]==1)
			return false;
	return true;//����
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
		
		/*�����ǂ�`��*/
		for(int i=0; i<15; ++i){
			for(int j=0; j<20; ++j){
				if(hantei[i][j] == 1){
					win.drawer().DrawBox(j*32, i*32, 32, 32, d3d_RGB(255,255,255));
				}
			}
		}
		
		if(x%32==0 && y%32==0){	//���W��32�Ŋ���؂ꂽ����͉\
			walking = true;		//�����t���O�𗧂Ă�B
			if(di_GetKey(DIK_UP)) dir = 0;
			else if(di_GetKey(DIK_LEFT)) dir = 1;
			else if(di_GetKey(DIK_DOWN)) dir = 2;
			else if(di_GetKey(DIK_RIGHT)) dir = 3;
			else walking = false;	// �L�[���͂��Ȃ���΃t���O��܂�
			
			if(walking){
				//���������Ȃ�
				if(!able2go(x, y, dir)){
					//�s���悪�����Ȃ��Ȃ�
					ogg_Play();
					walking = false;	//�����Ȃ��t���O�𗧂Ă�B
				}
			}
		}
		
		if(walking){	//�����t���O�������Ă�����
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
