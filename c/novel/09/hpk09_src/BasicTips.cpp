//--------------------------------------------------------------------------------------
//	BasicTips.cpp
//
//	�Q�[���̊�{�I�ȉ��󂯊֐��ȂǂȂ�
//--------------------------------------------------------------------------------------

#include	<windows.h>
#include	<stdio.h>
#include	"g_tool.h"	

//-------------------------------------------------------
//	�O����`
//-------------------------------------------------------

extern	HWND		win_hwnd;	//�E�B���h�E�̃n���h��
extern	HDC			win_hdc;	//hdc


//------------------------------------------------------
//	�Ȉ�MessageBox
//------------------------------------------------------

void msg(char *msg,char *title)
{
	MessageBox(NULL,msg,title,MB_OK);
}

//-------------------------------------------------------
// HLS_bload()	�ȈՃo�C�i�����[�h�֐���
//-------------------------------------------------------

int	HLS_bload(const char *f_name , char *buf)
	//�قƂ�� N88BASIC �̃m���ł��˂�(��)
{
	FILE	*fp;
	char	str[256];

	printf("File: %s \n\n",f_name);

	if( NULL==(fp=fopen(f_name,"rb"))){
		sprintf(str,"Error:Open file [%s]",f_name);
		msg(str,"HLS_bload()");
		fclose(fp);
		return false;
	}

	while( EOF!=(*buf++=(char)fgetc(fp)) );
	*buf=0;	//�I�[�Ƃ���NULL���������Ă����i�ی��j

	fclose(fp);

	return true;
}

//-------------------------------------------------------
// HLS_bsave()	�ȈՃo�C�i���Z�[�u�֐�
//		
//-------------------------------------------------------

int	HLS_bsave(const char *f_name , char *buf , int size )
{
	FILE	*fp;
	char	str[256];

	printf("File: %s \n\n",f_name);

	if( NULL==(fp=fopen(f_name,"wb"))){
		sprintf(str,"Error:Open file [%s]",f_name);
		msg( str,"HLS_bsave()" );
		fclose(fp);
		return false;
	}

	//while( EOF!=(*buf++=(char)fgetc(fp)) );
	//*buf=0;	//�I�[�Ƃ���NULL���������Ă����i�ی��j

	fwrite(buf,sizeof(char),size,fp);

	fclose(fp);

	return true;
}

//----------------------------------------------------
//	HLS_random_reset()	
//
//  �������v�ɂ���āA�����n��������_���ɃZ�b�g����
//----------------------------------------------------
#include	<time.h>
#include    <stdlib.h>

void HLS_random_reset()
{
   srand( (unsigned)time( NULL ) );

}

//----------------------------------------------------
//	int HLS_random(int val)	
//
//  0�`val-1�̐����̃����_���l��Ԃ�
//----------------------------------------------------

int HLS_random(int val)
{
	return (int)(rand()*val/RAND_MAX);
}

//----------------------------------------------------
//	char *hankaku_numi(int n)	
//
//	�������𔼊p�P�O�i������ɂ��� 
//----------------------------------------------------	

char *hankaku_numi(int n)	/* �������𔼊p�P�O�i������ɂ��� */
{
	int		i=0;
	static char		str[50];

	sprintf( str,"%d",n);

	return( str );
}

//----------------------------------------------------
//	char *zenkaku_numi(int n)	
//
//	��������S�p�P�O�i������ɂ��� 
//----------------------------------------------------	

char *zenkaku_numi(int n)	/* ��������S�p�P�O�i������ɂ��� */
{
	int		i=0;
	static char		*ptr,*ptr2;
	static char		a[50],b[50];

	ptr2=&b[0];
	ptr =&a[0];
	itoa(n,ptr,10); 
	//�����ڃR�[�h�u�������i���n�I ^^;�j
	while(*(ptr+i)!=0){
		switch(*(ptr+i)){
			case	0x30:b[i*2]=(char)0x82;b[i*2+1]=(char)0x4f; break;
			case	0x31:b[i*2]=(char)0x82;b[i*2+1]=(char)0x50; break;
			case	0x32:b[i*2]=(char)0x82;b[i*2+1]=(char)0x51; break;
			case	0x33:b[i*2]=(char)0x82;b[i*2+1]=(char)0x52; break;
			case	0x34:b[i*2]=(char)0x82;b[i*2+1]=(char)0x53; break;
			case	0x35:b[i*2]=(char)0x82;b[i*2+1]=(char)0x54; break;
			case	0x36:b[i*2]=(char)0x82;b[i*2+1]=(char)0x55; break;
			case	0x37:b[i*2]=(char)0x82;b[i*2+1]=(char)0x56; break;
			case	0x38:b[i*2]=(char)0x82;b[i*2+1]=(char)0x57; break;
			case	0x39:b[i*2]=(char)0x82;b[i*2+1]=(char)0x58; break;
			default:	 //printf("\a");
					goto _OUT;
		}
		i ++;
	}

	_OUT:
	b[i*2]=0;
	return(ptr2);
}

//----------------------------------------------------
//	char *zenkaku_numLL(LONGLONG n)	
//
//	LONGLONG��������S�p�P�O�i������ɂ��� 
//----------------------------------------------------	

char *zenkaku_numLL(LONGLONG n)	/* LONGLONG��������S�p�P�O�i������ɂ��� */
{
	int		i=0;
	static char		*ptr,*ptr2;
	static char		a[100],b[100];

	ptr2=&b[0];
	ptr =&a[0];
	_i64toa(n,ptr,10);
	while(*(ptr+i)!=0){
		switch(*(ptr+i)){
			case	0x30:b[i*2]=(char)0x82;b[i*2+1]=(char)0x4f; break;
			case	0x31:b[i*2]=(char)0x82;b[i*2+1]=(char)0x50; break;
			case	0x32:b[i*2]=(char)0x82;b[i*2+1]=(char)0x51; break;
			case	0x33:b[i*2]=(char)0x82;b[i*2+1]=(char)0x52; break;
			case	0x34:b[i*2]=(char)0x82;b[i*2+1]=(char)0x53; break;
			case	0x35:b[i*2]=(char)0x82;b[i*2+1]=(char)0x54; break;
			case	0x36:b[i*2]=(char)0x82;b[i*2+1]=(char)0x55; break;
			case	0x37:b[i*2]=(char)0x82;b[i*2+1]=(char)0x56; break;
			case	0x38:b[i*2]=(char)0x82;b[i*2+1]=(char)0x57; break;
			case	0x39:b[i*2]=(char)0x82;b[i*2+1]=(char)0x58; break;
			default:	 //printf("\a");
					goto _OUT;
		}
		i ++;
	}

	_OUT:
	b[i*2]=0;
	return(ptr2);
}



//------------------------------------------------
//	������̐擪 n �o�C�g���������������肷��
//------------------------------------------------

bool str_top_cmp( char *str1, char *str2, int n )
{
	char	buf1[256],buf2[256];

	memcpy( buf1,str1,(size_t)n );
	buf1[n+1]=0;

	memcpy( buf2,str2,(size_t)n );
	buf2[n+1]=0;

	if( strcmp( (const char*)buf1, (const char*)buf2 ) == 0 ) return true;	//��������� true ��Ԃ�

	return false;	//�������Ȃ���� false ��Ԃ�
}

//------------------------------------------------
//	int	HLS_dest_ptr(char *ptr1,char *ptr2)
//
//	�|�C���^ ptr1�Aptr2 �̃��������̋�����Ԃ�
//------------------------------------------------

int	HLS_dest_ptr(char *ptr1,char *ptr2)
{
	return( (int)(ptr2 - ptr1) );
}

//------------------------------------------------
//	int HLS_timer_start( DWORD *timer )
//
//	�^�C�}�[�����������ăJ�E���g�J�n����B
//	HLS_timer_check() �֐��ƃy�A�Ŏg�p�B
//
//		DWORD *timer�F�J�E���g�J�n�������i�[����ϐ��B
//					  �֐��{�̓��ŕێ����Ȃ��̂́A����
//					  �^�C�}�[�̓����ғ����l�������[�u�B
//		
//		�߂�l      �F��ɂO
//------------------------------------------------

int HLS_timer_start( DWORD *timer )
{
	*timer = GetTickCount();

	return 0;
}

//------------------------------------------------
//	int HLS_timer_check( DWORD timer , DWORD wait_time )
//
//	HLS_timer_start()�ŃJ�E���g�J�n���Ă���w�莞��
//  �o�߂������ǂ����𒲂ׂ�B
//
//		DWORD timer	   �F�J�E���g�J�n�������i�[�����ϐ��B
//		DWORD wait_time�F�E�F�C�g����(�~���b)
//
//		�߂�l�Ftrue =�w�莞�Ԍo�߂��� 
//				false=�w�莞�Ԍo�߂��Ă��Ȃ�
//
//	   �y�g�p���@�z
//			DWORD	timer;
//
//			HLS_timer_start(&timer);	//�J�E���g�J�n
//
//			while( HLS_timer_check(timer,100)==false );	//100ms�o�܂ŃE�F�C�g
//------------------------------------------------	

int HLS_timer_check( DWORD timer , DWORD wait_time )
{
	if( timer+wait_time <= GetTickCount() )return true;

	return false;
}



//-----------------------------------------------
//	RECT�^�ϐ��̒Z�k�L�q�p
//-----------------------------------------------

RECT MK_RECT(int sx,int sy,int ex,int ey)
	//	(sx,sy)-(ex,ey)�̗̈���Z�b�g����RECT�^�ϐ���Ԃ�
{
	RECT	rect;

	rect.left	= sx;
	rect.top	= sy;
	rect.right	= ex;
	rect.bottom	= ey;

	return rect;
}

//----------------------------------------
//	�f�o�C�X�҂��p�̃E�F�C�g
//----------------------------------------

void _Wait(int wait_time)
{
	DWORD	timer;

	HLS_timer_start(&timer);	//�J�E���g�J�n
	while( HLS_timer_check(timer,wait_time)==false ){
		Sleep(5);	
	};	//�E�F�C�g
}

//----------------------------------------
//	��ʂ̖��邳�� ���� �Â�����
//----------------------------------------

void _G_brightness_down( HDC _hdc, int xpos,int ypos, int xsize, int ysize, int n )
	//�R���������H����@�ŉ�ʂ̖��邳��������֐��i�ڒ��ڒ��x���̂Ŏ��p���[�� T�[T�j
{
	COLORREF		a;
	unsigned int	r,g,b;
	int				x,y;
	int		  rate;


	if( n >=50 )return; 

	rate = (100 - n);

	for( y=ypos;y<ypos+ysize;y++){
		for( x=xpos;x<xpos+xsize;x++){
			a = GetPixel(_hdc,x,y);

			a = a*rate/100;

			r = (a & 0x0000ff);
			g = (a & 0x00ff00);
			b = (a & 0xff0000);

			r = (r*rate/100) & 0x0000ff;
			g = (g*rate/100) & 0x00ff00;
			b = (b*rate/100) & 0xff0000;
		
			SetPixel(_hdc,x,y,(COLORREF)(r|g|b));
		}
	}
}

//===================================================
//	Window����ʒ��S�Ɉړ�����
//===================================================

int SetWinCenter(HWND hWnd)
{    
	RECT	desktop;
	RECT	window;

	GetWindowRect(GetDesktopWindow(), (LPRECT)&desktop);	//�f�X�N�g�b�v�̃T�C�Y���擾
	GetWindowRect(hWnd, (LPRECT)&window);					//���E�B���h�E�̃T�C�Y���擾

	//�E�B���h�E�ʒu���ړ�
	SetWindowPos(hWnd, 
		HWND_TOP,			//��Ԏ�O�ɕ\��
		(desktop.right - (window.right-window.left)) / 2,	//X �ʒu
		(desktop.bottom - (window.bottom-window.top)) / 2,	//Y �ʒu
		(window.right-window.left), 
		(window.bottom-window.top),
		SWP_SHOWWINDOW		//���ɕςȃI�v�V�������Ȃ����ʂɕ\��
	); 

	return 0;
}

//-----------------------------------------------------
//	FPS�\��
//-----------------------------------------------------

void HLS_stc_FPS(HDC hdc)
{
	static DWORD FPS           =0;
	static DWORD FrameCount    =0;
	static DWORD FrameTime     =0;
	static DWORD FrameTimeOld  =0;
	static char	 buf[256];

	FrameCount++;		//�Ă΂�邽�тɃt���[�������J�E���g���Ă���

	FrameTime = GetTickCount();	//���ݎ������擾	
	//�O��̃`�F�b�N��������P�b�i��1000�~���b�j�o�������H
	if (FrameTime - FrameTimeOld > 1000) {
		
		//�P�b�Ԃ̃J�E���g�����e�o�r
		FPS = FrameCount;

		FrameCount = 0;	//�J�E���^���[���N���A
		
		//���̃`�F�b�N�̂��߂Ɍ��ݎ�����ۑ�
		FrameTimeOld  = FrameTime;
	}
	
	sprintf(buf,"FPS:%03ld TC:%03ld ",(unsigned int)FPS,(unsigned int)FrameTime );

	Boxf(hdc,MK_RECT(0,0,180,18),RGB(255,255,255));//g_tool.cpp �ɂ����`�ʂ�Ԃ��֐�

	SetTextColor(hdc,RGB(255,150,100));
	TextOut(hdc,1,0,buf,strlen(buf));
	TextOut(hdc,0,0,buf,strlen(buf));	
}


// end of file
