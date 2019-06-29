#pragma once

#include "enemy.h"

/* 敵の出現情報（物語）クラス */
struct enemy_order_t{
	//カウンタ、移動パターン、敵の種類
	int cnt,pattern,knd;
	//初期座標と移動スピード
	double x,y,sp;
	//弾幕開始時間、弾幕の種類、色、体力、弾の種類、停滞時間、アイテム(6種類)
	int bltime,blknd,col,hp,blknd2,wait,item_n[6];
};

class StoryObject: public EnemyObject{
protected:
	enemy_order_t enemy_order[_enemy::maxorder];
	
	bool load(){
		// エクセルから物語を読み込む
		File file("../dat/csv/13章/storyH0.csv");
		int i = 0;
		
		if(file.failed()){
			loaderrstr = "storyH00が読み込めませんでした";
			return false;
		}
		
		ZeroMemory(enemy_order, sizeof(enemy_order_t)*_enemy::maxorder);
		for(string str=file.gets(); !file.eof(); str=file.gets()){
			if(str[0] == '/' || str == "") continue;
			sscanf(~str, "%d,%d,%d,%lf,%lf,%lf,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
				&enemy_order[i].cnt, &enemy_order[i].pattern,
				&enemy_order[i].knd, &enemy_order[i].x,
				&enemy_order[i].y, &enemy_order[i].sp,
				&enemy_order[i].bltime, &enemy_order[i].blknd,
				&enemy_order[i].col, &enemy_order[i].hp,
				&enemy_order[i].blknd2, &enemy_order[i].wait,
				&enemy_order[i].item_n[0], &enemy_order[i].item_n[1],
				&enemy_order[i].item_n[2], &enemy_order[i].item_n[3],
				&enemy_order[i].item_n[4], &enemy_order[i].item_n[5]
			);
			++i;
		}
		return EnemyObject::load();
	}
	
	//空いている敵番号を検索
	int enemy_num_search(){
		for(int i=0; i<_enemy::max; ++i){//フラグのたって無いenemyを探す
			if(enemy[i].flag == 0) return i;//使用可能番号を返す
		}
		return -1;//全部埋まっていたらエラーを返す
	}
	
	// 敵情報登録
	void enter(){
		for(int t=0; t<_enemy::maxorder; ++t){
			if(enemy_order[t].cnt == _field::cnt){
				// 現在の瞬間がオーダーの瞬間ならば
				int i = enemy_num_search();
				
				if(i != -1){
					enemy[i].flag = 1;//フラグ
					enemy[i].cnt = 0;//カウンタ
					enemy[i].pattern = enemy_order[t].pattern;//移動パターン
					enemy[i].muki = 1;//向き
					enemy[i].knd = enemy_order[t].knd;//敵の種類
					enemy[i].x = enemy_order[t].x;//座標
					enemy[i].y = enemy_order[t].y;
					enemy[i].sp = enemy_order[t].sp;//スピード
					enemy[i].bltime = enemy_order[t].bltime;//弾の発射時間
					enemy[i].blknd = enemy_order[t].blknd;//弾幕の種類
					enemy[i].blknd2 = enemy_order[t].blknd2;//弾の種類
					enemy[i].col = enemy_order[t].col;//色
					enemy[i].wait = enemy_order[t].wait;//停滞時間
					enemy[i].hp = enemy_order[t].hp;//体力
					enemy[i].hp_max = enemy[i].hp;//体力最大値
					enemy[i].vx = 0;//水平成分の速度
					enemy[i].vy = 0;//鉛直成分の速度
					enemy[i].ang = 0;//角度
					for(int j=0; j<6; ++j)
						enemy[i].item_n[j] = enemy_order[t].item_n[j];//落とすアイテム
				}
			}
		}
	}
};
