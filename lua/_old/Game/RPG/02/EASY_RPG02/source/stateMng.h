//----------------------------------------------------------------------
//	����[�ȒP�q�o�f�i�q�o�f�u�������ҁj	��ԊǗ�
//----------------------------------------------------------------------
//		������l�F�\�t�g�� �� http://softyasu.net/
//----------------------------------------------------------------------

#ifndef INCLUDE_STATEMNG_H
#define INCLUDE_STATEMNG_H

//----------------------------------------------------------------------
//	�萔
//----------------------------------------------------------------------




//----------------------------------------------------------------------
//	�\����
//----------------------------------------------------------------------

//	��ԊǗ��I�u�W�F�N�g
//	�\���̂̎��̂͊O�����J���܂���B���̃J�v�Z�����ł��B
typedef struct tag_StateMngObject *STATEMNG_OBJECT;

//----------------------------------------------------------------------
//	�֐��̐錾
//----------------------------------------------------------------------

//	��ԊǗ��̏������B�I�u�W�F�N�g��Ԃ��B
extern STATEMNG_OBJECT STM_Init(int stateNums);
//	��ԊǗ��̏I���B�I�u�W�F�N�g�̔j���B
extern void STM_End(STATEMNG_OBJECT object);
//	��Ԃ�J�ڂ���B�t���[���J�E���g�͂O�ɏ����������B
extern void STM_ChangeState(STATEMNG_OBJECT object,int state);
//	���݂̏�Ԃ𓾂�B
extern int STM_GetState(STATEMNG_OBJECT object);
//	���݂̏�Ԃ̃t���[���J�E���g�𓾂�B
extern int STM_GetFrameCount(STATEMNG_OBJECT object);
//	1�O�̏�Ԃ𓾂�B
extern int STM_GetBackState(STATEMNG_OBJECT object);
//	�O�̏�Ԃɖ߂��B�t���[���J�E���g�͂��̂܂܁B
extern void STM_SetBackState(STATEMNG_OBJECT object,int state);
//	��ԁE�t���[���J�E���g���X�V����B
extern void STM_UpdateState(STATEMNG_OBJECT object);


#endif /*INCLUDE_STATEMNG_H*/

