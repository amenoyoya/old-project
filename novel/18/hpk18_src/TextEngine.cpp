//-----------------------------------------------------------------------------------------
//	TexitEngine.cpp
//-----------------------------------------------------------------------------------------

#include	<windows.h>
#include	"BasicTips.h"
#include	"g_tool.h"
#include	"main.h"
#include	"TextEngine.h"
#include	"Text_Com_01.h"


//###################################################################
//	�s�d�w�s�G���W��
//###################################################################

//  �� ���񂿂���
//	SHIFT JIS �R�[�h�́A��P�o�C�g�� 80h �ȏ�ł���B	
//	{ } / ; ���̃V�i���I�t�@�C�����䕶���́A���ׂ�		
//	80h �����̃R�[�h�ł���̂ŁA�S�p�����Ƌ�������ꍇ��
//	�K����Q�o�C�g�ƂԂ��邱�ƂɂȂ�B ���������āA	
//	���ꂪ���p�������S�p�������̔���́A{ } / ; ����	
//	�������ꍇ���̒��O�̂P�o�C�g�� 80h �ȏォ�ǂ���	
//	�ōs�Ȃ����Ƃ��ł���B80h�ȏ�Ȃ�S�p�A80h�ȉ��Ȃ�	
//	���p�����Ő���ΏۂƂȂ�B	

unsigned char	TEXT_BUF[SIZE_OF_TEXT_BUF];	//�X�N���v�g��ǂݍ��ރG���A

unsigned char	*TEXT;	//Text pointer�i�e�L�X�g���߈ʒu���|�C���g���܂��j

int		Font_Size;	//�t�H���g�T�C�Y

int		TEXT_WAIT;		//�P�����\���̃E�F�C�g
RECT	TEXT_AREA;		//�e�L�X�g��W�J�����ʗ̈�
int		TEXT_X;			//���݂̕\���ʒu�w
int		TEXT_Y;			//���݂̕\���ʒu�x
int		TEXT_X_PITCH;	//��������s�b�`�w
int		TEXT_Y_PITCH;	//��������s�b�`�x

DWORD	TEXT_TIMER;		//�^�C�}�[

//-------------------------------------
//	TEXT�G���W��������
//-------------------------------------

void _Set_Default_params()
	//�f�t�H���g�p�����[�^�̐ݒ�
{	

	TEXT_WAIT = 60;			//�P�����\���̃E�F�C�g(ms)
	Font_Size = 20;				//Font size

	TEXT_AREA.left	= 20;		//�e�L�X�g�\���G���A�i���j�������ł�640*480�̉�ʒ[����ꗥ20�h�b�g�����ɐݒ肵�Ă��܂�
	TEXT_AREA.top	= 20;		//�e�L�X�g�\���G���A�i��j
	TEXT_AREA.right	= 640-20;	//�e�L�X�g�\���G���A�i�E�j
	TEXT_AREA.bottom= 480-20;	//�e�L�X�g�\���G���A�i���j

	TEXT_X=TEXT_AREA.left;			//�����ʒu�J�E���^�������i�\���G���A��������n�܂�j	
	TEXT_Y=TEXT_AREA.top;		

	TEXT_X_PITCH = Font_Size/2;					//��������s�b�`�i�w�j
	TEXT_Y_PITCH = Font_Size*130/100;			//��������s�b�`�i�x�j
}

void Init_Text_engine()
	//�C�j�V�����C�Y����́u�e�v�֐�
{
	TEXT=TEXT_BUF;	//�e�L�X�g�|�C���^TEXT���o�b�t�@�擪�ɃZ�b�g

	//�f�t�H���g�̃X�N���v�g�t�@�C����ǂ�
	HLS_bload("default.txt",(char *)TEXT_BUF);

	_Set_Default_params();			//�f�t�H���g�p�����[�^�̐ݒ�

	HLS_timer_start(&TEXT_TIMER);	//�^�C�}�[�X�^�[�g
}

//-------------------------------------
//	�����ʒu�̃C���N�������g
//-------------------------------------

void Increment_textp_pos(int inc)	
	//�����\���ʒu�̃C���N�������g
	//	int inc�F��byte�C���N�������g���邩���Por2
{
	//�e�L�X�g�`��G���A����͂ݏo���Ă��܂��ꍇ�ɂ͉��s���������
	if( (TEXT_X+TEXT_X_PITCH*inc) < (TEXT_AREA.right-TEXT_X_PITCH*2) ){
		TEXT_X += TEXT_X_PITCH*inc;
	}else{
		TEXT_X =  TEXT_AREA.left;

		if( (TEXT_Y+TEXT_Y_PITCH) < (TEXT_AREA.bottom-TEXT_Y_PITCH) ){
			TEXT_Y += TEXT_Y_PITCH;
		}else{
			//�P�y�[�W�̕\���������z���Ă��܂��ꍇ�́A�x����\�����ċ����I��
			//���Ƃ肠���� TEST version �Ȃ̂ŉ��y�[�W����͖������Ȃ̂�[��
			MessageBox(hwnd,"��ʂ̏I�[�ɒB���܂���","ERROR",MB_OK );

			//�����I��
			PostQuitMessage(0);

		}
	}
}

//-------------------------------------
//	�P�O�i���e�L�X�g�̉��
//-------------------------------------

int kaiseki_10()
	// 10�i���e�L�X�g�̉��
{
	int		val=0;
	int		flag=0;
	int		fugo=1;	//�����ł��i�΁j
	char	buf[40],str[256];
	int		i;

	while( *TEXT<=' ' ) TEXT++;	//�󔒂�ǂݔ�΂�

	do{
		switch( *TEXT ){
			case	'-':	fugo=-1;break;	//���r���ŏo�Ă��Ă��}�C�i�X��������i�o�O�̌����ȁ[ ^^;�j
			case	'0':	val+=0;	break;
			case	'1':	val+=1;	break;
			case	'2':	val+=2;	break;		
			case	'3':	val+=3;	break;		
			case	'4':	val+=4;	break;		
			case	'5':	val+=5;	break;		
			case	'6':	val+=6;	break;		
			case	'7':	val+=7;	break;		
			case	'8':	val+=8;	break;		
			case	'9':	val+=9;	break;
			default:	//10�i���ł͖��������ꍇ
						for(i=0;i<32;i++){
							buf[i]=*(TEXT+i);
						}
						buf[i]=0;
						sprintf(str,"[%s]�F10�i���ł͂���܂���",buf);
						msg(str,"����[");
						PostMessage(hwnd,WM_CLOSE,0,0);
						break;
		}

		TEXT++;
		if( *TEXT>' ' && *TEXT!=',' ){
			flag=0;
			val*=10;
		}else{
			flag=1;
		}

	}while( flag==0 );

	val *= fugo;

	return val;
}

//-------------------------------------------
//	�e�L�X�g������̉�́i�X�y�[�X+[,]��؂�Łj
//-------------------------------------------

char *Kaiseki_TextStr()
	//	�e�L�X�g���當�����؏o��
{
	static char	str[512];
	int			counter,flag;

	//�󔒁i��߰���TAB�j���΂�
	while( *TEXT==' ' || *TEXT==0x9 )TEXT++;

	//�e�L�X�g���R�s�[
	//�I�������F�,�or� �or�uCR�vor�TAB�
	counter=0;
	flag=0;
	while(counter<254 && flag==0){
		switch( (unsigned char)*TEXT ){
			case	0x0d:	flag=1;	break;	//[CR]=�s��			
			case	0x0a:	flag=1;	break;	//[LF]=�s�� 001114
			case	' ':	flag=1;	break;	//SPACE CODE
			case	0x09:	flag=1;	break;	//[TAB]
			case	',':	flag=1;	break;	//[,]
		}
		
		if(flag==0){
			str[counter]=*TEXT;
			counter++;
			TEXT++;
		}
	}

	str[counter]=0;

	return &str[0];
}


//-------------------------------------------
//	�e�L�X�g������̉�́i[CR]��؂�Łj
//-------------------------------------------

char *Kaiseki_TextStr_CR()
	//	�e�L�X�g���當�����؏o��
	//	Kaiseki_TextStr()�Ƃ̈Ⴂ�́A[CR][LF]�݂̂���؂�Ƃ��Ĉ����Ƃ���B
{
	static char	str[512];
	int			counter,flag;

	//�󔒁i��߰� �� TAB�j���΂�
	while( *TEXT==' ' || *TEXT==0x9 )TEXT++;

	//�e�L�X�g���R�s�[
	//�I�������F�s��
	counter=0;
	flag=0;
	while(counter<254 && flag==0){
		switch( (unsigned char)*TEXT ){
			case	0x0d:	if( *(TEXT+1)==0x0a )flag=1;			break;	//[CR]=�s��
			case	0x0a:	if( *(TEXT-1)==0x0d )flag=1;counter--;	break;	//[LF]=�s��
		}
		
		if(flag==0){
			str[counter]=*TEXT;
			counter++;
			TEXT++;
		}
	}

	str[counter]=0;

	//char	buf[512];
	//sprintf( buf,"[%s]",str);
	//msg( buf,"aaa" );

	//str[counter-1]=0;

	//MessageBox(NULL,(const char *)str,"aaa",MB_OK);

	return &str[0];
}

//--------------------------------------------------------
//	�R�}���h�����̐U�蕪��
//--------------------------------------------------------

void Command_call()
	//�u#�v���������Ƃ���ł��̊֐����ĂԂƁA�u#�v��
	//�����R�}���h������͂��Ă��̏����֐����Ăт܂�
{
	char	com_name[256];
	int		i=0;
	int		flag=OFF;

	TEXT++;		//#���΂�

	//�R�}���h������̐؂�o��
	while( *TEXT>0x20 ){
		com_name[i] = *TEXT;
		TEXT++;
		i++;
	}
	TEXT--;
	com_name[i]=0;	//�����NULL����

	//�R�}���h���̕]�� �� �����֐��Ăяo��
	if( strcmp(com_name,"delay"   )==0 ){	Com_delay();		flag=ON;}	//�x��
	if( strcmp(com_name,"wait"    )==0 ){	Com_cursor_blink();	flag=ON;}	//�J�[�\���u�����N
	if( strcmp(com_name,"w"       )==0 ){	Com_cursor_blink();	flag=ON;}	//�J�[�\���u�����N
	if( strcmp(com_name,"halt"    )==0 ){	Com_halt();			flag=ON;}	//�I��
	if( strcmp(com_name,"page"    )==0 ){	Com_page();			flag=ON;}	//���y�[�W

	//		��
	//���̂��������ɑ��̃R�}���h���ǉ����Ă����܂��傤
	//		��


	//�t���O�����āA�؂�o���ꂽ�R�}���h�����L���ȃR�}���h���������ǂ����m�F����
	if( flag == OFF ){
		char	str[256];

		sprintf( str,"�x���F�����ȃR�}���h [#%s] ���L�q����Ă��܂�",com_name);
		MessageBox(NULL,str,"Command_call()",MB_OK);
	}
}

//--------------------------------------------------------
//	���䕶���̏���
//--------------------------------------------------------

int Check_control_chr()
	//*TEXT �̃|�C���g����P�o�C�g�������`�F�b�N���A
	//���䕶���ł���Ώ������� true ��Ԃ��A����ȊO��
	//false ��Ԃ�
{
	switch( *TEXT ){
		case	'#':	Command_call();		//�R�}���h���������Ă�
						TEXT++;
						return true;
		case	0x09:	//TAB	
		case	0x0a:	//LF	
		case	0x0d:	//CR	
						return true;		//�������Ȃ��Ŗ߂�==������
		case	';':	Com_linefeed();		//[;] ���s
						return true;
	}

	return false;	//���䕶���ɊY�����Ȃ����� �� false��Ԃ�
}



//###############################################################
//	TEXT�G���W���i�V�i���I��C���^�v���^�j�{�̕�
//###############################################################

//-------------------------------------
//	�������G���W�����{�̂ˁ�
//-------------------------------------
int Text_engine()
{
	//------------------------------------------
	// �E�F�C�g�����Ȃ���e�L�X�g��\������
	//------------------------------------------
	int color1=RGB(150,230,230);	//�����F
	int color2=RGB( 10, 10, 10);	//�e�F

	//�w�莞�Ԍo�߂��Ă��Ȃ��ꍇ��Mainloop�ɖ߂�
	if( HLS_timer_check(TEXT_TIMER,TEXT_WAIT)==false )return 0;	

	HLS_timer_start(&TEXT_TIMER);	//�^�C�}�[�ăX�^�[�g

	//���P������\������

		if( (unsigned char)(*TEXT)<(unsigned char)0x80  ){

			//�R���g���[���������ǂ����𔻒f���A�Y�����Ȃ���Ή�ʂɏo��
			if( Check_control_chr()==false ){
				ChrPut3D(Back_DC,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,1);
				
				Increment_textp_pos(1);	//�����\���ʒu�̃C���N�������g=1byte
			}
			TEXT++;		//�e�L�X�g�|�C���^���P�o�C�g�i�߂�
			
		}else{
			//�Q�o�C�g�����̏ꍇ�͂Q�o�C�g���o��
			ChrPut3D(Back_DC,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,2);
		
			Increment_textp_pos(2);	//�����\���ʒu�̃C���N�������g=2byte

			TEXT+=2;	//�e�L�X�g�|�C���^���Q�o�C�g�i�߂�	
	
		}
		

	return 0;
}



//end of file

