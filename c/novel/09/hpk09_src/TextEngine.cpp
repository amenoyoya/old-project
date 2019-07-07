//-----------------------------------------------------------------------------------------
//	TexitEngine.cpp
//-----------------------------------------------------------------------------------------

#include	"BasicTips.h"
#include	"g_tool.h"
#include	<windows.h>

extern HWND hwnd;

//###################################################################
//	ＴＥＸＴエンジン
//###################################################################

//  ■ うんちく♪
//	SHIFT JIS コードは、第１バイトが 80h 以上である。	
//	{ } / ; 等のシナリオファイル制御文字は、すべて		
//	80h 未満のコードであるので、全角文字と競合する場合は
//	必ず第２バイトとぶつかることになる。 したがって、	
//	それが半角文字か全角文字かの判定は、{ } / ; 等を	
//	見つけた場合その直前の１バイトが 80h 以上かどうか	
//	で行なうことができる。80h以上なら全角、80h以下なら	
//	半角文字で制御対象となる。	

#define			SIZE_OF_TEXT_BUF 0xffff		//64KBもあればバッファとしては充分でしょう

unsigned char	TEXT_BUF[SIZE_OF_TEXT_BUF];	//スクリプトを読み込むエリア

unsigned char	*TEXT;	//Text pointer（テキスト解釈位置をポイントします）

int		Font_Size;	//フォントサイズ

int		TEXT_WAIT;		//１文字表示のウェイト
RECT	TEXT_AREA;		//テキストを展開する画面領域
int		TEXT_X;			//現在の表示位置Ｘ
int		TEXT_Y;			//現在の表示位置Ｙ
int		TEXT_X_PITCH;	//文字送りピッチＸ
int		TEXT_Y_PITCH;	//文字送りピッチＹ

DWORD	TEXT_TIMER;		//タイマー

//-------------------------------------
//	TEXTエンジン初期化
//-------------------------------------

void _Set_Default_params()
	//デフォルトパラメータの設定
{	

	TEXT_WAIT = 100;			//１文字表示のウェイト(ms)
	Font_Size = 20;				//Font size

	TEXT_AREA.left	= 20;		//テキスト表示エリア（左）※ここでは640*480の画面端から一律20ドット内側に設定しています
	TEXT_AREA.top	= 20;		//テキスト表示エリア（上）
	TEXT_AREA.right	= 640-20;	//テキスト表示エリア（右）
	TEXT_AREA.bottom= 480-20;	//テキスト表示エリア（下）

	TEXT_X=TEXT_AREA.left;			//文字位置カウンタ初期化（表示エリア左肩から始まる）	
	TEXT_Y=TEXT_AREA.top;		

	TEXT_X_PITCH = Font_Size/2;					//文字送りピッチ（Ｘ）
	TEXT_Y_PITCH = Font_Size*130/100;			//文字送りピッチ（Ｙ）
}

void Init_Text_engine()
	//イニシャライズ操作の「親」関数
{
	TEXT=TEXT_BUF;	//テキストポインタTEXTをバッファ先頭にセット

	//デフォルトのスクリプトファイルを読む
	HLS_bload("default.txt",(char *)TEXT_BUF);

	_Set_Default_params();			//デフォルトパラメータの設定

	HLS_timer_start(&TEXT_TIMER);	//タイマースタート
}

//-------------------------------------
//	文字位置のインクリメント
//-------------------------------------

void Increment_textp_pos(int inc)	
	//文字表示位置のインクリメント
	//	int inc：何byteインクリメントするか→１or2
{
	//テキスト描画エリアからはみ出してしまう場合には改行操作をする
	if( (TEXT_X+TEXT_X_PITCH*inc) < (TEXT_AREA.right-TEXT_X_PITCH*2) ){
		TEXT_X += TEXT_X_PITCH*inc;
	}else{
		TEXT_X =  TEXT_AREA.left;

		if( (TEXT_Y+TEXT_Y_PITCH) < (TEXT_AREA.bottom-TEXT_Y_PITCH) ){
			TEXT_Y += TEXT_Y_PITCH;
		}else{
			//１ページの表示制限を越えてしまう場合は、警告を表示して強制終了
			//※とりあえず TEST version なので改ページ動作は未実装なのよーん
			MessageBox(hwnd,"画面の終端に達しました","ERROR",MB_OK );

			//強制終了
			PostQuitMessage(0);

		}
	}
}


//###############################################################
//	TEXTエンジン（シナリオ･インタプリタ）本体部
//###############################################################

//-------------------------------------
//	ここがエンジン部本体ね♪
//-------------------------------------
int Text_engine()
{
	//------------------------------------------
	// ウェイトを取りながらテキストを表示する
	//------------------------------------------
	int color1=RGB(100,200,200);	//文字色
	int color2=RGB( 10, 10, 10);	//影色

	//指定時間経過していない場合→Mainloopに戻る
	if( HLS_timer_check(TEXT_TIMER,TEXT_WAIT)==false )return 0;	

	HLS_timer_start(&TEXT_TIMER);	//タイマー再スタート

	//■１文字を表示する

		if( (unsigned char)(*TEXT)<(unsigned char)0x80  ){

			ChrPut3D(win_hdc,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,1);
				
			Increment_textp_pos(1);	//文字表示位置のインクリメント=1byte
				
			TEXT++;		//テキストポインタを１バイト進める
			
		}else{
			//２バイト文字の場合は２バイトずつ出力
			ChrPut3D(win_hdc,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,2);
		
			Increment_textp_pos(2);	//文字表示位置のインクリメント=2byte

			TEXT+=2;	//テキストポインタを２バイト進める	
	
		}
		

	return 0;
}



//end of file

