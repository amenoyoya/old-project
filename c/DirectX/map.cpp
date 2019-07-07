#include <el_sys.hpp>
#include <el_d3d.hpp>

#define GROUND '0'
#define GRASS '1'

#define GROUND_ID 8
#define GRASS_ID 10

enum{
	UP,LEFT,DOWN,RIGHT
};

typedef struct{
	int x, y, img, dir;
	bool walking;
}ch_t;

tstring loadMapData(){
	File file;
	tstring buff;
	size_t size = 0;
	
	if(!file.open("Data/map.txt")) return "";
	buff.resize(size = file.size());
	file.read<char>(buff,size);
	return buff.erase_null();
}

int EL_WinMain(){
	DxWindow win;
	Sprite chara, map;
	ch_t ch;
	size_t images[20*15];
	tstring::iterator it, fin;
	tstring txt = loadMapData();
	
	if(txt == "") return -1;
	it = txt.begin(), fin = txt.end();
	for(int i=0; i < 20*15 && it != fin; ++it){
		if(*it == GROUND) images[i++] = GROUND_ID;
		else if(*it == GRASS) images[i++] = GRASS_ID;
	}
	
	Window::changeStyle(WS_VISIBLE|WS_GAMEWINDOW);
	//DirectX::changeWindowMode(false);
	if(!win.open("dxw","el_d3d::DxWindow",50,50,640,480)) return -1;
	
	if(!map.loadDivGraph(win,"Data/MapChip.png",8,87)) return -1;
	if(!chara.loadDivGraph(win,"Data/char.png",4,4,0xff000000)) return -1;
	ch.x = 32, ch.y = 160, ch.img = 8, ch.dir = DOWN;
	ch.walking = false;
	
	while(dxProcessMessage(win) && !win.key()[DIK_ESCAPE]){
		// Map描画
		for(int y=0; y<15; ++y){
			for(int x=0; x<20; ++x){
				map.drawRect((float)x*32,(float)y*32,(float)(x+1)*32,(float)(y+1)*32,
					images[20*y+x]);
			}
		}
		
		// キャラ動作制御
		if(ch.x % 32 == 0 && ch.y % 32 == 0){
			ch.walking = true;
			if(win.key()[DIK_UP]) ch.dir = UP;
			else if(win.key()[DIK_LEFT]) ch.dir = LEFT;
			else if(win.key()[DIK_DOWN]) ch.dir = DOWN;
			else if(win.key()[DIK_RIGHT]) ch.dir = RIGHT;
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
		// キャラ画像セット
		ch.img = (ch.x % 32 + ch.y % 32)/8 + ch.dir * 4;
		chara.drawRect((float)ch.x-4, (float)ch.y-8,
			(float)ch.x+38-4, (float)ch.y+38-8, ch.img);
	}
	return 0;
}
