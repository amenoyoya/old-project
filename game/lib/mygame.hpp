#pragma once

#include <d3d9.hpp>

BEGIN_ILIB

//矩形の重なりチェック
bool checkRect(const Rect &rc1,const Rect &rc2);

//DXWindow,ScrollBG,DXTextureラッパ
class MyGame{
private:
	DXWindow			*m_dxWnd;
	ScrollBG			m_bg;
	DXTexture			*m_textures;
	size_t				m_texListNum;
public:
	MyGame(const stringx &name): m_dxWnd(NULL),m_textures(NULL),
		m_texListNum(0)
	{
		m_dxWnd = new DXWindow(name);
	}
	~MyGame();
	
	bool open(const stringx &title,const Rect &rc,const bool &winMode=true,
		const HWND &parent=NULL,const DWORD &style=WS_OVERLAPPEDWINDOW|WS_VISIBLE,
		const DWORD &exStyle=0,const HICON &icon=NULL);
	void close();
	bool makeTextures(const size_t &num,stringx fileNameList[]);
	
	//whileゲームループの中で使用する
	bool getProcMsg();
	
	void show(const int &mode=SHOW){
		m_dxWnd->show(mode);
	}
	void moveToCenter(){
		m_dxWnd->moveToCenter();
	}
	int connect(const UINT &msg,const function<void()> &func){
		return m_dxWnd->connect(msg,func);
	}
	void remove(const UINT &msg,const size_t &func_ptr){
		m_dxWnd->remove(msg,func_ptr);
	}
	void removeDefQuit(){
		m_dxWnd->removeDefQuit();
	}
	void setBG(int *mapList,const int &xNum,const int &yNum,const Size &size){
		m_bg.set(mapList,xNum,yNum,size);
	}
	void drawBG(const Point &pt=Point(0,0)){
		if(m_textures) m_bg.draw(m_dxWnd,pt,m_textures);
	}
	void drawSprite(const int &idx,Rect &from,Rect &to,const int &z=0){
		if(idx<m_texListNum) m_dxWnd->draw(m_textures[idx],from,to,z);
	}
	void drawSpriteEx(const int &idx,Rect &from,Rect &to,
		SpriteParam &param,const int &z=0)
	{
		if(idx<m_texListNum) m_dxWnd->drawEx(m_textures[idx],from,to,param,z);
	}
	size_t key(const unsigned char &keyID){
		return m_dxWnd->key(keyID);
	}
	const DXIMouseState &mouse() const{
		return m_dxWnd->mouse();
	}
	
	const LPDIRECT3D9 &d3d() const{return m_dxWnd->d3d();}
	const LPDIRECT3DDEVICE9 &d3ddev() const{return m_dxWnd->d3ddev();}
	const LPDIRECT3DSURFACE9 &back() const{return m_dxWnd->back();}
	const LPD3DXSPRITE &sprite() const{return m_dxWnd->sprite();}
	const HDC &hdc() const{return m_dxWnd->hdc();}
	const HWND &handle() const{return m_dxWnd->handle();}
	
	operator LPDIRECT3D9() const{return d3d();}
	operator LPDIRECT3DDEVICE9() const{return d3ddev();}
	operator LPDIRECT3DSURFACE9() const{return back();}
	operator LPD3DXSPRITE() const{return sprite();}
	operator HDC() const{return hdc();}
	operator HWND() const{return handle();}
};

class Gaimon;

//キャラクター：マスカット
class Muscat{
private:
	int m_visible;
	int m_frmcnt;
	Rect m_hitw,m_hith;	//当たり判定用
	float m_px,m_py,m_vy,m_ay;
	
	friend Gaimon;
public:
	Muscat(): m_visible(1),m_frmcnt(0),m_px(288),m_py(360),m_vy(0),m_ay(0) {}
	
	void draw(MyGame *game);
	void check(MyGame *game);
	void move();
};

//敵キャラクター：ガイモン
class Gaimon{
private:
	int m_px,m_py;
	int m_visible;
	int m_frmcnt;
public:
	Gaimon(): m_frmcnt(0),m_visible(1),m_px(640),m_py(360) {}
	
	void draw(MyGame *game);
	void moveAndCheck(Muscat &muscat);
};

END_ILIB
