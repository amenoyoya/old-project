#include <el_sys.win.hpp>
#include <el_d3d.hpp>

DxWindow g_win;
Sprite chara, haruhi;
LPDIRECT3DDEVICE9 dev=NULL;

bool init(){
	if(!chara.loadDivGraph(dev,"Data/ƒEƒ‹.bmp",3,4,0xffffffff)){
		msgBox("ƒEƒ‹.bmp ‚ª“Ç‚Ýž‚ß‚Ü‚¹‚ñ‚Å‚µ‚½");
		return false;
	}
	if(!haruhi.loadGraph(dev,"Data/haruhi.bmp")){
		msgBox("haruhi.bmp ‚ª“Ç‚Ýž‚ß‚Ü‚¹‚ñ‚Å‚µ‚½");
		return false;
	}
	return SUCCEEDED(dev->SetFVF(EL_FVF_TLVertex));
}

EL_WndProc(proc){
	if(msg == WM_SIZE){
		if(wp== SIZE_MAXIMIZED){
			g_win.setWindowMode(false);
			if(!init()){
				msgBox("error");
				PostQuitMessage(0);
			}
		}
	}
	return EL_CallProc(defWindowProc);
}

int main(){
	Font font;
	int i = 0;
	
	//Window::changeWndProc(proc);
	if(!g_win.open("dxw","vertex",50,50,640,480)) return 1;
	dev=g_win.d3ddev();
	
	if(!init()) return 1;
	font.open(32,600);
	while(dxProcessMessage(g_win)){
		HDC hdc = g_win.getDC();
		
		strPut3D(hdc,70,50,font,D3DCOLOR_XRGB(255,0,100),D3DCOLOR_XRGB(100,100,200),
			"i = "+toString(i));
		g_win.releaseDC(hdc);
		
		chara.draw(10,10,48+10,64+10,i);
		haruhi.draw(100,100,300+100,350+100);
		
		if(g_win.key()[DIK_ESCAPE]==1) break;
		if(g_win.key()[DIK_SPACE]) if((++i)==12) i=0;
	}
	return 0;
}
