//----------------------------------------------------------------------
//	ちょー簡単ＲＰＧ（ＲＰＧ講座初級編）	状態管理
//----------------------------------------------------------------------
//		作った人：ソフト屋 巣 http://softyasu.net/
//----------------------------------------------------------------------

#ifndef INCLUDE_STATEMNG_H
#define INCLUDE_STATEMNG_H

//----------------------------------------------------------------------
//	定数
//----------------------------------------------------------------------




//----------------------------------------------------------------------
//	構造体
//----------------------------------------------------------------------

//	状態管理オブジェクト
//	構造体の実体は外部公開しません。一種のカプセル化です。
typedef struct tag_StateMngObject *STATEMNG_OBJECT;

//----------------------------------------------------------------------
//	関数の宣言
//----------------------------------------------------------------------

//	状態管理の初期化。オブジェクトを返す。
extern STATEMNG_OBJECT STM_Init(int stateNums);
//	状態管理の終了。オブジェクトの破棄。
extern void STM_End(STATEMNG_OBJECT object);
//	状態を遷移する。フレームカウントは０に初期化される。
extern void STM_ChangeState(STATEMNG_OBJECT object,int state);
//	現在の状態を得る。
extern int STM_GetState(STATEMNG_OBJECT object);
//	現在の状態のフレームカウントを得る。
extern int STM_GetFrameCount(STATEMNG_OBJECT object);
//	1つ前の状態を得る。
extern int STM_GetBackState(STATEMNG_OBJECT object);
//	前の状態に戻す。フレームカウントはそのまま。
extern void STM_SetBackState(STATEMNG_OBJECT object,int state);
//	状態・フレームカウントを更新する。
extern void STM_UpdateState(STATEMNG_OBJECT object);


#endif /*INCLUDE_STATEMNG_H*/

