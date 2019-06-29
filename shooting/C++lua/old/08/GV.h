#pragma once

#include <lily/dxlib.h>

#define _FieldMaxX 384
#define _FieldMaxY 448

#define _FieldX 32
#define _FieldY 16

struct Chara: public DxLibSprite{
	int flag;       //フラグ
	int cnt;        //カウンタ
	int power;      //パワー
	int point;      //ポイント
	int score;      //スコア
	int num;        //残機数
	int mutekicnt;  //無敵状態とカウント
	int shot_mode;  //ショットモード
	int money;      //お金
	int img;        //画像インデックス
	int slow;       //スローかどうか
	
	Chara(): flag(0), cnt(0), power(0), point(0), score(0), num(0),
		mutekicnt(0), shot_mode(0), money(0), img(0), slow(0) {}
	
	void draw(){
		DxLibSprite::draw(img);
	}
};

// ゲームメイン関数
function<void(DxLibEngine &)> g_mainFunc;

// 主人公
Chara img_ch[2];

// ボード
DxLibSprite img_board[40];

// キーパッド1の状態
int pad1[14];
