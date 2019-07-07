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
	function<void(int)>		move_pattern[11]; // 移動パターン
	
	void init(){
		ZeroMemory(enemy, sizeof(enemy_t)*_enemy::max);
	}
	
	bool load(){
		return dximg_t::divopen(img_enemy[0],
			"../dat/img/enemy/0.png", 3, 3, 32, 32);
	}
	
	// 敵エントリー
	virtual void enter(){}
	
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
	
	// -ang～angまでのランダムな角度を返す
	static double rang(double ang){
		return (-ang + ang*2*mathlib::rand(10000)/10000.0);
	}
public:
	EnemyObject(){
		// 移動パターン0
		// 下がってきて停滞して上がっていく
		move_pattern[0] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 3;//下がってくる
			if(t == 40) enemy[i].vy = 0;//止まる
			if(t == 40+enemy[i].wait)//登録された時間だけ停滞して
				enemy[i].vy = -3;//上がっていく
		};
		
		//移動パターン1
		//下がってきて停滞して左下に行く
		move_pattern[1] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 3;//下がってくる
			if(t == 40) enemy[i].vy = 0;//止まる
			if(t == 40+enemy[i].wait){//登録された時間だけ停滞して
				enemy[i].vx = -1;//左へ
				enemy[i].vy = 2;//下がっていく
				enemy[i].muki = 0;//左向きセット
			}
		};
		
		//移動パターン2
		//下がってきて停滞して右下に行く
		move_pattern[2] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 3;//下がってくる
			if(t == 40) enemy[i].vy = 0;//止まる
			if(t == 40+enemy[i].wait){//登録された時間だけ停滞して
				enemy[i].vx = 1;//右へ
				enemy[i].vy = 2;//下がっていく
				enemy[i].muki = 2;//右向きセット
			}
		};
		
		//行動パターン3
		//すばやく降りてきて左へ
		move_pattern[3] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 5;//下がってくる
			if(t == 30){//途中で左向きに
				enemy[i].muki = 0;
			}
			if(t < 100){
				enemy[i].vx -= 5/100.0;//左向き加速
				enemy[i].vy -= 5/100.0;//減速
			}
		};
		
		//行動パターン4
		//すばやく降りてきて右へ
		move_pattern[4] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 5;//下がってくる
			if(t == 30){//途中で右向きに
				enemy[i].muki = 2;
			}
			if(t < 100){
				enemy[i].vx += 5/100.0;//右向き加速
				enemy[i].vy -= 5/100.0;//減速
			}
		};
		
		//行動パターン5
		//斜め左下へ
		move_pattern[5] = [this](int i){
			int t=enemy[i].cnt;
			if(t==0){
				enemy[i].vx-=1;
				enemy[i].vy=2;
				enemy[i].muki=0;
			}
		};
		
		//行動パターン6
		//斜め右下へ
		move_pattern[6] = [this](int i){
			int t=enemy[i].cnt;
			if(t==0){
				enemy[i].vx+=1;
				enemy[i].vy=2;
				enemy[i].muki=2;
			}
		};
		
		//移動パターン7
		//停滞してそのまま左上に
		move_pattern[7] = [this](int i){
			int t=enemy[i].cnt;
			if(t==enemy[i].wait){//登録された時間だけ停滞して
				enemy[i].vx=-0.7;//左へ
				enemy[i].vy=-0.3;//上がっていく
				enemy[i].muki=0;//左向き
			}
		};
		
		//移動パターン8
		//停滞してそのまま右上に
		move_pattern[8] = [this](int i){
			int t=enemy[i].cnt;
			if(t==enemy[i].wait){//登録された時間だけ停滞して
				enemy[i].vx=+0.7;//右へ
				enemy[i].vy=-0.3;//上がっていく
				enemy[i].muki=2;//右向き
			}
		};
		
		//移動パターン9
		//停滞してそのまま上に
		move_pattern[9] = [this](int i){
			int t=enemy[i].cnt;
			if(t==enemy[i].wait)//登録された時間だけ停滞して
				enemy[i].vy=-1;//上がっていく
		};
		
		//移動パターン10
		//下がってきてウロウロして上がっていく
		move_pattern[10] = [this](int i){
			int t=enemy[i].cnt;
			if(t==0) enemy[i].vy=4;//下がってくる
			if(t==40)enemy[i].vy=0;//止まる
			if(t>=40){
				if(t%60==0){
					int r=cos(enemy[i].ang)< 0 ? 0 : 1;
					enemy[i].sp=6+rang(2);
					enemy[i].ang=rang(PI/4)+PI*r;
					enemy[i].muki=2-2*r;
				}
				enemy[i].sp*=0.95;
			}
			if(t>=40+enemy[i].wait){
				enemy[i].vy-=0.05;
			}
		};
	}
};
