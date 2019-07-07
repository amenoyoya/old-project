//----------------------------------------------------------------------
//	����[�ȒP�q�o�f�i�q�o�f�u�������ҁj	���ʊ֐�
//----------------------------------------------------------------------
//		������l�F�\�t�g�� �� http://softyasu.net/
//----------------------------------------------------------------------


#include <DxLib.h>
#include <assert.h>

#include "main.h"
#include "comsub.h"


//----------------------------------------------------------------------
//	�萔
//----------------------------------------------------------------------


//----------------------------------------------------------------------
//	�ϐ�
//----------------------------------------------------------------------




//----------------------------------------------------------------------
//	�����ɕ������o���B
//----------------------------------------------------------------------
void CenterDrawString( char *str, int fontsize, int y, int color )
{
	SetFontSize( fontsize );									//�����̑傫��
	int StrSizeX = GetDrawStringWidth(str,(int)strlen(str));	//�����\���̕��𓾂�B
	DrawString( (SCREEN_X-StrSizeX)/2, y, str, color );			//�Z���^�[�ɕ\��
}


//----------------------------------------------------------------------
//	�e�o�r�����ɂ���B
//----------------------------------------------------------------------
void WaitFpsConstant(int fps)
{
	static int beforeTime=0;	//�O��̎��ԁB

 	//	fps�͈̔͊O���`�F�b�N
 	assert(fps<=100);
 	assert(fps>0);
 	
	//	�O�񂩂�̌o�ߎ��ԁB
	int elapsedTime = GetNowCount() - beforeTime;
	
	//	�e�o�r����]�������Ԃ��v�Z����B
	int oneFrame = 1000 / fps;
	if( (oneFrame-elapsedTime) > 0 ) {
		//	�]�肪����΁A��莞�Ԃ�҂B
		Sleep(oneFrame-elapsedTime);
	}
	//	����̎��Ԃ��L�^
	beforeTime=GetNowCount();
}


//----------------------------------------------------------------------
//	�e�o�r�̕\��
//----------------------------------------------------------------------
void DrawFps(int fps)
{
	static int beforeTime=0,aveTime=0,frameTime[100],count=0;
 
 	//	fps�͈̔͊O���`�F�b�N
 	assert(fps<=100);
 	assert(fps>0);
 
 	//	�t���[��������̎��Ԃ��L�^�B
 	if( count==0 ) {
		frameTime[count%fps] = 0;
	} else {
		frameTime[count%fps] = GetNowCount()-beforeTime;
	}
	beforeTime=GetNowCount();
 	count++;	
	
	//	�Ō�̃t���[��
	if((count%fps) == (fps-1) ){
		//	���σt���[�����Ԃ��v�Z����B
		aveTime=0;
		for(int i=0;i<fps;i++) {
			aveTime+=frameTime[i];
		}
		aveTime /= fps;
	}
	//	���σt���[�����Ԃ����܂��Ă�����\������B
	if(aveTime!=0){
		SetFontSize( 14 );//�����̑傫��
		DrawFormatString(0, 0,GetColor(255,255,255),"%.1fFPS",1000.0/(double)aveTime);
		DrawFormatString(0,20,GetColor(255,255,255),"%dms"	,aveTime);
	}
}











