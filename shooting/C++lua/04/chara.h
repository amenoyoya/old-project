#pragma once

#include "core.h"

//キャラクターに関する構造体
struct ch_t{
	int flag;       //フラグ
	int cnt;        //カウンタ
	int power;      //パワー
	int point;      //ポイント
	int score;      //スコア
	int num;        //残機数
	int mutekicnt;  //無敵状態とカウント
	int shot_mode;  //ショットモード
	int money;      //お金
	int img;        //画像
	int slow;       //スローかどうか
	double x,y;     //座標
};

// キャラクター画像(変身用に2つ用意)
DxSprite	img_ch[2];
ch_t		ch = {0};

// キャラ描画基本関数
void ch_Draw(){
	img_ch[0].SetPos(ch.x, ch.y);
	img_ch[0].draw(ch.img);
}

inline void LoadChara(){
	gWin.CreateDivSprite(&img_ch[0], "../dat/img/char/0.png", 4, 3, 73, 73);
}

inline void DrawChara(){
	ch_Draw();
}
