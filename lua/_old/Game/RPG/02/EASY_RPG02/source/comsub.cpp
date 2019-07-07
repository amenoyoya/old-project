//----------------------------------------------------------------------
//	ちょー簡単ＲＰＧ（ＲＰＧ講座初級編）	共通関数
//----------------------------------------------------------------------
//		作った人：ソフト屋 巣 http://softyasu.net/
//----------------------------------------------------------------------


#include <DxLib.h>
#include <assert.h>

#include "main.h"
#include "comsub.h"


//----------------------------------------------------------------------
//	定数
//----------------------------------------------------------------------


//----------------------------------------------------------------------
//	変数
//----------------------------------------------------------------------




//----------------------------------------------------------------------
//	中央に文字を出す。
//----------------------------------------------------------------------
void CenterDrawString( char *str, int fontsize, int y, int color )
{
	SetFontSize( fontsize );									//文字の大きさ
	int StrSizeX = GetDrawStringWidth(str,(int)strlen(str));	//文字表示の幅を得る。
	DrawString( (SCREEN_X-StrSizeX)/2, y, str, color );			//センターに表示
}


//----------------------------------------------------------------------
//	ＦＰＳを一定にする。
//----------------------------------------------------------------------
void WaitFpsConstant(int fps)
{
	static int beforeTime=0;	//前回の時間。

 	//	fpsの範囲外をチェック
 	assert(fps<=100);
 	assert(fps>0);
 	
	//	前回からの経過時間。
	int elapsedTime = GetNowCount() - beforeTime;
	
	//	ＦＰＳから余った時間を計算する。
	int oneFrame = 1000 / fps;
	if( (oneFrame-elapsedTime) > 0 ) {
		//	余りがあれば、一定時間を待つ。
		Sleep(oneFrame-elapsedTime);
	}
	//	今回の時間を記録
	beforeTime=GetNowCount();
}


//----------------------------------------------------------------------
//	ＦＰＳの表示
//----------------------------------------------------------------------
void DrawFps(int fps)
{
	static int beforeTime=0,aveTime=0,frameTime[100],count=0;
 
 	//	fpsの範囲外をチェック
 	assert(fps<=100);
 	assert(fps>0);
 
 	//	フレームあたりの時間を記録。
 	if( count==0 ) {
		frameTime[count%fps] = 0;
	} else {
		frameTime[count%fps] = GetNowCount()-beforeTime;
	}
	beforeTime=GetNowCount();
 	count++;	
	
	//	最後のフレーム
	if((count%fps) == (fps-1) ){
		//	平均フレーム時間を計算する。
		aveTime=0;
		for(int i=0;i<fps;i++) {
			aveTime+=frameTime[i];
		}
		aveTime /= fps;
	}
	//	平均フレーム時間が求まっていたら表示する。
	if(aveTime!=0){
		SetFontSize( 14 );//文字の大きさ
		DrawFormatString(0, 0,GetColor(255,255,255),"%.1fFPS",1000.0/(double)aveTime);
		DrawFormatString(0,20,GetColor(255,255,255),"%dms"	,aveTime);
	}
}











