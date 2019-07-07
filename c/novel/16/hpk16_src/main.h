
//-----------------------------------------------------------------------------
//	main.h
//-----------------------------------------------------------------------------


//#include	<windows.h>
//#include	"g_tool.h"
//#include	"BasicTips.h"
//#include	"TextEngine.h"
//#include	"main.h"
//#include	"Text_Com_01.h"

extern HWND			hwnd;		//ウィンドウのハンドル

extern HDC			win_hdc;	//デバイスコンテキスト（画面を操作するときに使います）
extern HDC			Back_DC;	//デバイスコンテキスト（裏画面用）
extern HDC			Parts_DC;	//デバイスコンテキスト（パーツ類）
extern HBITMAP		hBack_Bitmap;	//バック画面本体のハンドル
extern HBITMAP		hParts_Bitmap;	//パーツ画面本体のハンドル

extern HINSTANCE	hinst;		//インスタンス（メモリ内にある実効ファイル）へのハンドル
								//↑２重起動などへの対策として自分自身のハンドルを持っておく

struct _Mode_stat {
	int		flag_text;	//テキスト表示：ON=進行 OFF=停止

	int		flag_delay;	//遅延処理：ON=遅延あり OFF=遅延なし

	int		flag_cursor_blink;	//カーソル点滅：ON=点滅 OFF=点滅なし
};
extern _Mode_stat	Mode_stat;

//初期化
void init_game();

//メッセージ（マウスやキーの入力など）が無いときに実行するループ
void	Mainloop(void);

//メッセージ（マウスやキーの入力など）は、ここで調べます
LRESULT WndProc(HWND hwnd,UINT msg,WPARAM wprm,LPARAM lprm);


//---------------------------------------------------------
//	ここから実行開始♪
//---------------------------------------------------------

APIENTRY WinMain(HINSTANCE hIns,HINSTANCE hPI,LPSTR lpArg,int nCmdShow);

//end of file
