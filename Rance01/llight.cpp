#include "lib.gin.h"

WNDPROC gWndProc = NULL;

LRESULT CALLBACK wndproc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp){
	if(msg == WM_CLOSE){
		if(IDYES == iolib::msgbox("�I�����܂���?", "�m�F",
			MB_YESNO|MB_ICONQUESTION, GameApp::thiswin()))
		{
			PostQuitMessage(0);
		}else{
			return 0;
		}
	}
	return CallWindowProc(gWndProc, hwnd, msg, wp, lp);
}

struct App: public GameApp{
	DxSound		title_bgm;
	DxImage		img_title_effect[6];
	Sprite		title_effect, title_logo;
	
	void dxinit(){
		title = "LunaLight-- Rance01�`�������߂ā` --";
		
		GameSystem::globalscene = [this](){
			if(getkey(DIK_ESCAPE) == 1){
				PostMessage(thiswin(), WM_CLOSE, 0, 0);
			}
		};
		
		GameSystem::addscene([this]()->bool{
			gWndProc = (WNDPROC)GetWindowLong(thiswin(), GWL_WNDPROC);
			SetWindowLong(thiswin(), GWL_WNDPROC, (LONG)wndproc);
			return true;
		});
		// ���S�\��
		GameSystem::addscene([this]()->bool{
			for(int i=0; i<6; ++i){
				img_title_effect[i].open(
					strlib::format("dat/title/%d.png", i)
				);
			}
			title_bgm.open("dat/title/bgm.ogg");
			title_logo.open("dat/title/logo.png");
			title_logo.x = title_logo.y = 1;
			title_effect.y = 30;
			title_effect.zorder = 1;
			
			return DxImage::playmovie("dat/mov/logo.wmv", 1,
				DX_MOVIEPLAYTYPE_BCANCEL);
		});
		// �^�C�g��
		GameSystem::addscene([this]()->bool{
			title_bgm.play(DX_PLAYTYPE_LOOP);
			return true;
		});
		GameSystem::addscene([this]()->bool{
			title_effect.setimage(
				img_title_effect[(title_effect.cnt/7)%6]
			);
			return false;
		});
	}
}app;
