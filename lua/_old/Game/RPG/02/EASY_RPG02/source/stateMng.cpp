//----------------------------------------------------------------------
//	����[�ȒP�q�o�f�i�q�o�f�u�������ҁj	��ԊǗ�
//----------------------------------------------------------------------
//		������l�F�\�t�g�� �� http://softyasu.net/
//----------------------------------------------------------------------


#include <DxLib.h>
#include <assert.h>

#include "main.h"
#include "stateMng.h"


//----------------------------------------------------------------------
//	�����֐�
//----------------------------------------------------------------------
static void STM_SetFrameCount(STATEMNG_OBJECT object,int count);

//----------------------------------------------------------------------
//	�萔
//----------------------------------------------------------------------


//----------------------------------------------------------------------
//	�\����
//----------------------------------------------------------------------

//	��ԊǗ��I�u�W�F�N�g�̍\����
struct tag_StateMngObject {
	int nowState;			//���݂̏��
	int beforeState;		//�O�̏��(STM_UpdateState�Ō��݂̏�Ԃ��ω��Ȃ�ۑ�)
	int nextState;			//���̏��(STM_UpdateState�Ō��݂̏�ԂɃR�s�[)
	int stateNums;			//��Ԑ�
	int *pFlameCounts;		//�t���[���J�E���g�z��B��Ԑ����B
};


//----------------------------------------------------------------------
//	�ϐ�
//----------------------------------------------------------------------


//----------------------------------------------------------------------
//	��ԊǗ��̏������B�I�u�W�F�N�g��Ԃ��B
//----------------------------------------------------------------------
STATEMNG_OBJECT STM_Init(int stateNums)
{
	STATEMNG_OBJECT object = NULL;
	
	//	�܂���ԊǗ��I�u�W�F�N�g���������m�ۂ���B
	object = (STATEMNG_OBJECT)malloc( sizeof(struct tag_StateMngObject)) ;
	
	//	��ԊǗ��I�u�W�F�N�g�̒l������������B
	object->nowState = -1;			//���݂̏��
	object->beforeState = -2;		//�O�̏��(STM_UpdateState�Ō��݂̏�Ԃ��ω��Ȃ�ۑ�)
	object->nextState = -3;			//���̏��(STM_UpdateState�Ō��݂̏�ԂɃR�s�[)
	object->stateNums = stateNums;	//��Ԑ�
	object->pFlameCounts = NULL;	//�t���[���J�E���g�z��B��Ԑ����B
	
	//	�t���[���J�E���g�z����m�ۂ���B
	if( stateNums > 0 ) {
		object->pFlameCounts = (int*)malloc( sizeof(int) * stateNums );
	}
	
	//	��ԊǗ��I�u�W�F�N�g��Ԃ��B
	return object;
}

//----------------------------------------------------------------------
//	��ԊǗ��̏I���B�I�u�W�F�N�g�̔j���B
//----------------------------------------------------------------------
void STM_End(STATEMNG_OBJECT object)
{
	if( object!=NULL ) {
		//	�t���[���J�E���g�z���j��
		if( object->pFlameCounts!=NULL ) {
			free( object->pFlameCounts );
		}
		//	�I�u�W�F�N�g���̂�j��
		free( object );
	}
}

//----------------------------------------------------------------------
//	��Ԃ�J�ڂ���B�t���[���J�E���g�͂O�ɏ����������B
//----------------------------------------------------------------------
void STM_ChangeState(STATEMNG_OBJECT object,int state)
{
	//	��Ԃ�J�ڂ��鏀���BSTM_UpdateState�ōX�V�����B
	object->nextState = state;
}

//----------------------------------------------------------------------
//	���݂̏�Ԃ𓾂�B
//----------------------------------------------------------------------
int STM_GetState(STATEMNG_OBJECT object)
{
	return object->nowState;
}

//----------------------------------------------------------------------
//	���݂̏�Ԃ̃t���[���J�E���g�𓾂�B
//----------------------------------------------------------------------
int STM_GetFrameCount(STATEMNG_OBJECT object)
{
	//	�ُ�l�̃`�F�b�N�B�͈͊O�̓��e�Ȃ�A�T�[�g(�ُ�I������)�B
	assert( object->nowState>=0 );
	assert( object->nowState<object->stateNums );
	
	//	�t���[���J�E���g�������A��B
	return object->pFlameCounts[object->nowState];
}

//----------------------------------------------------------------------
//	1�O�̏�Ԃ𓾂�B
//----------------------------------------------------------------------
int STM_GetBackState(STATEMNG_OBJECT object)
{
	return object->beforeState;
}

//----------------------------------------------------------------------
//	�O�̏�Ԃɖ߂��B�t���[���J�E���g�͂��̂܂܁B
//----------------------------------------------------------------------
void STM_SetBackState(STATEMNG_OBJECT object,int state)
{
	//	��Ԃ�J�ڂ��鏀���BSTM_UpdateState�ōX�V�����B
	object->beforeState = state;
	object->nextState = object->beforeState;
}

//----------------------------------------------------------------------
//	��ԁE�t���[���J�E���g���X�V����B
//----------------------------------------------------------------------
void STM_UpdateState(STATEMNG_OBJECT object)
{
	//	��Ԃ̑J�ځH
	if( object->nextState != object->nowState ) {
		//	�J�ڂ̏󋵔c���̂��ߏ�����r���ɁB
		int bBack = object->nextState == object->beforeState;
		//	���̏�Ԃ�ۑ�
		object->beforeState = object->nowState;
		//	�V������ԂɑJ��
		object->nowState = object->nextState;
		//	��Ԃ�߂����H
		if( bBack ) {
			//	�t���[���J�E���g���P���Z�B
			STM_SetFrameCount(object,STM_GetFrameCount(object)+1);
		} else {
			//	�t���[���J�E���g���������B
			STM_SetFrameCount(object,0);
		}
	} else {
		//	�t���[���J�E���g���P���Z�B
		STM_SetFrameCount(object,STM_GetFrameCount(object)+1);
	}
}


//----------------------------------------------------------------------
//	���݂̏�Ԃ̃t���[���J�E���g��ݒ�(�����֐�)
//----------------------------------------------------------------------
static void STM_SetFrameCount(STATEMNG_OBJECT object,int count)
{
	//	�ُ�l�̃`�F�b�N
	assert( object->nowState>=0 );
	assert( object->nowState<object->stateNums );
	
	//	�t���[���J�E���g��ݒ肷��B
	object->pFlameCounts[object->nowState] = count;
}


