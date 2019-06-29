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

	Mode_stat.flag_text  = OFF;		//テキスト表示は停止
	Mode_stat.flag_delay = ON;		//遅延フラグを ON にする → Mainloopでこのフラグを参照しています♪

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
	Mode_stat.flag_delay = OFF;

	return 0;
}

//------------------------------------------------------------
//	改行
//------------------------------------------------------------

int	Com_linefeed()
{
	//改行とは、表示位置を X → 行先頭に  Y → １段下にすること
	
	TEXT_X =  TEXT_AREA.left;

	TEXT_Y += TEXT_Y_PITCH;

	//※ここではまだ画面最下端を飛び出すところまでは想定していない
	/*	
	if( TEXT_Y > TEXT_AREA.bottom-TEXT_Y_PITCH ){
		本来、ここで「改ページ」処理を呼ぶ筈だが･･･まだ作ってない（汗 ^^;）
	}
	*/

	return 0;
}

//------------------------------------------------------------
//	カーソルブリンク
//------------------------------------------------------------

DWORD	cursor_timer;		//タイマー用変数
DWORD	cursor_wait = 200;	//何ミリ秒待つのか記憶しておく変数

int	Com_cursor_blink()
{
	//テキスト表示を停止する
	Mode_stat.flag_text = OFF;

	//カーソルブリンク用フラグを立てる
	Mode_stat.flag_cursor_blink = ON;

	//カーソルによって隠れる背景領域を待避しておく
	BitBlt(Parts_DC,50,0,25,25,Back_DC,TEXT_X,TEXT_Y,SRCCOPY);

	//タイマーショット
	HLS_timer_start( &cursor_timer );

	//１発目のカーソル表示
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,25,0,SRCAND  );	//AND
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC, 0,0,SRCPAINT);	//OR

	return 0;
}

int Com_cursor_blink_task()
{
	static int flag=OFF;

	//指定時間経過したか？ → していなければ Mainloop に戻る
	if( HLS_timer_check( cursor_timer, cursor_wait )==false )return 0;

	HLS_timer_start( &cursor_timer );	//次回に向けてのタイマーショット

	switch( flag ){
		case	ON:		//カーソル表示
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,25,0,SRCAND  );	//AND
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC, 0,0,SRCPAINT);	//OR
			flag = OFF;	//次回はOFF
			break;
		case	OFF:	//カーソル非表示
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,50,0,SRCCOPY);	//背景書き戻し
			flag = ON;	//次回はON
			break;
	}

	return 0;
}

int Com_cursor_blink_end()
{
	//テキスト表示再開
	Mode_stat.flag_text = ON;

	//カーソルブリンク用フラグを解除
	Mode_stat.flag_cursor_blink = OFF;

	//カーソルの背景部分を描き戻して終了する
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,50,0,SRCCOPY);	//背景書き戻し

	return 0;
}


//------------------------------------------------------------
//	終了
//------------------------------------------------------------

int	Com_halt()
{
	//テキスト表示を停止する
	Mode_stat.flag_text = OFF;

	//終了のループフラグを立てる
	Mode_stat.flag_halt = ON;

	return 0;
}

int Com_halt_task()
{
	return 0;	//なにもしない（^^;）･･･ただ待つだけ
}

int Com_halt_end()
{
	//MIDI演奏などしていたらここで停止する
		//今は何もない

	//終了
	PostQuitMessage(0);

	return 0;
}


//------------------------------------------------------------
//	改ページ① スクリプトコマンドとしての改ページ
//------------------------------------------------------------

int Com_page()
{
	//背景データでバックサーフェイスを書き換える
	BitBlt(Back_DC,0,0,640,480,BG_DC,0,0,SRCCOPY);

	//文字表示位置をテキストエリアの左肩にリセットする
	TEXT_X = TEXT_AREA.left;
	TEXT_Y = TEXT_AREA.top;

	return 0;
}

//------------------------------------------------------------
//	改ページ② ページ端に達してしまった場合の禁則処理
//------------------------------------------------------------

int Com_page2()
{
	//テキスト表示を停止する
	Mode_stat.flag_text = OFF;

	//改ページ用フラグを立てる
	Mode_stat.flag_page2 = ON;

	//カーソルによって隠れる背景領域を待避しておく
	BitBlt(Parts_DC,50,0,25,25,Back_DC,TEXT_X,TEXT_Y,SRCCOPY);

	//タイマーショット
	HLS_timer_start( &cursor_timer );	//カーソルブリンクのタイマー変数を拝借（^^）

	//１発目のカーソル表示
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,25,0,SRCAND  );	//AND
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC, 0,0,SRCPAINT);	//OR
	
	return 0;
}

int Com_page2_task()
{
	static int flag=OFF;

	//指定時間経過したか？ → していなければ Mainloop に戻る
	if( HLS_timer_check( cursor_timer, cursor_wait )==false )return 0;

	HLS_timer_start( &cursor_timer );	//次回に向けてのタイマーショット

	switch( flag ){
		case	ON:		//カーソル表示
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,25,0,SRCAND  );	//AND
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC, 0,0,SRCPAINT);	//OR
			flag = OFF;	//次回はOFF
			break;
		case	OFF:	//カーソル非表示
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,50,0,SRCCOPY);	//背景書き戻し
			flag = ON;	//次回はON
			break;
	}

	return 0;
}

int Com_page2_end()
{
	//テキスト表示フラグを戻す
	Mode_stat.flag_text = ON;

	//改ページ用フラグを解除
	Mode_stat.flag_page2 = OFF;

	//背景データでバックサーフェイスを書き換える
	BitBlt(Back_DC,0,0,640,480,BG_DC,0,0,SRCCOPY);

	//文字表示位置をテキストエリアの左肩にリセットする
	TEXT_X = TEXT_AREA.left;
	TEXT_Y = TEXT_AREA.top;

	return 0;
}


//end of file

