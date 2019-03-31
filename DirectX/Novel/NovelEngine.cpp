#include <el_core.hpp>
#include <el_d3d9.hpp>

class NovelEngine{
private:
	DxFont m_font;
	Timer m_timer;
	tstring m_text;
public:
	bool set(LPDIRECT3DDEVICE9 d3ddev, LPCTSTR text){
		if(!m_font.create(d3ddev,32)) return false;
		m_text = text;
		m_timer.start();
		return true;
	}
	
	bool run(){
		static int pos=0, len=0;
		
		if(!m_font.draw(10,10,m_text,len,D3DCOLOR_XRGB(200,200,255),
				DT_LEFT|DT_NOCLIP|DT_WORDBREAK)) return false;
		
		if(m_text[pos]==EOF || m_text[pos]=='\0') return true;
		if(!m_timer.check(100)) return true;
		
		if((unsigned char)m_text[pos] < 0x80){
			len = pos+1;
			++pos;
		}else{
			len = pos+2;
			pos+=2;
		}
		m_timer.start();
		return true;
	}
};

int EL_WinMain(){
	DxWindow win;
	NovelEngine engine;
	
	if(!win.open("dxwin","‚Ì‚×‚é‚°`‚Þ",50,50,640,480)){
		msgBox("failed to create DxWindow.");
		return 1;
	}
	engine.set(win,"‚±‚ñ‚É‚¿‚ÍAŽ„‚Ì¢ŠE!!\n‚Í‚Í‚Í‚Í‚Á!");
	while(win.processMessage()){
		engine.run();
	}
	return 0;
}
