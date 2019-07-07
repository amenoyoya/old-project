#pragma once

#include "stage.h"

//キャラクターに関する構造体
struct ch_t{
	int flag;	   //フラグ
	int cnt;		//カウンタ
	int power;	  //パワー
	int point;	  //ポイント
	int score;	  //スコア
	int num;		//残機数
	int mutekicnt;  //無敵状態とカウント
	int shot_mode;  //ショットモード
	int money;	  //お金
	int img;		//画像
	int slow;	   //スローかどうか
	double x,y;	 //座標
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
	img_ch[0].DivOpen(gWin.device(), "../dat/img/char/0.png", 4, 3, 73, 73);
}

inline void InitChara(){
	ch.x = (double)field_max.x/2, ch.y = (double)field_max.y*3/4;
}

void CalcChara(){
	// 画像変化
	ch.img = (++ch.cnt%24)/6;
	
	// 移動
	bool sayu_flag = false, joge_flag = false, slow_flag = false;
	double x = 0, y = 0, mx = 0, my = 0, naname = 1;
	double move_x[4]={-4.0,4.0,0,0},move_y[4]={0,0,4.0,-4.0};//{左,右,下,上}のスピード
	char inputpad[4];
	
	inputpad[0] = key_Left(), inputpad[1] = key_Right(),
	inputpad[2] = key_Down(), inputpad[3] = key_Up();
	
	if(key_Slow()) slow_flag = true;
	
	if(key_Left())//左キーが押されていたら
			ch.img += 4*2;//画像を左向きに
	else if(key_Right())//右キーが押されていたら
			ch.img += 4*1;//画像を右向きに

	for(int i=0; i<2; ++i)//左右分
		if(inputpad[i])//左右どちらかの入力があれば
			sayu_flag = true;//左右入力フラグを立てる
	for(int i=2; i<4; ++i)//上下分
		if(inputpad[i])//上下どちらかの入力があれば
			joge_flag = true;//上下入力フラグを立てる
	if(sayu_flag && joge_flag)//左右、上下両方の入力があれば斜めだと言う事
		naname = sqrt(2.0);//移動スピードを1/ルート2に
	
	for(int i=0; i<4; ++i){//4方向分ループ
		if(inputpad[i]){//i方向のキーボード、パッドどちらかの入力があれば
			x = ch.x , y = ch.y;//今の座標をとりあえずx,yに格納
			//移動分をmx,myに代入(低速移動モードならスピード3分の1)
			mx = slow_flag? move_x[i]/3: move_x[i];
			my = slow_flag? move_y[i]/3: move_y[i];
			
			x += mx/naname , y += my/naname;//今の座標と移動分を足す
			if(!(x<10 || x>field_max.x-10 || y<5 || y>field_max.y-5)){
				//計算結果移動可能範囲内なら
				ch.x = x , ch.y = y;//実際に移動させる
			}
		}
	}
}

void DrawChara(){
	CalcChara();
	ch_Draw();
}
