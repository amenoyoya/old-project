#pragma once

#include "gv.h"

/* 敵クラス */
struct enemy_t{
	//フラグ、カウンタ、移動パターン、向き、敵の種類、HP最大値、落とすアイテム、画像
	int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img;
	//座標、速度x成分、速度y成分、スピード、角度
	double x,y,vx,vy,sp,ang;
	//弾幕開始時間、弾幕の種類、弾の種類、色、状態、待機時間、停滞時間
	int bltime,blknd,blknd2,col,state,wtime,wait;
};

class EnemyObject: public GameObject{
protected:
	enemy_t					enemy[_enemy::max];
	dximg_t					img_enemy[3][9]; // 敵画像9枚分×3体分
	function<void(int)>		move_pattern[1]; // 移動パターン
	
	void init(){
		ZeroMemory(enemy, sizeof(enemy_t)*_enemy::max);
	}
	
	bool load(){
		return dximg_t::divopen(img_enemy[0],
			"../dat/img/enemy/0.png", 3, 3, 32, 32);
	}
	
	// 敵エントリー
	virtual void enter(){
		// 登録
		if(_field::cnt == 100){
			enemy[0].cnt = 0;
			enemy[0].muki = 1;
			enemy[0].flag = 1;
			enemy[0].bltime = 150;
			enemy[0].hp = 1000;
			enemy[0].hp_max = 1000;
			enemy[0].pattern = 0;
			enemy[0].x = _field::maxw/2;
			enemy[0].y = -20;
		}
	}
	
	void move(){
		// 行動制御
		for(int i=0; i<_enemy::max; ++i){
			if(enemy[i].flag == 1){//その敵のフラグがオンになってたら
				move_pattern[enemy[i].pattern](i);
				++enemy[i].cnt;
				enemy[i].x += cos(enemy[i].ang)*enemy[i].sp;
				enemy[i].y += sin(enemy[i].ang)*enemy[i].sp;
				enemy[i].x += enemy[i].vx;
				enemy[i].y += enemy[i].vy;
				enemy[i].img = enemy[i].muki*3+(enemy[i].cnt%18)/6;
				//敵が画面から外れたら消す
				if(enemy[i].x<-50 || _field::maxw+50<enemy[i].x
					|| enemy[i].y<-50 || _field::maxh+50<enemy[i].y)
				{
					enemy[i].flag = 0;
				}
			}
		}
	}
	
	bool draw(){
		enter(), move();
		for(int i=0; i<_enemy::max; ++i){
			if(enemy[i].flag == 1){
				img_enemy[0][enemy[i].img].rotadraw(
					enemy[i].x+_field::x, enemy[i].y+_field::y, 1, 0);
			}
		}
		return true;
	}
public:
	EnemyObject(){
		move_pattern[0] = [this](int i){
			int t = enemy[i].cnt;
			
			if(t == 0) enemy[i].vy = 2;//下がってくる
			if(t == 60) enemy[i].vy = 0;//止まる
			if(t == 60+enemy[i].wait)//登録された時間だけ停滞して
				enemy[i].vy = -2;//上がっていく
		};
	}
};
