//----------------------------------------------------------------------
//	����[�ȒP�q�o�f�i�q�o�f�u�������ҁj	���C��
//----------------------------------------------------------------------
//		������l�F�\�t�g�� �� http://softyasu.net/
//----------------------------------------------------------------------
//	-- ���p�K�� --
//	�u����[�ȒP�q�o�f�v�̃\�[�X�R�[�h�͎��R�ɗ��p���Ă�����č\���܂���B
//	�������A���S�ȃR�s�[�������̂��̂Ǝ咣������A���̂܂܊w�Z�̒�o��
//	�Ƃ��鎖�͋��ł��܂���B�K�������̃I���W�i���e�B�[���T�O���i�ڈ��j
//	�ȏ�����Ă��������B
//	�܂��A�f����z�[���y�[�W���Ɍf�ڎ��͏o����K���f�ڂ��Ă��������B
//	-- �Ɛ� --
//	��҂́A�\�t�g�E�F�A�̎g�p�Ɋւ��Ē��ځA�܂��͊Ԑڂɐ����鑹�Q�ɂ���
//	��ؐӔC�𕉂�Ȃ����̂Ƃ��܂��̂ŁA���ȐӔC�ł����p�������B
//	�\�t�g�E�F�A�͗\���������ǁA�ύX���邱�Ƃ�����܂��B
//	�\�t�g�E�F�A�͑S�Ă�OS�A���ł̓����ۏႷ����̂ł͂���܂���B
//----------------------------------------------------------------------

#include <DxLib.h>

#include "main.h"
#include "comsub.h"
#include "gameMain.h"
#include "comsub.cpp"
#include "gameMain.cpp"
#include "stateMng.cpp"

//----------------------------------------------------------------------
//	�萔
//----------------------------------------------------------------------

//	�^�C�g��
#define GAME_TITLE_STR "E A S Y - R P G"

//	�P�b�Ԃ̕`��t���[���萔
#define FPS 60

//----------------------------------------------------------------------
//	�ϐ�
//----------------------------------------------------------------------

//	�Q�[���S�̂̊Ǘ��f�[�^(����)
MainData_t g_MainData;




//----------------------------------------------------------------------
//	�L�[�{�[�h�̉����ꑱ�����J�E���g���擾����B
//	(�Q�[���v���O���~���O�̊ق��)
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
//	�����L�[�������ꑱ�����J�E���g���擾����B�S�L�[�Ώ�
//	�J�E���g��1���ǂ��������΁A�������ꂽ���オ������܂��B
//----------------------------------------------------------------------
static void GetCheckHitKeyAll_2(int *HitCount)
{
	//	�����L�[�������ꂽ�H
	if( CheckHitKeyAll() > 0 ) {
		//	������Ă���ԃJ�E���g����B
		(*HitCount)++;
	} else {
		//	�J�����ꂽ��O�ɖ߂��B
		(*HitCount) = 0;
	}
}

//----------------------------------------------------------------------
//	�Q�[���̊e��l��������
//----------------------------------------------------------------------
void MainInit()
{
	//	�Q�[���S�̂̒l��ݒ�B
	g_MainData.gameState = GAME_STATE_TITLE;	//�^�C�g����ʂŃX�^�[�g
	
	//	�Q�[���{�҂͏����X�^�[�g�����ɐݒ�B
	GameMain_Init(GAMEMAIN_INITTYPE_FIRSTSTART);
	
	//	���ɃL�[�R���t�B�O���s���B
	g_MainData.key_up	= KEY_INPUT_UP;
	g_MainData.key_down	= KEY_INPUT_DOWN;
	g_MainData.key_left	= KEY_INPUT_LEFT;
	g_MainData.key_right= KEY_INPUT_RIGHT;
	g_MainData.key_menu	= KEY_INPUT_RETURN;
	g_MainData.key_act	= KEY_INPUT_SPACE;
}

//----------------------------------------------------------------------
//	�Q�[���̊e��I������
//----------------------------------------------------------------------
void MainEnd()
{
	//	�Q�[���{�҂̏I�������B
	GameMain_End();
}

//----------------------------------------------------------------------
//	�^�C�g�����
//----------------------------------------------------------------------
GameState_t Title()
{
	//	�Z���^�[��C���Ƀ^�C�g�������\��
	CenterDrawString( GAME_TITLE_STR, 32, 160, GetColor(255,255,255) );

	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 240, GetColor(155,155,255) );
	
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	���̃t���[���͖��O���͂�
		return GAME_STATE_NAME;
	}

	//	�p��
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	���O����
//----------------------------------------------------------------------
GameState_t NameInput()
{
	//	���O���͉�ʂ̃_�~�[
	CenterDrawString( "�Ȃ܂��@�́@�ɂイ��傭", 20, 120, GetColor(255,255,255) );
	CenterDrawString( "�Ȃ܂��F���ӂƂ�", 20, 200, GetColor(255,255,255) );
	CenterDrawString( "HIT ANY KEY", 20, 280, GetColor(155,155,255) );
	
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	�Q�[���{�҂͏����X�^�[�g��ݒ�B
		GameMain_Init(GAMEMAIN_INITTYPE_FIRSTSTART);
		//	���̃t���[���̓Q�[���{�҂�
		return GAME_STATE_MAIN;
	}
	
	//	�p��
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	�Q�[���I�[�o�[
//----------------------------------------------------------------------
GameState_t GameOver()
{
	//	�Q�[���I�[�o�[�̕\��
	CenterDrawString( "���Ȃ��́@����ł��܂����B", 28, 160, GetColor(255,255,255) );
	
	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 280, GetColor(155,155,255) );
	
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	�Q�[���{�҂͍ăX�^�[�g��ݒ�B
		GameMain_Init(GAMEMAIN_INITTYPE_RESTART);
		//	���̃t���[���̓Q�[���{�҂�
		return GAME_STATE_MAIN;
	}
	
	//	�p��
	return g_MainData.gameState;
}

//----------------------------------------------------------------------
//	�G���f�B���O
//----------------------------------------------------------------------
GameState_t Ending()
{
	//	�G���f�B���O�̕\��
	CenterDrawString( "�Q�[���N���A�@���߂łƂ��I", 28, 200, GetColor(255,255,255) );
	
	//	HIT ANY KEY
	CenterDrawString( "HIT ANY KEY", 20, 320, GetColor(155,155,255) );
	
	//	�����L�[�������ꂽ�H
	if( g_MainData.AllKeyCount == 1 ) {
		//	���̃t���[���̓Q�[���^�C�g����
		return GAME_STATE_TITLE;
		
	}
	//	�p��
	return g_MainData.gameState;
}


//----------------------------------------------------------------------
//	���C��
//----------------------------------------------------------------------
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
				 LPSTR lpCmdLine, int nCmdShow )
{
	//--------------------------------------------
	//	������
	//--------------------------------------------
	//	�E�B���h�E���[�h
	ChangeWindowMode(TRUE);
	//	�^�C�g��
	SetMainWindowText(GAME_TITLE_STR);
	//	��ʂ̉𑜓x�@�ύX
	SetGraphMode(SCREEN_X,SCREEN_Y,32);
	
	//	�c�w���C�u�����̏�����
	if( DxLib_Init() == -1 || SetDrawScreen(DX_SCREEN_BACK)!=0 ) {
		return -1;//�������Ɨ���ʉ�
	}
	
	//	�Q�[���̊e��l��������
	MainInit();
	
	//--------------------------------------------
	//	���C�����[�v
	//--------------------------------------------
	while(ProcessMessage()==0 && ClearDrawScreen()==0 && 
            //��ү���ޏ���         ����ʂ�ر
            GetHitKeyStateAll_2(g_MainData.key)==0 && g_MainData.key[KEY_INPUT_ESCAPE]==0 ) {
            //�����͏�Ԃ�ۑ��@�@�@�@�@�@�@�@�@�@�@�@�@�@��ESC��������Ă��Ȃ�
		
		//	�S�L�[�̉����J�E���g
		GetCheckHitKeyAll_2(&g_MainData.AllKeyCount);
		
		//	FPS�\��
		DrawFps(FPS);
		
		//	�Q�[���S�̂̏�ԂŐU�蕪����B
		switch( g_MainData.gameState ) {
		case GAME_STATE_TITLE:		//�^�C�g�����
			g_MainData.gameState = Title();
			break;

		case GAME_STATE_NAME:		//���O����
			g_MainData.gameState = NameInput();
			break;

		case GAME_STATE_MAIN:		//�Q�[���{��
			g_MainData.gameState = GameMain();
			break;

		case GAME_STATE_GAMEOVER:	//�Q�[���I�[�o�[
			g_MainData.gameState = GameOver();
			break;

		case GAME_STATE_ENDING:		//�G���f�B���O
			g_MainData.gameState = Ending();
			break;
		}
		

		//	����ʔ��f
		ScreenFlip();
		//	��葬�x�ɕۂ���
		WaitFpsConstant(FPS);
	}
 	
	//--------------------------------------------
	//	�I������
	//--------------------------------------------
	
	//	�Q�[���̊e��I������
	MainEnd();
	
	// �c�w���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}
