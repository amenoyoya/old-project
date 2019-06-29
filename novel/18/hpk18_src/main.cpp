
//-----------------------------------------------------------------------------
//	main.cpp	
//-----------------------------------------------------------------------------


#include	<windows.h>
#include	"g_tool.h"
#include	"BasicTips.h"
#include	"TextEngine.h"
#include	"main.h"
#include	"Text_Com_01.h"

HWND		hwnd;		//ウィンドウのハンドル

HDC			win_hdc;	//デバイスコンテキスト（画面を操作するときに使います）
HDC			Back_DC;	//デバイスコンテキスト（裏画面用）
HDC			Parts_DC;	//デバイスコンテキスト（パーツ類）
HDC			BG_DC;		//デバイスコンテキスト（背景画像）
HBITMAP		hBack_Bitmap;	//バック画面本体のハンドル
HBITMAP		hParts_Bitmap;	//パーツ画面本体のハンドル
HBITMAP		hBG_Bitmap;		//背景画面本体のハンドル

HINSTANCE	hinst;		//インスタンス（メモリ内にある実効ファイル）へのハンドル
						//↑２重起動などへの対策として自分自身のハンドルを持っておく

_Mode_stat	Mode_stat;	//Mainloop()で参照するフラグ類をまとめた構造体（定義は main.h 参照）

//==================================================================
//	初期化いろいろ
//==================================================================

//-----------------------------------
//	バックサーフェイス初期化
//-----------------------------------

void init_Back_Surface()
{
	HDC		work_hdc;	//作業用のDC

	//■ バック画面の初期化
	work_hdc=GetDC(hwnd);					//主（表）画面のDCの内容を取得
	Back_DC=CreateCompatibleDC(work_hdc);	//同じ設定でバック画面用のDCを生成
	hBack_Bitmap=CreateCompatibleBitmap(work_hdc,640,480);//主（表）画面と同じ属性で画面生成
	SelectObject(Back_DC,hBack_Bitmap);		//DCと画面本体を関連付ける

	PatBlt(Back_DC,0,0,640,480,PATCOPY);	//とりあえず白で塗りつぶし

	ReleaseDC(hwnd,work_hdc);				//作業用DCを開放
}

//-----------------------------------
//	パーツ用サーフェイス初期化
//-----------------------------------

void init_Parts_Surface()
{
	HDC		work_hdc;	//作業用のDC

	//■ バック画面の初期化
	work_hdc=GetDC(hwnd);					//主（表）画面のDCの内容を取得
	Parts_DC=CreateCompatibleDC(work_hdc);	//同じ設定でバック画面用のDCを生成
	hParts_Bitmap=CreateCompatibleBitmap(work_hdc,75,25);//主（表）画面と同じ属性で画面生成
	SelectObject(Parts_DC,hParts_Bitmap);		//DCと画面本体を関連付ける

	Load_Bmp( Parts_DC,"Parts.bmp");		//パーツ用BMPを読み込んでおく

	ReleaseDC(hwnd,work_hdc);				//作業用DCを開放
}

//-----------------------------------
//	背景画像用サーフェイス初期化
//-----------------------------------

void init_BG_Surface()
{
	HDC		work_hdc;	//作業用のDC

	//■ バック画面の初期化
	work_hdc=GetDC(hwnd);					//主（表）画面のDCの内容を取得
	BG_DC=CreateCompatibleDC(work_hdc);		//同じ設定でバック画面用のDCを生成
	hBG_Bitmap=CreateCompatibleBitmap(work_hdc,640,480);	//主（表）画面と同じ属性で画面生成
	SelectObject(BG_DC,hBG_Bitmap);			//DCと画面本体を関連付ける

	Load_Bmp( BG_DC,"Back00.bmp");			//デフォルト背景BMPを読み込んでおく

	ReleaseDC(hwnd,work_hdc);				//作業用DCを開放
}


//----------------------------------
//	Mainloop用フラグ類の初期化
//----------------------------------

void init_Mode_stat()
{
	Mode_stat.flag_text = ON;			//テキスト表示ON
	Mode_stat.flag_delay = OFF;			//遅延OFF
	Mode_stat.flag_cursor_blink = OFF;	//カーソル表示OFF

}

//----------------------------------
//	初期化メイン
//----------------------------------

void init_game()
{
	init_Back_Surface();	//Back Surface作成
	init_Parts_Surface();	//Parts Surface作成
	init_BG_Surface();		//BG Surface作成

	//背景となるグラフィックデータをバックサーフェイスに転送しておく
	BitBlt(Back_DC,0,0,640,480,BG_DC,0,0,SRCCOPY);	

	Init_Text_engine();		//テキストエンジン初期化

	init_Mode_stat();		//Mode_statにまとめたフラグ類の初期化
}


//==================================================================
//	メインループ
//==================================================================

//メッセージ（マウスやキーの入力など）が無いときに実行するループ
void	Mainloop(void)
{
	static DWORD fps_keep=0; //ＦＰＳを一定に保つためのタイマー変数
	if( GetTickCount() < fps_keep + 1000/80 ) return; 
	fps_keep = GetTickCount(); //システム時刻を取得

	//テキスト表示
	if( Mode_stat.flag_text == ON ) Text_engine();
	
	//遅延
	if( Mode_stat.flag_delay == ON ) Com_delay_task();
	
	//カーソルブリンク
	if( Mode_stat.flag_cursor_blink == ON ) Com_cursor_blink_task();

	//終了
	if( Mode_stat.flag_halt == ON ) Com_halt_task();		

	HLS_stc_FPS(Back_DC);
	BitBlt(win_hdc,0,0,640,480,Back_DC,0,0,SRCCOPY);	//裏画面 → 表画面にコピー
}

//==================================================================
//	イベントチェック
//==================================================================

//メッセージ（マウスやキーの入力など）は、ここで調べます
LRESULT WndProc(HWND hwnd,UINT msg,WPARAM wprm,LPARAM lprm)
{
	//↓この例では、Window右上の消去ボタンを押して終了させることしか出来ません（爆）
	//後に、解説しながらいろいろなイベント処理を追加していきます。

	switch(msg){
		case	WM_CREATE:		//Windowが生成された
					break;
		case	WM_DESTROY:		//Windowの消去操作がされた
					PostQuitMessage(0);
					break;
		case	WM_KEYDOWN:	//キーが押された
					switch(wprm){
							case	VK_ESCAPE:
								PostQuitMessage(0);
								//PostMessage(hwnd,WM_CLOSE,0,0);	//(ESC)を入力で終了
								break;
							case	VK_SPACE:
							case	VK_RETURN:
								//カーソルブリンク中ならブリンク解除
								if( Mode_stat.flag_cursor_blink == ON ){
									Com_cursor_blink_end();
								}
								//終了待ち中なら終了処理
								if( Mode_stat.flag_halt == ON ){
									Com_halt_end();
								}
								break;
					}
					break;
		case	WM_LBUTTONDOWN:	//マウス左ボタンが押された
					//カーソルブリンク中ならブリンク解除
					if( Mode_stat.flag_cursor_blink == ON ){
						Com_cursor_blink_end();
					}
					//終了待ち中なら終了処理
					if( Mode_stat.flag_halt == ON ){
						Com_halt_end();
					}
					break;
		default:
			//その他のイベントはWindowsのシステムにお任せ（楽ちん、楽ちん）
			return DefWindowProc(hwnd,msg,wprm,lprm);	
	}

	return 0;
}


//---------------------------------------------------------
//	ここから実行開始♪
//---------------------------------------------------------

APIENTRY WinMain(HINSTANCE hIns,HINSTANCE hPI,LPSTR lpArg,int nCmdShow)
{
	MSG			msg;	//Windowsシステムのメッセージ構造体（あんまり気にしなくていいです）
	WNDCLASS	wc;		//Windowクラス（窓を開くときにだけ使用します）

	hinst=hIns;			//ｸﾞﾛｰﾊﾞﾙ変数 hinst に、起動時に与えられるｲﾝｽﾀﾝｽ値を保持しておく

	//--------------------------------------------------------------
	//窓を開くための所要ﾊﾟﾗﾒｰﾀをWindowクラス wc のメンバ変数に与える
	//--------------------------------------------------------------
	wc.hInstance=hIns;					//ｲﾝｽﾀﾝｽ値
	wc.lpszClassName="窓１号";			//クラス名（適当でかまわない）
	wc.lpfnWndProc=(WNDPROC)WndProc;	//イベントハンドラを登録
	wc.style=0;							//スタイルはとりあえず０でいいや
	wc.hIcon=LoadIcon((HINSTANCE)NULL,IDI_APPLICATION);	//ﾀｲﾄﾙﾊﾞｰに表示するｱｲｺﾝはﾃﾞﾌｫﾙﾄでいいや
	wc.hCursor=LoadCursor((HINSTANCE)NULL,IDC_ARROW);	//ﾏｳｽｶｰｿﾙも標準形式でいいや
	wc.lpszMenuName=0;					//
	wc.cbClsExtra=0;					//
	wc.cbWndExtra=0;					//
	wc.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
	if(RegisterClass(&wc)==0)return 0;

	hwnd=CreateWindowEx(
		0,							//拡張スタイルは特に考えない
		wc.lpszClassName,			//クラス名（↑で決めたものを与えておけばOK）
		"たいとる",					//Windowの左肩に表示される窓の名前
		WS_OVERLAPPEDWINDOW,		//ウィンドウスタイル（←ここでは縁取り指定のみ）
		20,20,640,480,				//窓の配置ポジション、大きさ(左肩のx,y及び幅、高さ) 
		(HWND)NULL,					//親Windowのﾊﾝﾄﾞﾙ（ここでは無視）
		(HMENU)NULL,				//ﾒﾆｭｰも子ｳｨﾝﾄﾞｳも無いので気にしない
		hIns,						//インスタンス値
		(LPVOID)NULL				//他に参照すべきデータは無いので気にしない
		);

	if(!hwnd)return 0;	//Windowを開くのに失敗したら終了する
						//↑ﾙｰﾌﾟに入る前に終了するときは０を返す規定になっている

	Window_Center(hwnd);	//Windowを画面中央にする

	ShowWindow(hwnd,nCmdShow);	//外枠の描画
	UpdateWindow(hwnd);		//クライアント領域の描画
		
	win_hdc=GetDC(hwnd);	//今後の画面操作に備えて DC を取得しておく

	init_game();			//ゲームシステム初期化

	//窓が開いたら、ここで無限ループに入ってイベント監視を行う
	while(1){
		//メッセージキューになにか入って来たか？
		if(PeekMessage(&msg,NULL,0,0,PM_NOREMOVE)){
			//メッセージがあれば処理する
			if(!GetMessage(&msg,(HWND)NULL,0,0))break;	//終了メッセージならループ抜け
			TranslateMessage(&msg);	//キーメッセージを文字メッセージに変換
			DispatchMessage(&msg);	//ウィンドウプロシージャにメッセージを送付
		}else{
			//メッセージが無ければ Mainloop()を実行
			Mainloop();
		}
	}

	//↓終了時には wParam パラメータが持つ終了コードを返す規定になっている
	return msg.wParam;	
}
