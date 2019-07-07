//----------------------------------------------------------------------
//	ちょー簡単ＲＰＧ（ＲＰＧ講座初級編）	状態管理
//----------------------------------------------------------------------
//		作った人：ソフト屋 巣 http://softyasu.net/
//----------------------------------------------------------------------


#include <DxLib.h>
#include <assert.h>

#include "main.h"
#include "stateMng.h"


//----------------------------------------------------------------------
//	内部関数
//----------------------------------------------------------------------
static void STM_SetFrameCount(STATEMNG_OBJECT object,int count);

//----------------------------------------------------------------------
//	定数
//----------------------------------------------------------------------


//----------------------------------------------------------------------
//	構造体
//----------------------------------------------------------------------

//	状態管理オブジェクトの構造体
struct tag_StateMngObject {
	int nowState;			//現在の状態
	int beforeState;		//前の状態(STM_UpdateStateで現在の状態が変化なら保存)
	int nextState;			//次の状態(STM_UpdateStateで現在の状態にコピー)
	int stateNums;			//状態数
	int *pFlameCounts;		//フレームカウント配列。状態数分。
};


//----------------------------------------------------------------------
//	変数
//----------------------------------------------------------------------


//----------------------------------------------------------------------
//	状態管理の初期化。オブジェクトを返す。
//----------------------------------------------------------------------
STATEMNG_OBJECT STM_Init(int stateNums)
{
	STATEMNG_OBJECT object = NULL;
	
	//	まず状態管理オブジェクトメモリを確保する。
	object = (STATEMNG_OBJECT)malloc( sizeof(struct tag_StateMngObject)) ;
	
	//	状態管理オブジェクトの値を初期化する。
	object->nowState = -1;			//現在の状態
	object->beforeState = -2;		//前の状態(STM_UpdateStateで現在の状態が変化なら保存)
	object->nextState = -3;			//次の状態(STM_UpdateStateで現在の状態にコピー)
	object->stateNums = stateNums;	//状態数
	object->pFlameCounts = NULL;	//フレームカウント配列。状態数分。
	
	//	フレームカウント配列を確保する。
	if( stateNums > 0 ) {
		object->pFlameCounts = (int*)malloc( sizeof(int) * stateNums );
	}
	
	//	状態管理オブジェクトを返す。
	return object;
}

//----------------------------------------------------------------------
//	状態管理の終了。オブジェクトの破棄。
//----------------------------------------------------------------------
void STM_End(STATEMNG_OBJECT object)
{
	if( object!=NULL ) {
		//	フレームカウント配列を破棄
		if( object->pFlameCounts!=NULL ) {
			free( object->pFlameCounts );
		}
		//	オブジェクト自体を破棄
		free( object );
	}
}

//----------------------------------------------------------------------
//	状態を遷移する。フレームカウントは０に初期化される。
//----------------------------------------------------------------------
void STM_ChangeState(STATEMNG_OBJECT object,int state)
{
	//	状態を遷移する準備。STM_UpdateStateで更新される。
	object->nextState = state;
}

//----------------------------------------------------------------------
//	現在の状態を得る。
//----------------------------------------------------------------------
int STM_GetState(STATEMNG_OBJECT object)
{
	return object->nowState;
}

//----------------------------------------------------------------------
//	現在の状態のフレームカウントを得る。
//----------------------------------------------------------------------
int STM_GetFrameCount(STATEMNG_OBJECT object)
{
	//	異常値のチェック。範囲外の内容ならアサート(異常終了する)。
	assert( object->nowState>=0 );
	assert( object->nowState<object->stateNums );
	
	//	フレームカウントを持ち帰る。
	return object->pFlameCounts[object->nowState];
}

//----------------------------------------------------------------------
//	1つ前の状態を得る。
//----------------------------------------------------------------------
int STM_GetBackState(STATEMNG_OBJECT object)
{
	return object->beforeState;
}

//----------------------------------------------------------------------
//	前の状態に戻す。フレームカウントはそのまま。
//----------------------------------------------------------------------
void STM_SetBackState(STATEMNG_OBJECT object,int state)
{
	//	状態を遷移する準備。STM_UpdateStateで更新される。
	object->beforeState = state;
	object->nextState = object->beforeState;
}

//----------------------------------------------------------------------
//	状態・フレームカウントを更新する。
//----------------------------------------------------------------------
void STM_UpdateState(STATEMNG_OBJECT object)
{
	//	状態の遷移？
	if( object->nextState != object->nowState ) {
		//	遷移の状況把握のため条件比較を先に。
		int bBack = object->nextState == object->beforeState;
		//	今の状態を保存
		object->beforeState = object->nowState;
		//	新しい状態に遷移
		object->nowState = object->nextState;
		//	状態を戻した？
		if( bBack ) {
			//	フレームカウントを１つ加算。
			STM_SetFrameCount(object,STM_GetFrameCount(object)+1);
		} else {
			//	フレームカウントを初期化。
			STM_SetFrameCount(object,0);
		}
	} else {
		//	フレームカウントを１つ加算。
		STM_SetFrameCount(object,STM_GetFrameCount(object)+1);
	}
}


//----------------------------------------------------------------------
//	現在の状態のフレームカウントを設定(内部関数)
//----------------------------------------------------------------------
static void STM_SetFrameCount(STATEMNG_OBJECT object,int count)
{
	//	異常値のチェック
	assert( object->nowState>=0 );
	assert( object->nowState<object->stateNums );
	
	//	フレームカウントを設定する。
	object->pFlameCounts[object->nowState] = count;
}


