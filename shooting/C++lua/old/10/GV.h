#pragma once

#include <lily/dxlib.h>

#define _FieldMaxX 384
#define _FieldMaxY 448

#define _FieldX 32
#define _FieldY 16

// 主人公に関する構造体
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

//敵に関する構造体
struct enemy_t{
	//フラグ、カウンタ、移動パターン、向き、敵の種類、HP最大値、落とすアイテム、画像
	int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img;
	//座標、速度x成分、速度y成分、スピード、角度
	double x,y,vx,vy,sp,ang;
	//弾幕開始時間、弾幕の種類、弾の種類、色、状態、待機時間、停滞時間
	int bltime,blknd,blknd2,col,state,wtime,wait;
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

// 敵
#define _EnemyMax 30

int stage_count = 1;	// ゲームカウンタ（敵の出現タイミング）
DxLibSprite img_enemy[3];	// 3体分
enemy_t enemy[_EnemyMax];
