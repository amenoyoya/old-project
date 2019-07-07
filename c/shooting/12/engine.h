#pragma once

/* 基本ゲームオブジェクト */
struct GameObject{
	string loaderrstr;
	
	virtual void init(){}
	virtual bool load(){return true;}
	virtual bool draw(){return true;}
	
	GameObject(): loaderrstr("ロードに失敗しました") {}
};

/* ゲームアプリケーションクラス */
class GameApp: public DxLibApp{
	vector<GameObject*> m_gObjArray;
	
	void dxmain(){
		for(auto it=m_gObjArray.begin(); it!=m_gObjArray.end(); ++it){
			if(!(*it)->load()){
				iolib::msgbox((*it)->loaderrstr, "エラー",
					MB_OK|MB_ICONWARNING, thiswin());
				return;
			}
			(*it)->init();
		}
		while(procscene()){
			for(auto it=m_gObjArray.begin(); it!=m_gObjArray.end(); ++it){
				if(!(*it)->draw()) return;
			}
		}
	}
protected:
	void registobj(GameObject *obj){
		m_gObjArray.push_back(obj);
	}
};
