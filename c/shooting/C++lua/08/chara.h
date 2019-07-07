#pragma once

#include "stage.h"

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
	img_ch[0].DivOpen("../dat/img/char/0.png", 4, 3, 73, 73);
}

inline void InitChara(){
	ch.x = (double)field_max.x/2, ch.y = (double)field_max.y*3/4;
}

void CalcChara(){
	ch.img = (++ch.cnt%24)/6;
	if(key_Left()) ch.x -= 3;
	if(key_Right()) ch.x += 3;
}

void DrawChara(){
	CalcChara();
	ch_Draw();
}
