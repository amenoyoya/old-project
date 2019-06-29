#pragma once

#include "story.h"
#include "char.h"

// 弾に関する構造体
struct bullet_t{
	//フラグ、種類、カウンタ、色、状態、少なくとも消さない時間、エフェクトの種類
	int flag,knd,cnt,col,state,till,eff;
	//座標、角度、速度、ベースの角度、一時記憶スピード
	double x,y,angle,spd,base_angle[1],rem_spd[1];
};

//ショットに関する構造体
struct shot_t{
	//フラグ、種類、カウンタ、どの敵から発射されたかの番号
	int flag,knd,cnt,num;
	//ベース角度、ベーススピード
	double base_angle[1],base_spd[1];
	bullet_t bullet[_shot::maxbullet];
};

/* ショット可能な敵クラス */
class ShotEnemyObject: public StoryObject{
	dximg_t		img_bullet[10][10];
	dxsnd_t		sound_se[_se::max];
	int			se_flag[_se::max];
	shot_t		shot[_shot::max];
	// 弾幕パターン
	function<void(int)> shot_pattern[_shot::maxknd];
	
	void init(){
		EnemyObject::init();
		ZeroMemory(shot, sizeof(shot_t)*_shot::max);
	}
	
	bool load(){
		//弾画像のファイルを読み込む
		dximg_t::divopen(img_bullet[0], "../dat/img/bullet/b0.png", 5, 1, 76, 76);
		dximg_t::divopen(img_bullet[1], "../dat/img/bullet/b1.png", 6, 1, 22, 22);
		dximg_t::divopen(img_bullet[2], "../dat/img/bullet/b2.png", 10, 1, 5, 120);
		dximg_t::divopen(img_bullet[3], "../dat/img/bullet/b3.png", 5, 1, 19, 34);
		dximg_t::divopen(img_bullet[4], "../dat/img/bullet/b4.png", 10, 1, 38, 38);
		dximg_t::divopen(img_bullet[5], "../dat/img/bullet/b5.png", 3, 1, 14, 16);
		dximg_t::divopen(img_bullet[6], "../dat/img/bullet/b6.png", 3, 1, 14, 18);
		dximg_t::divopen(img_bullet[7], "../dat/img/bullet/b7.png", 9, 1, 16, 16);
		dximg_t::divopen(img_bullet[8], "../dat/img/bullet/b8.png", 10, 1, 12, 18);
		dximg_t::divopen(img_bullet[9], "../dat/img/bullet/b9.png", 3, 1, 13, 19);
		//敵のショット音を読み込む
		dxsnd_t::open(&sound_se[0], "../dat/se/enemy_shot.wav");
		return StoryObject::load();
	}
	
	// 弾幕エントリー
	void enter_shot(int i){
		if(enemy[i].bltime == enemy[i].cnt){
			for(int j=0; j<_shot::max; ++j){
				if(shot[j].flag == 0){// 未使用の弾幕データがあれば
					ZeroMemory(&shot[j], sizeof(shot_t));//初期化して登録
					shot[j].flag = 1;
					shot[j].knd = enemy[i].blknd;//弾の種類
					shot[j].cnt = 0;
					return;
				}
			}
		}
	}
	
	//n番目のショットを登録した敵と自機との角度を返す
	double shotatan2(int n){
		return atan2(charobj.ch.y-enemy[shot[n].num].y,
			charobj.ch.x-enemy[shot[n].num].x);
	}
	
	//空いている弾を探す
	int shot_search(int n){
		for(int i=0; i<_shot::maxbullet; ++i){
			if(shot[n].bullet[i].flag==0) return i;
		}
		return -1;
	}
	
	void shot_calc(int n){
		int max = 0;
		
		if(enemy[shot[n].num].flag != 1)//敵が倒されたら
			shot[n].flag = 2;//それ以上ショットを登録しないフラグに変える
		for(int i=0; i<_shot::maxbullet; ++i){//n番目の弾幕データの弾を計算
			if(shot[n].bullet[i].flag>0){//その弾が登録されていたら
				shot[n].bullet[i].x += cos(shot[n].bullet[i].angle)*shot[n].bullet[i].spd;
				shot[n].bullet[i].y += sin(shot[n].bullet[i].angle)*shot[n].bullet[i].spd;
				++shot[n].bullet[i].cnt;
				if(shot[n].bullet[i].x<-50 || shot[n].bullet[i].x>_field::maxw+50
					|| shot[n].bullet[i].y<-50 || shot[n].bullet[i].y>_field::maxh+50)
				{//画面から外れたら
					if(shot[n].bullet[i].till<shot[n].bullet[i].cnt)//最低消えない時間より長ければ
						shot[n].bullet[i].flag = 0;//消す
				}
			}
		}
		//現在表示中の弾が一つでもあるかどうか調べる
		for(int i=0; i<_shot::maxbullet; ++i)
			if(shot[n].bullet[i].flag>0) return;
		
		if(enemy[shot[n].num].flag != 1){
			shot[n].flag = 0;//終了
			enemy[shot[n].num].flag = 0;
		}
	}
	
	void shot_main(){
		for(int i=0; i<_shot::max; ++i){//弾幕データ計算
			//フラグが立っていて、設定した種類が間違っていなければ(オーバーフロー対策)
			if(shot[i].flag!=0 && 0<=shot[i].knd && shot[i].knd<_shot::maxknd){
				shot_pattern[shot[i].knd](i);//.kndの弾幕計算関数を呼ぶ関数ポインタ
				shot_calc(i);//i番目の弾幕を計算
				++shot[i].cnt;
			}
		}
	}
	
	bool draw(){
		shot_main();
		
		SetDrawMode(DX_DRAWMODE_BILINEAR);//線形補完描画
		for(int i=0; i<_shot::max; ++i){//敵の弾幕数分ループ
			if(shot[i].flag>0){//弾幕データがオンなら
				for(int j=0; j<_shot::maxbullet; ++j){//その弾幕が持つ弾の最大数分ループ
					if(shot[i].bullet[j].flag!=0){//弾データがオンなら
						if(shot[i].bullet[j].eff==1)
								SetDrawBlendMode(DX_BLENDMODE_ADD, 255);
						
						img_bullet[shot[i].bullet[j].knd][shot[i].bullet[j].col].rotadraw(
							shot[i].bullet[j].x+_field::x, shot[i].bullet[j].y+_field::y,
							1.0, shot[i].bullet[j].angle+PI/2);
						
						if(shot[i].bullet[j].eff==1)
							SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
					}
				}
			}
		}
		SetDrawMode(DX_DRAWMODE_NEAREST);//描画形式を戻す
		return EnemyObject::draw();
	}
public:
	ShotEnemyObject(){
		shot_pattern[0] = [this](int n){
			int k = -1;
			
			if(shot[n].cnt == 0){//弾幕が始まって0カウント目
				//敵が倒されていなくて、探した登録可能な弾番号が有効なら
				if(shot[n].flag != 2 && (k = shot_search(n)) != -1){
					shot[n].bullet[k].knd   =enemy[shot[n].num].blknd2;//弾の種類
					shot[n].bullet[k].angle =shotatan2(n);//角度
					shot[n].bullet[k].flag  =1;//フラグ
					shot[n].bullet[k].x	 =enemy[shot[n].num].x;//座標
					shot[n].bullet[k].y	 =enemy[shot[n].num].y;
					shot[n].bullet[k].col   =enemy[shot[n].num].col;//色
					shot[n].bullet[k].cnt   =0;//カウンタ
					shot[n].bullet[k].spd   =3;//スピード
					se_flag[0]=1;//弾の発射音フラグを立てる
				}
			}
		};
	}
}shotenemyobj;
