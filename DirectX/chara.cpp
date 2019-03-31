#include <el_sys.win.hpp>
#include <el_d3d.hpp>

// float => int データ損失警告無視
#pragma warning(disable: 4244)

enum{
	UP=0, LEFT, DOWN, RIGHT
};

typedef struct{
	int x, y, img, dir;
	bool walking;
}ch_t;

int main(){
	DxWindow win;
	Sprite image;
	ch_t ch;
	
	Window::changeStyle(WS_VISIBLE|WS_GAMEWINDOW);
	if(!win.open("dxwin","DxLib",50,50,640,480)) return 1;
	
	if(!image.loadDivGraph(win,"Data/char.png",4,4)) return 1;
	ch.x = 320;
	ch.y = 160;
	ch.walking = false;
	ch.dir = RIGHT;
	
	while(dxProcessMessage(win)){
		// 座標が32で割り切れれば入力可能
		if(ch.x % 32 == 0 && ch.y % 32 == 0){
			ch.walking = true;
			if(win.keyPushed(DIK_UP)) ch.dir = UP;
			else if(win.keyPushed(DIK_LEFT)) ch.dir = LEFT;
			else if(win.keyPushed(DIK_DOWN)) ch.dir = DOWN;
			else if(win.keyPushed(DIK_RIGHT)) ch.dir = RIGHT;
			else ch.walking = false;
		}
		// 歩く
		if(ch.walking){
			switch(ch.dir){
			case UP:
				ch.y--; break;
			case LEFT:
				ch.x--; break;
			case DOWN:
				ch.y++; break;
			case RIGHT:
				ch.x++; break;
			}
		}
		
		ch.img = (ch.x % 32 + ch.y % 32)/8 + ch.dir * 4;
		image.draw(ch.x, ch.y, ch.x+48, ch.y+48, ch.img);
	}
	return 0;
}
