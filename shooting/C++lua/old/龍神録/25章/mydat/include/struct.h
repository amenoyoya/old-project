//キャラクターに関する構造体
typedef struct{
	int flag;		//フラグ
	int cnt;		//カウンタ
	int power;		//パワー
	int point;		//ポイント
	int score;		//スコア
	int num;		//残機数
	int mutekicnt;	//無敵状態とカウント
	int shot_mode;	//ショットモード
	int money;		//お金
	int img;
	int slow;		//スローかどうか
	double x,y;		//座標
	int shot_cnt;
}ch_t;

//敵に関する構造体
typedef struct{
	int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img,back_col;
	//フラグ、カウンタ、移動パターン、向き、敵の種類、HP最大値、落とすアイテム、背景色
	double x,y,vx,vy,sp,ang;
	//座標、速度x成分、速度y成分、スピード、角度
	int bltime,blknd,blknd2,col,state,wtime,wait;
	//弾幕開始時間、弾幕の種類、弾の種類、色、状態、待機時間、停滞時間
}enemy_t;

typedef struct{
	//カウンタ、移動パターン、敵の種類
	int cnt,pattern,knd;
	//初期座標と移動スピード
	double x,y,sp;
	//弾幕開始時間、弾幕の種類、色、体力、弾の種類、停滞時間、アイテム(6種類)
	int bltime,blknd,col,hp,blknd2,wait,item_n[6];
}enemy_order_t;

//パッドに関する構造体
typedef struct{
	int key[PAD_MAX];
}pad_t;

//コンフィグに関する構造体
typedef struct{
	int left,up,right,down,shot,bom,slow,start,change;
}configpad_t;

//弾に関する構造体
typedef struct{
//フラグ、種類、カウンタ、色、状態、少なくとも消さない時間、エフェクトの種類
	int flag,knd,cnt,col,state,till,eff;
//座標、角度、速度、ベースの角度、一時記憶スピード
	double x,y,angle,spd,base_angle[1],rem_spd[1];
}bullet_t;

//ショットに関する構造体
typedef struct{
//フラグ、種類、カウンタ、どの敵から発射されたかの番号、色
	int flag,knd,cnt,num;
//ベース角度、ベーススピード
	double base_angle[1],base_spd[1];
	bullet_t bullet[SHOT_BULLET_MAX];
}shot_t;

//ショットに関する構造体
typedef struct{
//フラグ、種類、カウンタ、どの敵から発射されたかの番号、色
	int flag,knd,cnt,num;
//ベース角度、ベーススピード
	double base_angle[1],base_spd[1];
	bullet_t bullet[BOSS_BULLET_MAX];
}boss_shot_t;

//キャラクターショットに関する構造体
typedef struct{
	int flag,power,cnt,knd;
	double x,y,angle,spd;
}cshot_t;
//エフェクト
typedef struct{
	int flag,cnt,col,knd,img,eff;
	double x,y,r,ang,spd,mvang,brt;
}effect_t;
//消滅エフェクト
typedef struct{
	int flag,cnt,col;
	double x,y;
}del_effect_t;
//弾の情報
typedef struct{
	int size_x,size_y,col_num;
	double range;
}bullet_info_t;
//ボムの情報
typedef struct{
	int flag,cnt,knd;
	double x,y;
}bom_t;
//画面の明るさ情報
typedef struct{
	unsigned char brt;
}bright_set_t;
//ドン！と揺れる画面の情報
typedef struct{
	int flag,cnt,time,size;
	int x,y;
}dn_t;

typedef struct{
	int flag,cnt,set_t;
	double ax,v0x,ay,v0y,vx,vy,prex,prey;
}phy_t;
//ボスの情報
typedef struct{
	int flag,cnt,knd,wtime,state,endtime,hagoromo,graph_flag;
	int hp,hp_max;
	int appear_count[2],set_hp[DANMAKU_MAX],back_knd[DANMAKU_MAX];
	double x,y,ang,spd;
	phy_t phy;
}boss_t;
