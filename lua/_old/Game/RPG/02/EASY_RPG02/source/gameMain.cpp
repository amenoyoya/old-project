//----------------------------------------------------------------------
//	����[�ȒP�q�o�f�i�q�o�f�u�������ҁj	�Q�[���{��
//----------------------------------------------------------------------
//		������l�F�\�t�g�� �� http://softyasu.net/
//----------------------------------------------------------------------


#include <DxLib.h>

#include "main.h"
#include "comsub.h"
#include "gameMain.h"
#include "stateMng.h"

//----------------------------------------------------------------------
//	�����֐�
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
//	�萔
//----------------------------------------------------------------------


//	�Q�[���{�҂̏��
enum GameMainState_t {
	GAMEMAIN_STATE_MAPLOAD,		//�}�b�v���[�h����
	GAMEMAIN_STATE_EVENT,		//�C�x���g��
	GAMEMAIN_STATE_SHOP,		//���X�Ŕ�������
	GAMEMAIN_STATE_MOVE,		//�}�b�v�ړ���
	GAMEMAIN_STATE_MENU,		//���j���[��
	GAMEMAIN_STATE_BATTLE_IN,	//�퓬�J�n
	GAMEMAIN_STATE_BATTLE,		//�퓬��
	GAMEMAIN_STATE_BATTLE_END,	//�퓬���ʕ�

	GAMEMAIN_STATE_MAX,		//�Q�[���{�҂̏�Ԃ̐�
};

//	�o�g���̌���
enum BattleState_t {
	BATTLE_STATE_CONTINUE,		//�o�g���p��
	BATTLE_STATE_GAMEOVER,		//�Q�[���I�[�o�[
	BATTLE_STATE_ENDING,		//�퓬�Ń{�X��|�����B
	BATTLE_STATE_WIN,			//�퓬�ɏ���
};


//----------------------------------------------------------------------
//	�\����
//----------------------------------------------------------------------

//	�Q�[���{�҂̃f�[�^�̍\���́B
typedef struct {
	GameMainInitType_t initType;	//�������^�C�v
	STATEMNG_OBJECT StateObj;		//�Q�[���{�҂̏�ԊǗ��I�u�W�F�N�g
	int beforeBattleInState;		//�o�g���J�n�O�̏��
	
} GameMainData_t;


//----------------------------------------------------------------------
//	�ϐ�
//----------------------------------------------------------------------

//	�Q�[���{�҂̃f�[�^�B
static GameMainData_t s_GameMainData = {GAMEMAIN_INITTYPE_FIRSTSTART,NULL};


//----------------------------------------------------------------------
//	�Q�[���{�҂̏�����
//----------------------------------------------------------------------
void GameMain_Init(GameMainInitType_t initType)
{
	//	���[�h�̐ݒ�
	s_GameMainData.initType = initType;
	
	//	����Ȃ�Q�[���{�҂̏�ԊǗ��I�u�W�F�N�g�̍쐬�B
	//	�I�u�W�F�N�g�ƌ����Ă��b�{�{�̃N���X�Ƃ͖��֌W�ł��B
	if( s_GameMainData.StateObj == NULL ) {
		s_GameMainData.StateObj = STM_Init(GAMEMAIN_STATE_MAX);
	}
	
	//	�Q�[���{�҂̏�Ԃ�������
	STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MAPLOAD);//�}�b�v���[�h�����֑J�ځB
}

//----------------------------------------------------------------------
//	�Q�[���{�҂̏I��
//----------------------------------------------------------------------
void GameMain_End()
{
	//	�Q�[���{�҂̏�ԊǗ��I�u�W�F�N�g�̔j��
	STM_End(s_GameMainData.StateObj);
}

//----------------------------------------------------------------------
//	�Q�[���{��
//----------------------------------------------------------------------
GameState_t GameMain()
{
	//	�Q�[���{�҂�����ĕ\��
	CenterDrawString( "�Q�[���{�҂ł��B", 28, 100, GetColor(255,255,255) );
	
	//	�Q�[����Ԃ̍X�V�E�t���[���J�E���g
	STM_UpdateState(s_GameMainData.StateObj);
	
	//	�Q�[���{�҂̏�ԂŐU�蕪����B
	switch( STM_GetState(s_GameMainData.StateObj) ) {
	case GAMEMAIN_STATE_MAPLOAD:
		//�}�b�v���[�h����
		GameMain_MapLoad();
		break;
	
	case GAMEMAIN_STATE_EVENT:
		//�C�x���g��
		GameMain_Event();
		break;
	
	case GAMEMAIN_STATE_SHOP:
		//���X�Ŕ�������
		GameMain_Shop();
		break;
	
	case GAMEMAIN_STATE_MOVE:
		//�}�b�v�ړ���
		GameMain_MapMove();
		break;
	
	case GAMEMAIN_STATE_MENU:
		//���j���[��
		GameMain_Menu();
		break;
	
	case GAMEMAIN_STATE_BATTLE_IN:
		//�퓬�J�n
		GameMain_BattleIn();
		break;
	
	case GAMEMAIN_STATE_BATTLE:
		//	�퓬��
		switch( GameMain_Battle() ) {
		case BATTLE_STATE_CONTINUE:		//�o�g���p��
			break;
		
		case BATTLE_STATE_GAMEOVER:		//�Q�[���I�[�o�[
			return GAME_STATE_GAMEOVER;		//�Q�[���S�̂̏�Ԃ�J�ځB
		
		case BATTLE_STATE_ENDING:		//�퓬�Ń{�X��|�����B
			return GAME_STATE_ENDING;		//�Q�[���S�̂̏�Ԃ�J�ځB
		
		case BATTLE_STATE_WIN:			//�퓬�ɏ���
			STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE_END);//�퓬���ʕ񍐂֑J�ځB
			break;
		}
		break;
	
	case GAMEMAIN_STATE_BATTLE_END:
		//�퓬���ʕ�
		GameMain_BattleEnd();
		break;
	}
	
	//	�Q�[���S�̂̏�Ԃ��p��
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	�}�b�v���[�h����
//----------------------------------------------------------------------
static void GameMain_MapLoad()
{
	//	���ň��t���[����ɑJ�ڂ���B
	int change_frame = 60;
	int frame = STM_GetFrameCount(s_GameMainData.StateObj);
	if( frame >= change_frame ) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_EVENT);//�C�x���g���֑J�ځB
	}
	//	�\��
	CenterDrawString( "�}�b�v���[�h���ł��B", 20, 160, GetColor(255,255,255) );
	char str[1024];
	sprintf( str, "�J�ڂ܂ł���%d�t���[���ł��B", change_frame - frame );
	CenterDrawString( str, 16, 200, GetColor(128,255,128) );
	
}

//----------------------------------------------------------------------
//	�C�x���g��
//----------------------------------------------------------------------
static void GameMain_Event()
{
	CenterDrawString( "�C�x���g���ł��B", 20, 160, GetColor(255,255,255) );
	
	//	���j���[�̃L�[����
	CenterDrawString( "�uS�v�{�^���ł��X�ł��B", 20, 200, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_S] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_SHOP);//���X�ɑJ��
		return;
	}
	//	�C�x���g�̃L�[����
	CenterDrawString( "�uM�v�{�^���Ń}�b�v�`�F���W�B", 20, 240, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_M] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MAPLOAD);//�}�b�v���[�h�����ɑJ��
		return;
	}
	//	�o�g���̃L�[����
	CenterDrawString( "�uB�v�{�^���Ńo�g�������B", 20, 280, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_B] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE_IN);//�퓬�J�n�֑J�ځB
		return;
	}

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY �}�b�v�ړ��Ɉڂ�܂�", 20, 320, GetColor(155,155,255) );
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	���̃t���[���őJ�ځB
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MOVE);//�}�b�v�ړ��֑J�ځB
	}
}

//----------------------------------------------------------------------
//	���X�Ŕ�������
//----------------------------------------------------------------------
static void GameMain_Shop()
{
	CenterDrawString( "�r�g�n�o�ł��B", 20, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	���̃t���[���őJ�ځB
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_EVENT);//�C�x���g���֑J�ځB
	}
}

//----------------------------------------------------------------------
//	�}�b�v�ړ���
//----------------------------------------------------------------------
static void GameMain_MapMove()
{
	CenterDrawString( "�ړ����ł��B", 20, 160, GetColor(255,255,255) );
	
	//	���j���[�̃L�[����
	CenterDrawString( "�uMENU�v�{�^���Ń��j���[���J���܂��B", 20, 240, GetColor(155,155,255) );
	if( g_MainData.key[g_MainData.key_menu] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MENU);//���j���[�֑J�ځB
		return;
	}
	//	�C�x���g�̃L�[����
	CenterDrawString( "�uE�v�{�^���ŃC�x���g�����B", 20, 280, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_E] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_EVENT);//�C�x���g���֑J�ځB
		return;
	}
	//	�o�g���̃L�[����
	CenterDrawString( "�uB�v�{�^���Ńo�g�������B", 20, 320, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_B] == 1) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE_IN);//�퓬�J�n�֑J�ځB
		return;
	}
}

//----------------------------------------------------------------------
//	���j���[��
//----------------------------------------------------------------------
static void GameMain_Menu()
{
	CenterDrawString( "���j���[���ł��B", 20, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	���̃t���[���őJ�ځB
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_MOVE);//�}�b�v�ړ��֑J�ځB
	}
}

//----------------------------------------------------------------------
//	�퓬�J�n
//----------------------------------------------------------------------
static void GameMain_BattleIn()
{
	//	���̃t���[��
	int frame = STM_GetFrameCount(s_GameMainData.StateObj);
	
	//	�ŏ��̃t���[���Ȃ�A�o�g���J�n�O�̏�Ԃ�ۑ�����B
	if( frame == 0 ) {
		s_GameMainData.beforeBattleInState = STM_GetBackState(s_GameMainData.StateObj);
	}
	
	//	���ň��t���[����ɑJ�ڂ���B
	int change_frame = 48;
	if( frame >= change_frame ) {
		STM_ChangeState(s_GameMainData.StateObj,GAMEMAIN_STATE_BATTLE);//�퓬���֑J�ځB
	}
	
	//	�\��
	CenterDrawString( "�o�g���J�n�G�t�F�N�g�ł��B", 20, 160, GetColor(255,255,255) );
	char str[1024];
	sprintf( str, "�J�ڂ܂ł���%d�t���[���ł��B", change_frame - frame );
	CenterDrawString( str, 16, 200, GetColor(128,255,128) );
}

//----------------------------------------------------------------------
//	�퓬��
//----------------------------------------------------------------------
static int GameMain_Battle()
{
	CenterDrawString( "�o�g�����ł��B", 20, 160, GetColor(255,255,255) );
	
	//	�Q�[���I�[�o�[�̃L�[����
	CenterDrawString( "�uG�v�{�^���ŃQ�[���I�[�o�[�ɂȂ�܂��B", 20, 240, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_G] == 1) {
		return BATTLE_STATE_GAMEOVER;	//�Q�[���I�[�o�[
	}
	//	�G���f�B���O�̃L�[����
	CenterDrawString( "�uE�v�{�^���ŃG���f�B���O�ɂȂ�܂��B", 20, 280, GetColor(155,155,255) );
	if( g_MainData.key[KEY_INPUT_E] == 1) {
		return BATTLE_STATE_ENDING;		//�퓬�Ń{�X��|�����B
	}
	
	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY�Ńo�g���ɏ������܂��B", 20, 320, GetColor(155,155,255) );
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		return BATTLE_STATE_WIN;	//����
	}
	return BATTLE_STATE_CONTINUE;//�o�g���p��
}

//----------------------------------------------------------------------
//	�퓬���ʕ�
//----------------------------------------------------------------------
static void GameMain_BattleEnd()
{
	CenterDrawString( "�o�g�����ʂł��B", 20, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	���̃t���[���őJ�ځB
		STM_SetBackState(s_GameMainData.StateObj,s_GameMainData.beforeBattleInState);//�o�g���˓��O�̏�ԂɑJ�ځB
	}
}

