#pragma once

#include "gv.h"
#include "keyconf.h"
#include <math.h>

/* キャラクタークラス */
struct ch_t{
	bool flag, slow;		// フラグ// スローかどうか
	int cnt, power,			// カウンタ// パワー
		point, score,		// ポイント// スコア
		num, mutekicnt,		// 残機数// 無敵状態とカウント
		shot_mode, money,	// ショットモード//お金
		img;				// 画像インデックス
	double x, y;			// 座標
};

class CharObject: public GameObject {
	ch_t		ch;
	dximg_t		img_ch[2][12];
	
	void init(){
		ZeroMemory(&ch, sizeof(ch));
		ch.x = _field::maxw/2, ch.y = _field::maxh*3/4;
	}
	
	bool load(){
		if(!dximg_t::divopen(img_ch[0], "../dat/img/char/0.png",
			4, 3, 73, 73))
		{
			loaderrstr = "キャラクター画像の読み込みに失敗しました";
			return false;
		}
		return true;
	}
	
	void move(){
		bool sayu_flag = false, joge_flag = false;
		double x, y, mx, my, naname = 1;
		double move_x[4] = {-4.0, 4.0, 0, 0},
			move_y[4] = {0, 0, 4.0, -4.0};//{左,右,下,上}のスピード
		int inputpad[4];
		
		inputpad[0] = keyconf::left();
		inputpad[1] = keyconf::right();
		inputpad[2] = keyconf::down();
		inputpad[3] = keyconf::up();
		
		ch.img = (++ch.cnt % 24)/6;
		
		if(inputpad[0])//左キーが押されていたら
			ch.img += 4*2;//画像を左向きに
		else if(inputpad[1])//右キーが押されていたら
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
				mx = move_x[i], my = move_y[i];//移動分をmx,myに代入
				if(keyconf::slow()){//低速移動なら
					mx = move_x[i]/3, my = move_y[i]/3;//移動スピードを1/3に
				}
				x += mx/naname , y += my/naname;//今の座標と移動分を足す
				if(!(x < 10 || x > _field::maxw-10 ||
					y < 5 || y > _field::maxh-5))
				{//計算結果移動可能範囲内なら
					ch.x = x , ch.y = y;//実際に移動させる
				}
			}
		}
	}
	
	bool draw(){
		move();
		return img_ch[0][ch.img].rotadraw(
			ch.x+_field::x, ch.y+_field::y, 1, 0) && !keyconf::end();
	}
};
