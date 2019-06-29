#pragma once

#include "engine.h"

class keyconf{
	static int keypadbtn(int key, int pad){
		if(GameApp::getjpad(pad)) return GameApp::getjpad(pad);
		return GameApp::getkey(key);
	}
	static int keypadleft(int key){
		if(GameApp::getjpadlx() < 0) return 1;
		return GameApp::getkey(key);
	}
	static int keypadright(int key){
		if(GameApp::getjpadlx() > 0) return 1;
		return GameApp::getkey(key);
	}
	static int keypadup(int key){
		if(GameApp::getjpadly() < 0) return 1;
		return GameApp::getkey(key);
	}
	static int keypaddown(int key){
		if(GameApp::getjpadly() > 0) return 1;
		return GameApp::getkey(key);
	}
public:
	/* キーコンフィグ */
	static int left(){
		return keypadleft(DIK_J);
	}
	static int right(){
		return keypadright(DIK_K);
	}
	static int up(){
		return keypadup(DIK_I);
	}
	static int down(){
		return keypaddown(DIK_M);
	}
	static int slow(){
		return keypadbtn(DIK_SPACE, 7);
	}
	static int end(){
		return keypadbtn(DIK_ESCAPE, 12);
	}
};
