#include "../include/GV.h"
//���O�̍ő啶����
#define STR_MAX 64
//���ׂ���֐��̍ő吔
#define FUNC_MAX 30
//�����ڂ����J�E���g����
int func_count;
//�O�񑪒肵�����Ԃ�ۑ�����
LONGLONG lt;
//����f�[�^�i�[�p�ϐ�
typedef struct{
	int tm;
	char str[STR_MAX];
}func_tm_t;
func_tm_t func_tm[FUNC_MAX];

//st�Ƃ������O�Ŏ󂯎�����f�[�^��o�^����Bflag��1�Ȃ烊�Z�b�g
void enter_func_tm(char st[], int flag){
	int i;
	LONGLONG nowtm;
	if(func_count>=FUNC_MAX){
		printfDx("func_count�̒l%d���ُ�ł�\n",func_count);
		return ;
	}
	nowtm=GetNowHiPerformanceCount() ;
	if(nowtm-lt<INT_MAX){//int�̈�����͈͂Ȃ�
		func_tm[func_count].tm=(int)(nowtm-lt);//�������Ԋi�[
		memcpy(func_tm[func_count].str,st,STR_MAX-1);//������R�s�[
		func_tm[func_count].str[STR_MAX-1]=0;//�I�[�L�������
	}
	else//�����Ȃ�������
		func_tm[func_count].tm=-1;//�G���[

	lt=nowtm ;//�O��L�^���������Ƃ��ĕۑ�

	if(flag==1){//���Z�b�g
		for(i=func_count+1;i<FUNC_MAX;i++)
			func_tm[i].str[0]=0;
		func_count=0;
	}
	else
		func_count++;
}

//�f�[�^��`��
void draw_func_tm(int x, int y){
	int i;
	unsigned int total=0;
	for(i=0;i<FUNC_MAX;i++){
		if(func_tm[i].str[0]==0)break;
		DrawFormatStringToHandle(x,y+14*i,color[0],font[0],"%05.2f:%s",func_tm[i].tm/1000.0,func_tm[i].str );
		total+=func_tm[i].tm;
	}
	DrawFormatStringToHandle(x,y+14*i,color[0],font[0],"���v:%05.2f",total/1000.0);
}