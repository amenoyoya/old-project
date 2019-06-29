//-----------------------------------------------------------------------------------------
//	TexitEngine.cpp
//-----------------------------------------------------------------------------------------

#include	<windows.h>
#include	"BasicTips.h"
#include	"g_tool.h"
#include	"main.h"
#include	"TextEngine.h"
#include	"Text_Com_01.h"


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

	TEXT_WAIT = 60;			//１文字表示のウェイト(ms)
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

//-------------------------------------
//	１０進数テキストの解析
//-------------------------------------

int kaiseki_10()
	// 10進数テキストの解析
{
	int		val=0;
	int		flag=0;
	int		fugo=1;	//符号です（笑）
	char	buf[40],str[256];
	int		i;

	while( *TEXT<=' ' ) TEXT++;	//空白を読み飛ばす

	do{
		switch( *TEXT ){
			case	'-':	fugo=-1;break;	//←途中で出てきてもマイナス扱い･･･（バグの元だなー ^^;）
			case	'0':	val+=0;	break;
			case	'1':	val+=1;	break;
			case	'2':	val+=2;	break;		
			case	'3':	val+=3;	break;		
			case	'4':	val+=4;	break;		
			case	'5':	val+=5;	break;		
			case	'6':	val+=6;	break;		
			case	'7':	val+=7;	break;		
			case	'8':	val+=8;	break;		
			case	'9':	val+=9;	break;
			default:	//10進数では無かった場合
						for(i=0;i<32;i++){
							buf[i]=*(TEXT+i);
						}
						buf[i]=0;
						sprintf(str,"[%s]：10進数ではありません",buf);
						msg(str,"えらー");
						PostMessage(hwnd,WM_CLOSE,0,0);
						break;
		}

		TEXT++;
		if( *TEXT>' ' && *TEXT!=',' ){
			flag=0;
			val*=10;
		}else{
			flag=1;
		}

	}while( flag==0 );

	val *= fugo;

	return val;
}

//-------------------------------------------
//	テキスト文字列の解析（スペース+[,]区切り版）
//-------------------------------------------

char *Kaiseki_TextStr()
	//	テキストから文字列を切出す
{
	static char	str[512];
	int			counter,flag;

	//空白（ｽﾍﾟｰｽとTAB）を飛ばす
	while( *TEXT==' ' || *TEXT==0x9 )TEXT++;

	//テキストをコピー
	//終了条件：｢,｣or｢ ｣or「CR」or｢TAB｣
	counter=0;
	flag=0;
	while(counter<254 && flag==0){
		switch( (unsigned char)*TEXT ){
			case	0x0d:	flag=1;	break;	//[CR]=行末			
			case	0x0a:	flag=1;	break;	//[LF]=行末 001114
			case	' ':	flag=1;	break;	//SPACE CODE
			case	0x09:	flag=1;	break;	//[TAB]
			case	',':	flag=1;	break;	//[,]
		}
		
		if(flag==0){
			str[counter]=*TEXT;
			counter++;
			TEXT++;
		}
	}

	str[counter]=0;

	return &str[0];
}


//-------------------------------------------
//	テキスト文字列の解析（[CR]区切り版）
//-------------------------------------------

char *Kaiseki_TextStr_CR()
	//	テキストから文字列を切出す
	//	Kaiseki_TextStr()との違いは、[CR][LF]のみを区切りとして扱うところ。
{
	static char	str[512];
	int			counter,flag;

	//空白（ｽﾍﾟｰｽ と TAB）を飛ばす
	while( *TEXT==' ' || *TEXT==0x9 )TEXT++;

	//テキストをコピー
	//終了条件：行末
	counter=0;
	flag=0;
	while(counter<254 && flag==0){
		switch( (unsigned char)*TEXT ){
			case	0x0d:	if( *(TEXT+1)==0x0a )flag=1;			break;	//[CR]=行末
			case	0x0a:	if( *(TEXT-1)==0x0d )flag=1;counter--;	break;	//[LF]=行末
		}
		
		if(flag==0){
			str[counter]=*TEXT;
			counter++;
			TEXT++;
		}
	}

	str[counter]=0;

	//char	buf[512];
	//sprintf( buf,"[%s]",str);
	//msg( buf,"aaa" );

	//str[counter-1]=0;

	//MessageBox(NULL,(const char *)str,"aaa",MB_OK);

	return &str[0];
}

//--------------------------------------------------------
//	コマンド処理の振り分け
//--------------------------------------------------------

void Command_call()
	//「#」を見つけたところでこの関数を呼ぶと、「#」に
	//続くコマンド名を解析してその処理関数を呼びます
{
	char	com_name[256];
	int		i=0;
	int		flag=OFF;

	TEXT++;		//#を飛ばす

	//コマンド文字列の切り出し
	while( *TEXT>0x20 ){
		com_name[i] = *TEXT;
		TEXT++;
		i++;
	}
	TEXT--;
	com_name[i]=0;	//これはNULL文字

	//コマンド名の評価 → 処理関数呼び出し
	if( strcmp(com_name,"delay"   )==0 ){	Com_delay();		flag=ON;}	//遅延
	if( strcmp(com_name,"wait"    )==0 ){	Com_cursor_blink();	flag=ON;}	//カーソルブリンク
	if( strcmp(com_name,"w"       )==0 ){	Com_cursor_blink();	flag=ON;}	//カーソルブリンク
	if( strcmp(com_name,"halt"    )==0 ){	Com_halt();			flag=ON;}	//終了
	if( strcmp(com_name,"page"    )==0 ){	Com_page();			flag=ON;}	//改ページ

	//		↑
	//そのうちここに他のコマンドも追加していきましょう
	//		↓


	//フラグを見て、切り出されたコマンド名が有効なコマンドだったかどうか確認する
	if( flag == OFF ){
		char	str[256];

		sprintf( str,"警告：無効なコマンド [#%s] が記述されています",com_name);
		MessageBox(NULL,str,"Command_call()",MB_OK);
	}
}

//--------------------------------------------------------
//	制御文字の処理
//--------------------------------------------------------

int Check_control_chr()
	//*TEXT のポイントする１バイト文字をチェックし、
	//制御文字であれば処理して true を返し、それ以外は
	//false を返す
{
	switch( *TEXT ){
		case	'#':	Command_call();		//コマンド処理部を呼ぶ
						TEXT++;
						return true;
		case	0x09:	//TAB	
		case	0x0a:	//LF	
		case	0x0d:	//CR	
						return true;		//何もしないで戻る==無視♪
		case	';':	Com_linefeed();		//[;] 改行
						return true;
	}

	return false;	//制御文字に該当しなかった → falseを返す
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
	int color1=RGB(150,230,230);	//文字色
	int color2=RGB( 10, 10, 10);	//影色

	//指定時間経過していない場合→Mainloopに戻る
	if( HLS_timer_check(TEXT_TIMER,TEXT_WAIT)==false )return 0;	

	HLS_timer_start(&TEXT_TIMER);	//タイマー再スタート

	//■１文字を表示する

		if( (unsigned char)(*TEXT)<(unsigned char)0x80  ){

			//コントロール文字かどうかを判断し、該当しなければ画面に出力
			if( Check_control_chr()==false ){
				ChrPut3D(Back_DC,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,1);
				
				Increment_textp_pos(1);	//文字表示位置のインクリメント=1byte
			}
			TEXT++;		//テキストポインタを１バイト進める
			
		}else{
			//２バイト文字の場合は２バイトずつ出力
			ChrPut3D(Back_DC,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,2);
		
			Increment_textp_pos(2);	//文字表示位置のインクリメント=2byte

			TEXT+=2;	//テキストポインタを２バイト進める	
	
		}
		

	return 0;
}



//end of file

