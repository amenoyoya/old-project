#include "mygame.hpp"

BEGIN_ILIB

bool checkRect(const Rect &rc1,const Rect &rc2){
	if(rc1.right < rc2.left) return false;
	if(rc2.right < rc1.left) return false;
	if(rc1.bottom < rc2.top) return false;
	if(rc2.bottom < rc1.top) return false;
	return true;
}


//-----------------MyGameメンバ-------------
MyGame::~MyGame(){
	close();
	SAFE_DELETE(m_dxWnd);
}

bool MyGame::open(const stringx &title,const Rect &rc,const bool &winMode,
	const HWND &parent,const DWORD &style,const DWORD &exStyle,const HICON &icon)
{
	close();
	return m_dxWnd->open(title,rc,winMode,parent,style,exStyle,icon);
}

void MyGame::close(){
	SAFE_FREE(m_textures);
	m_dxWnd->close();
}

bool MyGame::makeTextures(const size_t &num,stringx fileNameList[]){
	SAFE_FREE(m_textures);
	m_textures = new DXTexture[num];
	for(size_t i=0; i<num; ++i){
		if(!m_textures[i].open(*m_dxWnd,fileNameList[i])) return false;
		++m_texListNum;
	}
	return true;
}

bool MyGame::getProcMsg(){
	bool ret = ILib::getProcMsg();
	m_dxWnd->endScene();
	m_dxWnd->beginScene(0xff000000);
	m_dxWnd->getKeyState();
	return ret;
}


//----------------Muscatメンバ----------------
void Muscat::draw(MyGame *game){
	int x=0,y=0;
	if(m_visible==1){
		if(m_vy==0){
			x=64*((m_frmcnt/30)%2);
			y=0;
		}else if(m_vy<2.5 && m_vy>-2.0){
			x=192;
			y=0;
		}else if(m_vy<0){
			x=128;
			y=0;
		}else{
			x=0;
			y=64;
		}
	}else if(m_visible==8){
		x=128;
		y=64;
	}
	game->drawSprite(0,BOUNDS(x,y,64,64),BOUNDS(m_px,m_py,64,64));
	++m_frmcnt;
}

void Muscat::check(MyGame *game){
	if(m_vy==0 && game->key(DIK_SPACE)==1){
		m_vy=-4.5;
		m_ay=0.1f;
	}
	m_hith=BOUNDS(m_px+16,m_py+m_vy+m_ay,32,64);
	m_hitw=BOUNDS(m_px,m_py+m_vy+m_ay+16,64,32);
}

void Muscat::move(){
	m_vy+=m_ay;
	m_py+=m_vy;
	if(m_py>360){
		m_py=360;
		m_vy=0;
		m_ay=0;
	}
}


//------------------Gaimonメンバ------------------
void Gaimon::draw(MyGame *game){
	int x=0;
	Rect from;
	if(m_visible){
		x=64*((m_frmcnt/30)%2);
		if(m_visible==1) from=BOUNDS(x,0,64,64);
		if(m_visible==9) from=BOUNDS(128,0,64,64);
		game->drawSprite(1,from,BOUNDS(m_px,m_py,64,64));
		++m_frmcnt;
	}
}

void Gaimon::moveAndCheck(Muscat &muscat){
	Rect hit=BOUNDS(m_px,m_py,64,64);
	
	switch(m_visible){
	case 1:
		--m_px;
		if(m_px+64<0){	//ガイモンが下手に見切れたらリセット
			m_px=640;
			muscat.m_visible=1;
		}else{
			if(checkRect(muscat.m_hitw, hit)){	//マーボーのダメージ
				muscat.m_visible=8;
			}else if(checkRect(muscat.m_hith, hit)){	//マーボーのポイント
				m_visible=9;
				m_frmcnt=1;
				muscat.m_vy*=-1;
			}
		}
		break;
	case 9:
		if(m_frmcnt>180){	//マーボーポイント時180フレームでリセット
			m_px=640;
			m_visible=1;
		}
		break;
	}
}

END_ILIB
