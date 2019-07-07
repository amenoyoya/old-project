//----------------------------------------------------------------------
//	ちょー簡単ＲＰＧ（ＲＰＧ講座初級編）	メイン
//----------------------------------------------------------------------
//		作った人：ソフト屋 巣 http://softyasu.net/
//----------------------------------------------------------------------
//	-- 利用規約 --
//	「ちょー簡単ＲＰＧ」のソースコードは自由に利用してもらって構いません。
//	ただし、完全なコピーを自分のものと主張したり、そのまま学校の提出物
//	とする事は許可できません。必ず自分のオリジナリティーを５０％（目安）
//	以上加えてください。
//	また、掲示板やホームページ等に掲載時は出所を必ず掲載してください。
//	-- 免責 --
//	作者は、ソフトウェアの使用に関して直接、または間接に生じる損害について
//	一切責任を負わないものとしますので、自己責任でご利用下さい。
//	ソフトウェアは予告せず改良、変更することがあります。
//	ソフトウェアは全てのOS、環境での動作を保障するものではありません。
//----------------------------------------------------------------------

#include <DxLib.h>

#include "main.h"
#include "comsub.h"
#include "gameMain.h"
#include "comsub.cpp"
#include "gameMain.cpp"
#include "stateMng.cpp"

//----------------------------------------------------------------------
//	定数
//----------------------------------------------------------------------

//	タイトル
#define GAME_TITLE_STR "E A S Y - R P G"

//	１秒間の描画フレーム定数
#define FPS 60

//----------------------------------------------------------------------
//	変数
//----------------------------------------------------------------------

//	ゲーム全体の管理データ(実体)
MainData_t g_MainData;




//----------------------------------------------------------------------
//	キーボードの押され続けたカウントを取得する。
//	(ゲームプログラミングの館より)
//----------------------------------------------------------------------
static int GetHitKeyStateAll_2(int KeyStateBuf[])
{
	char GetHitKeyStateAll_Key[256];

	GetHitKeyStateAll( GetHitKeyStateAll_Key );
	for(int i=0;i<256;i++){
		if(GetHitKeyStateAll_Key[i]==1) KeyStateBuf[i]++;
		else							KeyStateBuf[i]=0;
	}
	return 0;
}

//----------------------------------------------------------------------
//	何かキーが押され続けたカウントを取得する。全キー対象
//	カウントが1かどうか聞けば、押下された直後が分かります。
//----------------------------------------------------------------------
static void GetCheckHitKeyAll_2(int *HitCount)
{
	//	何かキーが押された？
	if( CheckHitKeyAll() > 0 ) {
		//	押されている間カウントする。
		(*HitCount)++;
	} else {
		//	開放されたら０に戻す。
		(*HitCount) = 0;
	}
}

//----------------------------------------------------------------------
//	ゲームの各種値を初期化
//----------------------------------------------------------------------
void MainInit()
{
	//	ゲーム全体の値を設定。
	g_MainData.gameState = GAME_STATE_TITLE;	//タイトル画面でスタート
	
	//	ゲーム本編は初期スタートを仮に設定。
	GameMain_Init(GAMEMAIN_INITTYPE_FIRSTSTART);
	
	//	仮にキーコンフィグを行う。
	g_MainData.key_up	= KEY_INPUT_UP;
	g_MainData.key_down	= KEY_INPUT_DOWN;
	g_MainData.key_left	= KEY_INPUT_LEFT;
	g_MainData.key_right= KEY_INPUT_RIGHT;
	g_MainData.key_menu	= KEY_INPUT_RETURN;
	g_MainData.key_act	= KEY_INPUT_SPACE;
}

//----------------------------------------------------------------------
//	ゲームの各種終了処理
//----------------------------------------------------------------------
void MainEnd()
{
	//	ゲーム本編の終了処理。
	GameMain_End();
}

//----------------------------------------------------------------------
//	タイトル画面
//----------------------------------------------------------------------
GameState_t Title()
{
	//	センター上気味にタイトル文字表示
	CenterDrawString( GAME_TITLE_STR, 32, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 240, GetColor(155,155,255) );
	
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	次のフレームは名前入力へ
		return GAME_STATE_NAME;
	}

	//	継続
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	名前入力
//----------------------------------------------------------------------
GameState_t NameInput()
{
	//	名前入力画面のダミー
	CenterDrawString( "なまえ　の　にゅうりょく", 20, 120, GetColor(255,255,255) );
	CenterDrawString( "なまえ：そふとや", 20, 200, GetColor(255,255,255) );
	CenterDrawString( "HIT ANY KEY", 20, 280, GetColor(155,155,255) );
	
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	ゲーム本編は初期スタートを設定。
		GameMain_Init(GAMEMAIN_INITTYPE_FIRSTSTART);
		//	次のフレームはゲーム本編へ
		return GAME_STATE_MAIN;
	}
	
	//	継続
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	ゲームオーバー
//----------------------------------------------------------------------
GameState_t GameOver()
{
	//	ゲームオーバーの表示
	CenterDrawString( "あなたは　しんでしまった。", 28, 160, GetColor(255,255,255) );
	
	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 280, GetColor(155,155,255) );
	
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	ゲーム本編は再スタートを設定。
		GameMain_Init(GAMEMAIN_INITTYPE_RESTART);
		//	次のフレームはゲーム本編へ
		return GAME_STATE_MAIN;
	}
	
	//	継続
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	エンディング
//----------------------------------------------------------------------
GameState_t Ending()
{
	//	エンディングの表示
	CenterDrawString( "ゲームクリア　おめでとう！", 28, 200, GetColor(255,255,255) );
	
	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	次のフレームはゲームタイトルへ
		return GAME_STATE_TITLE;
		
	}
	//	継続
	return g_MainData.gameState;
}


//----------------------------------------------------------------------
//	メイン
//----------------------------------------------------------------------
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
				 LPSTR lpCmdLine, int nCmdShow )
{
	//--------------------------------------------
	//	初期化
	//--------------------------------------------
	//	ウィンドウモード
	ChangeWindowMode(TRUE);
	//	タイトル
	SetMainWindowText(GAME_TITLE_STR);
	//	画面の解像度　変更
	SetGraphMode(SCREEN_X,SCREEN_Y,32);
	
	//	ＤＸライブラリの初期化
	if( DxLib_Init() == -1 || SetDrawScreen(DX_SCREEN_BACK)!=0 ) {
		return -1;//初期化と裏画面化
	}
	
	//	ゲームの各種値を初期化
	MainInit();
	
	//--------------------------------------------
	//	メインループ
	//--------------------------------------------
	while(ProcessMessage()==0 && ClearDrawScreen()==0 && 
            //↑ﾒｯｾｰｼﾞ処理         ↑画面をｸﾘｱ
            GetHitKeyStateAll_2(g_MainData.key)==0 && g_MainData.key[KEY_INPUT_ESCAPE]==0 ) {
            //↑入力状態を保存　　　　　　　　　　　　　　↑ESCが押されていない
		
		//	全キーの押下カウント
		GetCheckHitKeyAll_2(&g_MainData.AllKeyCount);
		
		//	FPS表示
		DrawFps(FPS);
		
		//	ゲーム全体の状態で振り分ける。
		switch( g_MainData.gameState ) {
		case GAME_STATE_TITLE:		//タイトル画面
			g_MainData.gameState = Title();
			break;

		case GAME_STATE_NAME:		//名前入力
			g_MainData.gameState = NameInput();
			break;

		case GAME_STATE_MAIN:		//ゲーム本編
			g_MainData.gameState = GameMain();
			break;

		case GAME_STATE_GAMEOVER:	//ゲームオーバー
			g_MainData.gameState = GameOver();
			break;

		case GAME_STATE_ENDING:		//エンディング
			g_MainData.gameState = Ending();
			break;
		}
		

		//	裏画面反映
		ScreenFlip();
		//	一定速度に保つ処理
		WaitFpsConstant(FPS);
	}
 	
	//--------------------------------------------
	//	終了処理
	//--------------------------------------------
	
	//	ゲームの各種終了処理
	MainEnd();
	
	// ＤＸライブラリ使用の終了処理
	DxLib_End();

	return 0;
}
