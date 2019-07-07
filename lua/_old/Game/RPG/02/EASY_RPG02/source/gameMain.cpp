//----------------------------------------------------------------------
//	ちょー簡単ＲＰＧ（ＲＰＧ講座初級編）	ゲーム本編
//----------------------------------------------------------------------
//		作った人：ソフト屋 巣 http://softyasu.net/
//----------------------------------------------------------------------


#include <DxLib.h>

#include "main.h"
#include "comsub.h"
#include "gameMain.h"
#include "stateMng.h"

//----------------------------------------------------------------------
//	内部関数
//----------------------------------------------------------------------
static void GameMain_MapLoad();
static void GameMain_Event();
static void GameMain_Shop();
static void GameMain_MapMove();
static void GameMain_Menu();
static void GameMain_BattleIn();
static int  GameMain_Battle();
static void GameMain_BattleEnd();

//----------------------------------------------------------------------
//	定数
//----------------------------------------------------------------------


//	ゲーム本編の状態
enum GameMainState_t {
	GAMEMAIN_STATE_MAPLOAD,		//マップロード処理
	GAMEMAIN_STATE_EVENT,		//イベント中
	GAMEMAIN_STATE_SHOP,		//お店で買い物中
	GAMEMAIN_STATE_MOVE,		//マップ移動中
	GAMEMAIN_STATE_MENU,		//メニュー中
	GAMEMAIN_STATE_BATTLE_IN,	//戦闘開始
	GAMEMAIN_STATE_BATTLE,		//戦闘中
	GAMEMAIN_STATE_BATTLE_END,	//戦闘結果報告

	GAMEMAIN_STATE_MAX,		//ゲーム本編の状態の数
};

//	バトルの結果
enum BattleState_t {
	BATTLE_STATE_CONTINUE,		//バトル継続
	BATTLE_STATE_GAMEOVER,		//ゲームオーバー
	BATTLE_STATE_ENDING,		//戦闘でボスを倒した。
	BATTLE_STATE_WIN,			//戦闘に勝利
};


//----------------------------------------------------------------------
//	構造体
//----------------------------------------------------------------------

//	ゲーム本編のデータの構造体。
typedef struct {
	GameMainInitType_t initType;	//初期化タイプ
	STATEMNG_OBJECT StateObj;		//ゲーム本編の状態管理オブジェクト
	int beforeBattleInState;		//バトル開始前の状態
	
} GameMainData_t;


//----------------------------------------------------------------------
//	変数
//----------------------------------------------------------------------

//	ゲーム本編のデータ。
static GameMainData_t s_GameMainData = {GAMEMAIN_INITTYPE_FIRSTSTART,NULL};


//----------------------------------------------------------------------
//	ゲーム本編の初期化
//----------------------------------------------------------------------
void GameMain_Init(GameMainInitType_t initType)
{
	//	モードの設定
	s_GameMainData.initType = initType;
	
	//	初回ならゲーム本編の状態管理オブジェクトの作成。
	//	オブジェクトと言ってもＣ＋＋のクラスとは無関係です。
	if( s_GameMainData.StateObj == NULL ) {
		s_GameMainData.StateObj = STM_Init(GAMEMAIN_STATE_MAX);
	}
	
	//	ゲーム本編の状態を初期化
	STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MAPLOAD);//マップロード処理へ遷移。
}

//----------------------------------------------------------------------
//	ゲーム本編の終了
//----------------------------------------------------------------------
void GameMain_End()
{
	//	ゲーム本編の状態管理オブジェクトの破棄
	STM_End(s_GameMainData.StateObj);
}

//----------------------------------------------------------------------
//	ゲーム本編
//----------------------------------------------------------------------
GameState_t GameMain()
{
	//	ゲーム本編だよって表示
	CenterDrawString( "ゲーム本編です。", 28, 100, GetColor(255,255,255) );
	
	//	ゲーム状態の更新・フレームカウント
	STM_UpdateState(s_GameMainData.StateObj);
	
	//	ゲーム本編の状態で振り分ける。
	switch( STM_GetState(s_GameMainData.StateObj) ) {
	case GAMEMAIN_STATE_MAPLOAD:
		//マップロード処理
		GameMain_MapLoad();
		break;
	
	case GAMEMAIN_STATE_EVENT:
		//イベント中
		GameMain_Event();
		break;
	
	case GAMEMAIN_STATE_SHOP:
		//お店で買い物中
		GameMain_Shop();
		break;
	
	case GAMEMAIN_STATE_MOVE:
		//マップ移動中
		GameMain_MapMove();
		break;
	
	case GAMEMAIN_STATE_MENU:
		//メニュー中
		GameMain_Menu();
		break;
	
	case GAMEMAIN_STATE_BATTLE_IN:
		//戦闘開始
		GameMain_BattleIn();
		break;
	
	case GAMEMAIN_STATE_BATTLE:
		//	戦闘中
		switch( GameMain_Battle() ) {
		case BATTLE_STATE_CONTINUE:		//バトル継続
			break;
		
		case BATTLE_STATE_GAMEOVER:		//ゲームオーバー
			return GAME_STATE_GAMEOVER;		//ゲーム全体の状態を遷移。
		
		case BATTLE_STATE_ENDING:		//戦闘でボスを倒した。
			return GAME_STATE_ENDING;		//ゲーム全体の状態を遷移。
		
		case BATTLE_STATE_WIN:			//戦闘に勝利
			STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE_END);//戦闘結果報告へ遷移。
			break;
		}
		break;
	
	case GAMEMAIN_STATE_BATTLE_END:
		//戦闘結果報告
		GameMain_BattleEnd();
		break;
	}
	
	//	ゲーム全体の状態を継続
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	マップロード処理
//----------------------------------------------------------------------
static void GameMain_MapLoad()
{
	//	仮で一定フレーム後に遷移する。
	int change_frame = 60;
	int frame = STM_GetFrameCount(s_GameMainData.StateObj);
	if( frame >= change_frame ) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_EVENT);//イベント中へ遷移。
	}
	//	表示
	CenterDrawString( "マップロード中です。", 20, 160, GetColor(255,255,255) );
	char str[1024];
	sprintf( str, "遷移まであと%dフレームです。", change_frame - frame );
	CenterDrawString( str, 16, 200, GetColor(128,255,128) );
	
}

//----------------------------------------------------------------------
//	イベント中
//----------------------------------------------------------------------
static void GameMain_Event()
{
	CenterDrawString( "イベント中です。", 20, 160, GetColor(255,255,255) );
	
	//	メニューのキー入力
	CenterDrawString( "「S」ボタンでお店です。", 20, 200, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_S] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_SHOP);//お店に遷移
		return;
	}
	//	イベントのキー入力
	CenterDrawString( "「M」ボタンでマップチェンジ。", 20, 240, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_M] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MAPLOAD);//マップロード処理に遷移
		return;
	}
	//	バトルのキー入力
	CenterDrawString( "「B」ボタンでバトル発生。", 20, 280, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_B] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE_IN);//戦闘開始へ遷移。
		return;
	}

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY マップ移動に移ります", 20, 320, GetColor(155,155,255) );
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	次のフレームで遷移。
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MOVE);//マップ移動へ遷移。
	}
}

//----------------------------------------------------------------------
//	お店で買い物中
//----------------------------------------------------------------------
static void GameMain_Shop()
{
	CenterDrawString( "ＳＨＯＰです。", 20, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	次のフレームで遷移。
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_EVENT);//イベント中へ遷移。
	}
}

//----------------------------------------------------------------------
//	マップ移動中
//----------------------------------------------------------------------
static void GameMain_MapMove()
{
	CenterDrawString( "移動中です。", 20, 160, GetColor(255,255,255) );
	
	//	メニューのキー入力
	CenterDrawString( "「MENU」ボタンでメニューが開きます。", 20, 240, GetColor(155,155,255) );
	if( g_MainData.key[g_MainData.key_menu] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MENU);//メニューへ遷移。
		return;
	}
	//	イベントのキー入力
	CenterDrawString( "「E」ボタンでイベント発生。", 20, 280, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_E] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_EVENT);//イベント中へ遷移。
		return;
	}
	//	バトルのキー入力
	CenterDrawString( "「B」ボタンでバトル発生。", 20, 320, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_B] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE_IN);//戦闘開始へ遷移。
		return;
	}
}

//----------------------------------------------------------------------
//	メニュー中
//----------------------------------------------------------------------
static void GameMain_Menu()
{
	CenterDrawString( "メニュー中です。", 20, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	次のフレームで遷移。
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MOVE);//マップ移動へ遷移。
	}
}

//----------------------------------------------------------------------
//	戦闘開始
//----------------------------------------------------------------------
static void GameMain_BattleIn()
{
	//	今のフレーム
	int frame = STM_GetFrameCount(s_GameMainData.StateObj);
	
	//	最初のフレームなら、バトル開始前の状態を保存する。
	if( frame == 0 ) {
		s_GameMainData.beforeBattleInState = STM_GetBackState(s_GameMainData.StateObj);
	}
	
	//	仮で一定フレーム後に遷移する。
	int change_frame = 48;
	if( frame >= change_frame ) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE);//戦闘中へ遷移。
	}
	
	//	表示
	CenterDrawString( "バトル開始エフェクトです。", 20, 160, GetColor(255,255,255) );
	char str[1024];
	sprintf( str, "遷移まであと%dフレームです。", change_frame - frame );
	CenterDrawString( str, 16, 200, GetColor(128,255,128) );
}

//----------------------------------------------------------------------
//	戦闘中
//----------------------------------------------------------------------
static int GameMain_Battle()
{
	CenterDrawString( "バトル中です。", 20, 160, GetColor(255,255,255) );
	
	//	ゲームオーバーのキー入力
	CenterDrawString( "「G」ボタンでゲームオーバーになります。", 20, 240, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_G] == 1) {
		return BATTLE_STATE_GAMEOVER;	//ゲームオーバー
	}
	//	エンディングのキー入力
	CenterDrawString( "「E」ボタンでエンディングになります。", 20, 280, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_E] == 1) {
		return BATTLE_STATE_ENDING;		//戦闘でボスを倒した。
	}
	
	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEYでバトルに勝利します。", 20, 320, GetColor(155,155,255) );
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		return BATTLE_STATE_WIN;	//勝利
	}
	return BATTLE_STATE_CONTINUE;//バトル継続
}

//----------------------------------------------------------------------
//	戦闘結果報告
//----------------------------------------------------------------------
static void GameMain_BattleEnd()
{
	CenterDrawString( "バトル結果です。", 20, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	//	何かキーが押された？
	if( g_MainData.AllKeyCount == 1 ) {
		//	次のフレームで遷移。
		STM_SetBackState(s_GameMainData.StateObj,s_GameMainData.beforeBattleInState);//バトル突入前の状態に遷移。
	}
}

