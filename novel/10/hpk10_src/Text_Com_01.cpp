//-----------------------------------------------------------------------------------------
//	Com_01.cpp	スクリプトコマンド：その１
//-----------------------------------------------------------------------------------------

#include	"BasicTips.h"
#include	"g_tool.h"
#include	"main.h"
#include	"TextEngine.h"
#include	<windows.h>

//------------------------------------------------------------
//	遅延
//------------------------------------------------------------

DWORD	delay_timer;	//タイマー用変数
DWORD	delay_wait;		//何ミリ秒待つのか記憶しておく変数

int Com_delay()
	//遅延処理のファーストショット。遅延タスクを
	//回すための準備をしておしまい
{
	//待ち時間を解析する
	delay_wait = kaiseki_10();	//※kaiseki_10()はテキスト中の10進数を解析する関数で、TextEngine.cppにあります

	flag_delay = ON;			//遅延フラグを ON にする → Mainloopでこのフラグを参照しています♪

	HLS_timer_start(&delay_timer);	//遅延のためのタイマーを撃つ

	return 0;
}

int Com_delay_task()
	//遅延処理のタスク部分。Mainloop() から延々と呼ばれ続ける
{
	//指定時間経過したか？ → していなければ何もせずに戻る（＝待ち続ける）
	if( HLS_timer_check( delay_timer,delay_wait)==false )return 0;
	
	//		↓
	//時間が経過したら以下の後始末をして完了♪
	//      ↓

	//遅延フラグを解除する（これで Mainloop()側で文字表示が可能になる）
	flag_delay = OFF;

	return 0;
}



//end of file

