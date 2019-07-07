#pragma once

#include <lily/dxlib.h>

#define _FieldMaxX 384
#define _FieldMaxY 448

#define _FieldX 32
#define _FieldY 16

struct char_t{
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
	double x, y;	//座標
};

// ゲームメイン関数
function<void(DxLibEngine &)> g_mainFunc;

// 主人公
DxLibSprite img_ch[2];
char_t ch;	// 主人公情報

// ボード
DxLibSprite img_board[40];

// キーパッド1の状態
int pad1[14];
