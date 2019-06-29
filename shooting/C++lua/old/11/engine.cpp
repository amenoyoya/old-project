#include "engine.h"
#include <cmath>

// 初期化
void first_ini(DxLibEngine &){
	memset(&ch, 0, sizeof(char_t));
	ch.x = _FieldMaxX/2, ch.y = _FieldMaxY*3/4;
	memset(enemy, 0, sizeof(enemy_t)*_EnemyMax);
	g_mainFunc = load;
}

// 画像ロード
void load(DxLibEngine &){
	img_board[10].load("../dat/img/board/10.png");
	img_board[11].load("../dat/img/board/11.png");
	img_board[12].load("../dat/img/board/12.png");
	img_board[20].load("../dat/img/board/20.png");
	img_ch[0].load("../dat/img/char/0.png", 73, 73, 4, 3);
	img_enemy[0].load("../dat/img/enemy/0.png", 32, 32, 3, 3);
	g_mainFunc = load_story;
}

// ストーリーロード
void load_story(DxLibEngine &){
	File file("../dat/csv/storyH00.csv");
	
	if(file.failed()){
		printfDx("story load error\n");
		return;
	}
	for(string str=file.gets(); !file.eof(); str=file.gets()){
		static int n = 0;
		
		// 空行やコメント行は無視
		if(str == "" || str[0] == '/') continue;
		
		m4_define([:lily_Load:], [:sscanf(str.c_str(),
			"%d,%d,%d,%lf,%lf,%lf,"
			"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
			&$1.cnt, &$1.pattern, &$1.knd, &$1.x, &$1.y, &$1.sp,
			&$1.bltime, &$1.blknd, &$1.col, &$1.hp, &$1.blknd2,
			&$1.wait, &$1.item_n[0], &$1.item_n[1], &$1.item_n[2],
			&$1.item_n[3], &$1.item_n[4], &$1.item_n[5])
		:])
		lily_Load(enemy_order[n]);
		m4_undefine([:lily_Load:])
		++n;
	}
	g_mainFunc = graph_main;
}

// 表示する主人公画像を計算
inline void calc_ch(){
	ch.img = ((++ch.cnt)%24)/6;
}

// キャラ移動制御
void move_ch(DxLibEngine &dx){
	double naname=1, x=0, y=0, mx=0, my=0,
		move_x[4]={-4.0, 4.0, 0, 0},
		move_y[4]={0, 0, 4.0, -4.0};//{左,右,下,上}のスピード
	bool inputpad[4], sayu_flag=false, joge_flag=false;;
	
	inputpad[0] = _InputLeft(dx);
	inputpad[1] = _InputRight(dx);
	inputpad[2] = _InputDown(dx);
	inputpad[3] = _InputUp(dx);
	
	if(_InputLeft(dx))//左キーが押されていたら
		ch.img += 4*2;//画像を左向きに
	else if(_InputRight(dx))//右キーが押されていたら
		ch.img += 4*1;//画像を右向きに

	for(int i=0; i<2; ++i){
		//左右分
		if(inputpad[i]) //左右どちらかの入力があれば
			sayu_flag = true;//左右入力フラグを立てる
	}
	for(int i=2; i<4; ++i){
		//上下分
		if(inputpad[i])//上下どちらかの入力があれば
			joge_flag = true;//上下入力フラグを立てる
	}
	if(sayu_flag && joge_flag)//左右、上下両方の入力があれば斜めだと言う事
		naname = sqrt(2.0);//移動スピードを1/ルート2に
	
	for(int i=0; i<4; ++i){
		//4方向分ループ
		if(inputpad[i]){
			//i方向のキーボード、パッドどちらかの入力があれば
			x = ch.x, y = ch.y;// 現在座標取得
			mx = move_x[i], my = move_y[i];//移動分を代入
			if(_InputSlow(dx)){
				//低速移動なら移動スピードを1/3に
				mx=move_x[i]/3, my=move_y[i]/3;
			}
			x+=mx/naname, y+=my/naname;//今の座標と移動分を足す
			if(!(x<10 || x>_FieldMaxX-10 || y<5 || y>_FieldMaxY-5)){
				//計算結果移動可能範囲内なら移動
				ch.x = x, ch.y = y;
			}
		}
	}
}

// キャラ描画
void graph_ch(DxLibEngine &dx){
	calc_ch();
	move_ch(dx);
	img_ch[0].draw(ch.x, ch.y, ch.img);
}

// ボード描画
void graph_board(){
	img_board[10].draw(0, 0);
	img_board[11].draw(0, 16);
	img_board[12].draw(0, 464);
	img_board[20].draw(416, 0);
}

//敵の移動パターン0での移動制御
void enemy_pattern0(int i){
	int t = enemy[i].cnt;
	
	if(t==0) enemy[i].vy=2;//下がってくる
	if(t==60) enemy[i].vy=0;//止まる
	if(t==60+enemy[i].wait)//登録された時間だけ停滞して
		enemy[i].vy=-2;//上がっていく
}

//空いている敵番号を検索
int enemy_num_search(){
	for(int i=0; i<_EnemyMax; ++i){
		//フラグのたって無いenemyを探す
		if(enemy[i].flag == 0) return i;
	}
	return -1;//全部埋まっていたらエラーを返す
}

//敵データの登録
void enter_enemy(){
	for(int t=0; t<_EnemyOrderMax; ++t){
		if(enemy_order[t].cnt == stage_count){
			//現在の瞬間がオーダーの瞬間なら
			int i = 0;
			
			if((i = enemy_num_search()) != -1){
				enemy[i].flag   =1;//フラグ
				enemy[i].cnt    =0;//カウンタ
				enemy[i].pattern=enemy_order[t].pattern;//移動パターン
				enemy[i].muki   =1;//向き
				enemy[i].knd    =enemy_order[t].knd;//敵の種類
				enemy[i].x      =enemy_order[t].x;//座標
				enemy[i].y      =enemy_order[t].y;
				enemy[i].sp     =enemy_order[t].sp;//スピード
				enemy[i].bltime =enemy_order[t].bltime;//弾の発射時間
				enemy[i].blknd  =enemy_order[t].blknd;//弾幕の種類
				enemy[i].blknd2 =enemy_order[t].blknd2;//弾の種類
				enemy[i].col    =enemy_order[t].col;//色
				enemy[i].wait   =enemy_order[t].wait;//停滞時間
				enemy[i].hp     =enemy_order[t].hp;//体力
				enemy[i].hp_max =enemy[i].hp;//体力最大値
				enemy[i].vx     =0;//水平成分の速度
				enemy[i].vy     =0;//鉛直成分の速度
				enemy[i].ang    =0;//角度
				for(int j=0; j<6; ++j){
					//落とすアイテム
					enemy[i].item_n[j] = enemy_order[t].item_n[j];
				}
			}
		}
	}
}

//敵の行動制御
void act_enemy(){
	for(int i=0;i<_EnemyMax; ++i){
		if(enemy[i].flag==1){//その敵のフラグがオンになってたら
			enemy_pattern0(i);
			enemy[i].x += cos(enemy[i].ang)*enemy[i].sp;
			enemy[i].y += sin(enemy[i].ang)*enemy[i].sp;
			enemy[i].x += enemy[i].vx;
			enemy[i].y += enemy[i].vy;
			enemy[i].cnt++;
			enemy[i].img = enemy[i].muki*3+(enemy[i].cnt%18)/6;
			//敵が画面から外れたら消す
			if(enemy[i].x<-50 || _FieldMaxX+50<enemy[i].x
				|| enemy[i].y<-50 || _FieldMaxY+50<enemy[i].y)
			{
				enemy[i].flag = 0;
			}
		}
	}
}

// 敵描画
void graph_enemy(){
	enter_enemy();
	act_enemy();
	for(int i=0; i<_EnemyMax; ++i){
		if(enemy[i].flag==1){
			img_enemy[0].draw(enemy[i].x+_FieldX,
				enemy[i].y+_FieldY, enemy[i].img);
		}
	}
}

// 画像描画メイン
void graph_main(DxLibEngine &dx){
	graph_enemy();
	graph_ch(dx);
	graph_board();
	++stage_count;
}
