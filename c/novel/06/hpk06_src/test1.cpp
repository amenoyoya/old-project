
//-----------------------------------------------------------------------------
//	test1.cpp	グラフィック表示
//-----------------------------------------------------------------------------


#include	<kiri/core/_win.h>
#include	"g_tool.h"
#include	"g_tool.cpp"

HWND		hwnd;		//ウィンドウのハンドル
HDC			win_hdc;	//デバイスコンテキスト（画面を操作するときに使います）
HINSTANCE	hinst;		//インスタンス（メモリ内にある実効ファイル）へのハンドル
						//↑２重起動などへの対策として自分自身のハンドルを持っておく

//初期化
void init_game()
{
	char	*str1,*str2,*str3,*str4;

	str1 = "背景が付くと、雰囲気だけは随分ゲームらしくな";	
	str2 = "ってきましたね･･･（^^）余談ですが、ADVやノベ";
	str3 = "ルは多少プログラムがへっぽこでも、奇麗なお姉";
	str4 = "さんが画面に出るだけで許されます♪（爆笑）";

	Load_Bmp( win_hdc,"back.bmp");

	StrPut3D(win_hdc,20, 20,25,RGB(255,255,255),RGB(0,50,50),str1);
	StrPut3D(win_hdc,20, 50,25,RGB(255,255,255),RGB(0,50,50),str2);
	StrPut3D(win_hdc,20, 80,25,RGB(255,255,255),RGB(0,50,50),str3);
	StrPut3D(win_hdc,20,110,25,RGB(255,255,255),RGB(0,50,50),str4);
}

//メッセージ（マウスやキーの入力など）が無いときに実行するループ
void	Mainloop(void)
{
	//今は何もないので、実行しても何も起きません（^^）

}

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
		default:
			//その他のイベントはWindowsのシステムにお任せ（楽ちん、楽ちん）
			return DefWindowProc(hwnd,msg,wprm,lprm);	
	}

	return 0;
}


//---------------------------------------------------------
//	ここから実行開始♪
//---------------------------------------------------------

int APIENTRY WinMain(HINSTANCE hIns,HINSTANCE hPI,LPSTR lpArg,int nCmdShow)
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
			Sleep(1);
		}
	}

	//↓終了時には wParam パラメータが持つ終了コードを返す規定になっている
	return msg.wParam;	
}
