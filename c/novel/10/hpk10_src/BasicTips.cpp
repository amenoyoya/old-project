//--------------------------------------------------------------------------------------
//	BasicTips.cpp
//
//	ゲームの基本的な下受け関数などなど
//--------------------------------------------------------------------------------------

#include	<windows.h>
#include	<stdio.h>
#include	"g_tool.h"	

//-------------------------------------------------------
//	外部定義
//-------------------------------------------------------

extern	HWND		win_hwnd;	//ウィンドウのハンドル
extern	HDC			win_hdc;	//hdc


//------------------------------------------------------
//	簡易MessageBox
//------------------------------------------------------

void msg(char *msg,char *title)
{
	MessageBox(NULL,msg,title,MB_OK);
}

//-------------------------------------------------------
// HLS_bload()	簡易バイナリロード関数♪
//-------------------------------------------------------

int	HLS_bload(const char *f_name , char *buf)
	//ほとんど N88BASIC のノリですねぇ(笑)
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
	*buf=0;	//終端としてNULL文字を入れておく（保険）

	fclose(fp);

	return true;
}

//-------------------------------------------------------
// HLS_bsave()	簡易バイナリセーブ関数
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
	//*buf=0;	//終端としてNULL文字を入れておく（保険）

	fwrite(buf,sizeof(char),size,fp);

	fclose(fp);

	return true;
}

//----------------------------------------------------
//	HLS_random_reset()	
//
//  内蔵時計によって、乱数系列をランダムにセットする
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
//  0～val-1の整数のランダム値を返す
//----------------------------------------------------

int HLS_random(int val)
{
	return (int)(rand()*val/RAND_MAX);
}

//----------------------------------------------------
//	char *hankaku_numi(int n)	
//
//	整数ｎを半角１０進文字列にする 
//----------------------------------------------------	

char *hankaku_numi(int n)	/* 整数ｎを半角１０進文字列にする */
{
	int		i=0;
	static char		str[50];

	sprintf( str,"%d",n);

	return( str );
}

//----------------------------------------------------
//	char *zenkaku_numi(int n)	
//
//	整数ｎを全角１０進文字列にする 
//----------------------------------------------------	

char *zenkaku_numi(int n)	/* 整数ｎを全角１０進文字列にする */
{
	int		i=0;
	static char		*ptr,*ptr2;
	static char		a[50],b[50];

	ptr2=&b[0];
	ptr =&a[0];
	itoa(n,ptr,10); 
	//↓直接コード置き換え（原始的 ^^;）
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
//	LONGLONG整数ｎを全角１０進文字列にする 
//----------------------------------------------------	

char *zenkaku_numLL(LONGLONG n)	/* LONGLONG整数ｎを全角１０進文字列にする */
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
//	文字列の先頭 n バイト分が等しいか判定する
//------------------------------------------------

bool str_top_cmp( char *str1, char *str2, int n )
{
	char	buf1[256],buf2[256];

	memcpy( buf1,str1,(size_t)n );
	buf1[n+1]=0;

	memcpy( buf2,str2,(size_t)n );
	buf2[n+1]=0;

	if( strcmp( (const char*)buf1, (const char*)buf2 ) == 0 ) return true;	//等しければ true を返す

	return false;	//等しくなければ false を返す
}

//------------------------------------------------
//	int	HLS_dest_ptr(char *ptr1,char *ptr2)
//
//	ポインタ ptr1、ptr2 のメモリ内の距離を返す
//------------------------------------------------

int	HLS_dest_ptr(char *ptr1,char *ptr2)
{
	return( (int)(ptr2 - ptr1) );
}

//------------------------------------------------
//	int HLS_timer_start( DWORD *timer )
//
//	タイマーを初期化してカウント開始する。
//	HLS_timer_check() 関数とペアで使用。
//
//		DWORD *timer：カウント開始時刻を格納する変数。
//					  関数本体内で保持しないのは、複数
//					  タイマーの同時稼動を考慮した措置。
//		
//		戻り値      ：常に０
//------------------------------------------------

int HLS_timer_start( DWORD *timer )
{
	*timer = GetTickCount();

	return 0;
}

//------------------------------------------------
//	int HLS_timer_check( DWORD timer , DWORD wait_time )
//
//	HLS_timer_start()でカウント開始してから指定時間
//  経過したかどうかを調べる。
//
//		DWORD timer	   ：カウント開始時刻を格納した変数。
//		DWORD wait_time：ウェイト時間(ミリ秒)
//
//		戻り値：true =指定時間経過した 
//				false=指定時間経過していない
//
//	   【使用方法】
//			DWORD	timer;
//
//			HLS_timer_start(&timer);	//カウント開始
//
//			while( HLS_timer_check(timer,100)==false );	//100ms経つまでウェイト
//------------------------------------------------	

int HLS_timer_check( DWORD timer , DWORD wait_time )
{
	if( timer+wait_time <= GetTickCount() )return true;

	return false;
}



//-----------------------------------------------
//	RECT型変数の短縮記述用
//-----------------------------------------------

RECT MK_RECT(int sx,int sy,int ex,int ey)
	//	(sx,sy)-(ex,ey)の領域をセットしたRECT型変数を返す
{
	RECT	rect;

	rect.left	= sx;
	rect.top	= sy;
	rect.right	= ex;
	rect.bottom	= ey;

	return rect;
}

//----------------------------------------
//	デバイス待ち用のウェイト
//----------------------------------------

void _Wait(int wait_time)
{
	DWORD	timer;

	HLS_timer_start(&timer);	//カウント開始
	while( HLS_timer_check(timer,wait_time)==false ){
		Sleep(5);	
	};	//ウェイト
}

//----------------------------------------
//	画面の明るさを ｎ％ 暗くする
//----------------------------------------

void _G_brightness_down( HDC _hdc, int xpos,int ypos, int xsize, int ysize, int n )
	//由緒正しい？お作法で画面の明るさを下げる関数（目茶目茶遅いので実用性ゼロ TーT）
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
//	Windowを画面中心に移動する
//===================================================

int SetWinCenter(HWND hWnd)
{    
	RECT	desktop;
	RECT	window;

	GetWindowRect(GetDesktopWindow(), (LPRECT)&desktop);	//デスクトップのサイズを取得
	GetWindowRect(hWnd, (LPRECT)&window);					//自ウィンドウのサイズを取得

	//ウィンドウ位置を移動
	SetWindowPos(hWnd, 
		HWND_TOP,			//一番手前に表示
		(desktop.right - (window.right-window.left)) / 2,	//X 位置
		(desktop.bottom - (window.bottom-window.top)) / 2,	//Y 位置
		(window.right-window.left), 
		(window.bottom-window.top),
		SWP_SHOWWINDOW		//特に変なオプションもなく普通に表示
	); 

	return 0;
}

//-----------------------------------------------------
//	FPS表示
//-----------------------------------------------------

void HLS_stc_FPS(HDC hdc)
{
	static DWORD FPS           =0;
	static DWORD FrameCount    =0;
	static DWORD FrameTime     =0;
	static DWORD FrameTimeOld  =0;
	static char	 buf[256];

	FrameCount++;		//呼ばれるたびにフレーム数をカウントしていく

	FrameTime = GetTickCount();	//現在時刻を取得	
	//前回のチェック時刻から１秒（＝1000ミリ秒）経ったか？
	if (FrameTime - FrameTimeOld > 1000) {
		
		//１秒間のカウント数＝ＦＰＳ
		FPS = FrameCount;

		FrameCount = 0;	//カウンタをゼロクリア
		
		//次のチェックのために現在時刻を保存
		FrameTimeOld  = FrameTime;
	}
	
	sprintf(buf,"FPS:%03ld TC:%03ld ",(unsigned int)FPS,(unsigned int)FrameTime );

	Boxf(hdc,MK_RECT(0,0,180,18),RGB(255,255,255));//g_tool.cpp にある矩形ぬりつぶし関数

	SetTextColor(hdc,RGB(255,150,100));
	TextOut(hdc,1,0,buf,strlen(buf));
	TextOut(hdc,0,0,buf,strlen(buf));	
}


// end of file
