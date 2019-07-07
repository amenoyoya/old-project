
//------------------------------------------------------------
//	g_tools.cpp		グラフィック周りの基本関数
//------------------------------------------------------------

#include	<windows.h>
#include	<stdio.h>
#include	"BasicTips.h"
#include	"TextEngine.h"

extern HWND		hwnd;		//ウィンドウのハンドル
extern HDC			win_hdc;	//デバイスコンテキスト（画面を操作するときに使います）
extern HINSTANCE	hinst;		//インスタンス（メモリ内にある実効ファイル）へのハンドル
						//↑２重起動などへの対策として自分自身のハンドルを持っておく

//-----------------------------------------------------------
//	一番お手軽なBMP読み込み
//-----------------------------------------------------------

int Load_Bmp( HDC hdc, char *f_name_of_BMP)
{
	HANDLE	hbmp;
	HDC		work_DC;

	hbmp=LoadImage(hinst,f_name_of_BMP,IMAGE_BITMAP,0,0,LR_CREATEDIBSECTION | LR_LOADFROMFILE);
	if( hbmp==NULL ){
		MessageBox(NULL,"画像読み込みに失敗しました","Load_Bmp()",MB_OK);
		return false;
	}
	work_DC = CreateCompatibleDC( hdc );
	SelectObject( work_DC, hbmp );

	BitBlt(hdc,0,0,640,480,work_DC,0,0,SRCCOPY);
    
	ReleaseDC( hwnd,work_DC );	
	DeleteObject( hbmp );

	return true;
}

//-----------------------------------------------------------
//	フルカラーBMP限定の自力読み込み関数
//-----------------------------------------------------------

int Load_Fullcolor_Bmp( HDC hdc, char *f_name_of_BMP)
	//フルカラーBMPの読み込み（インデックスカラーは無視）
{
    HANDLE				hF,hMem1, hMem2;
    LPBITMAPFILEHEADER	lp_Bitmap_file_header;			//←ファイルヘッダを指すポインタ
    LPBITMAPINFOHEADER	lp_Bitmap_info_header;			//←インフォヘッダを指すポインタ
	DWORD				dwResult;
    LONG				wx, wy;    
	DWORD				dwFileSize, dwOffBits;    
	WORD				wBitCount;
    DWORD				dwClrUsed, dwClrImportant;
	DWORD				dwSizeImage;    
	char				str[256];

	HANDLE		hMem;        
	char		*szBuffer;        
	BITMAPINFO	bmp_info;

	//ファイルを開く
    hF = CreateFile(	
		f_name_of_BMP,			//ファイル名
		GENERIC_READ,			//読み込みモード 
		0,						//共有はしない
		NULL,					//セキュリティは無視
		OPEN_EXISTING,			//新規生成じゃなくて読むだけ
		FILE_ATTRIBUTE_NORMAL,	//特に変わった属性はない
        NULL					//属性のコピーうんぬん･･･（よくわかんないから無視！）
	);

    if( hF == INVALID_HANDLE_VALUE ){	
       MessageBox(NULL, "ファイルが開けないよーん", "Error", MB_OK); 
		return -1;
    }


	//---------------------------------------------------
	//■ヘッダその１（BITMAPFILEHEADER）をまず調べる
	//---------------------------------------------------
    hMem1 = GlobalAlloc(GHND, sizeof(BITMAPFILEHEADER));	//ヒープをヘッダ分だけ確保
						//↑GHND(ﾌﾗｸﾞ定数)：再配置可能、かつ初期値としてゼロクリアが適用される
    lp_Bitmap_file_header = (LPBITMAPFILEHEADER)GlobalLock(hMem1);			//ロックする

	//ヘッダ分だけﾌｧｲﾙを読む
	ReadFile(	hF, 
				(LPBITMAPFILEHEADER)lp_Bitmap_file_header,
				sizeof(BITMAPFILEHEADER),
				&dwResult,
				NULL
	);
	dwFileSize = lp_Bitmap_file_header->bfSize;			//ﾌｧｲﾙ(全体)のサイズ
    dwOffBits  = lp_Bitmap_file_header->bfOffBits;		//ﾌｧｲﾙ先頭からBIT列までのOFFSET

		//DEBUG：ヘッダを表示
	    //wsprintf(str, "dwFileSize = %d, szFType = %s dwOffBits = %d[%xh]",
		//    dwFileSize, szFType, dwOffBits, dwOffBits );
	    //MessageBox(NULL, str, "BMP情報その１", MB_OK);

	//---------------------------------------------------
	//■ヘッダその２（BITMAPINFOHEADER）を調べる
	//---------------------------------------------------
	hMem2 = GlobalAlloc(GHND, sizeof(BITMAPINFOHEADER));	//ヒープを確保
	lp_Bitmap_info_header = (LPBITMAPINFOHEADER)GlobalLock(hMem2);			//ロック

	ReadFile(	hF, 
				(LPBITMAPINFOHEADER)lp_Bitmap_info_header,
				sizeof(BITMAPINFOHEADER), 
				&dwResult, 
				NULL
	);
	wx = lp_Bitmap_info_header->biWidth;		//幅
	wy = lp_Bitmap_info_header->biHeight;		//高さ    
	wBitCount = lp_Bitmap_info_header->biBitCount;	//１ピクセルあたりのBIT数（1,4,8,24）
    dwClrUsed = lp_Bitmap_info_header->biClrUsed;	//使用されている色数
	dwClrImportant = lp_Bitmap_info_header->biClrImportant;	//"重要な色"の数（減色でもしない限り無視、無視）

	//ファイルサイズを算出（フルカラー限定）
	dwSizeImage = wx*wy*4;	//フルカラーの場合１pixel=4byteなので

		//DEBUG：ヘッダを表示
		//wsprintf(str, "wx = %d, wy = %d\nwBitCount = %d, dwClrUsed = %d, dwClrImportant = %d",
		//	wx, wy, wBitCount, dwClrUsed, dwClrImportant);
		//MessageBox(NULL, str, "BMP情報その２", MB_OK);    
	

        
	//BITMAPFILEHEADERを除いたサイズの領域を確保･･･の筈なんだけど、
	//モノによっては 24bit/32bit が混在してごちゃごちゃみたいなので
	//「えいっ！」と 32bit×ピクセル数＋BITMAPFILEHEADER分確保♪
	bmp_info.bmiHeader = *lp_Bitmap_info_header;
	hMem = GlobalAlloc(GHND,  dwSizeImage + sizeof(BITMAPFILEHEADER) );

	szBuffer = (char *)GlobalLock(hMem);

	//ファイルポインタを先頭からBITMAPFILEHEADER分だけ進める
	SetFilePointer(hF, sizeof(BITMAPFILEHEADER), 0, FILE_BEGIN);

	//ファイルを読む
	if( 0 == ReadFile(
			hF,			//File handle
			szBuffer,	//バッファへのポインタ
			sizeof(BITMAPINFOHEADER) + dwSizeImage,	//読み取りサイズ 
			&dwResult,	//←実際に読み込んだファイルサイズが格納される
			NULL		//同期読み取り
	) ){
			sprintf( str,
				"読めなかった\n"
				"FILE SIZE : %d byte  \n"
				"Read size : %d byte  \n"
				"BITMAPINFOHEADER: %d byte  \n"
				"IMAGE size      : %d byte  ",
				dwFileSize,
				sizeof(BITMAPINFOHEADER) + dwSizeImage,
				sizeof(BITMAPINFOHEADER),
				dwSizeImage
			);

			MessageBox(NULL,(const char *)str,"error",MB_OK);	
			
	}
 
	//BITMAP展開
	SetDIBitsToDevice(hdc,
			0, 0,	//転送先座標
			wx, wy, //幅、高さ
			0, 0,	//転送元座標
			0, wy,	//走査開始番号、走査線の本数
			//ビットマップデータ開始のアドレス
			(char *)szBuffer + dwOffBits - sizeof(BITMAPFILEHEADER),
			&bmp_info, //BITMAPINFO構造体へのポインタ
	DIB_RGB_COLORS);

	GlobalUnlock(hMem);
	GlobalFree(hMem);
	    
	GlobalUnlock(hMem1);
	GlobalFree(hMem1);
	GlobalUnlock(hMem2);    
	GlobalFree(hMem2);    
	CloseHandle(hF);    
	
	return 0;
}


//------------------------------------------------
//	文字列表示（影付き）
//------------------------------------------------

int    StrPut3D(HDC hdc,int x,int y,int fontSize,UINT color1,UINT color2,char *str)
	//文字列表示（↑３Dってのは語弊があるかも：笑）
{
        HFONT   hfont,oldfont;
                
		hfont=CreateFont(
                fontSize,	//フォント高さ
				0,			//フォント幅
				0,			//		
				0,			//
				600,		//フォント太さ（0-1000で100単位：標準=400）
                0,			//TRUE=イタリック設定
				0,			//下線
				0,			//打消線
				SHIFTJIS_CHARSET,	//キャラクタセット
                OUT_DEFAULT_PRECIS,	//出力精度
                CLIP_DEFAULT_PRECIS,//クリップ精度
                DEFAULT_QUALITY,
                DEFAULT_PITCH | FF_DONTCARE,
                "ＭＳ 明朝"
		);
               
		if(hfont==NULL){
				MessageBox(NULL,"フォント失敗","えらー",MB_OK);
                return 0;
		}

		SetBkMode(hdc,TRANSPARENT);	//背景の「ふちどり」はしない
		
		//影の部分を表示
		SetTextColor(hdc,color2);				//色指定
		oldfont=(HFONT)SelectObject(hdc,hfont);	//フォント指定
		TextOut(hdc,x+1,y+1,str,strlen(str));		//表示
		SelectObject(hdc,oldfont);				//フォント指定戻し

		//表の部分を表示
		SetTextColor(hdc,color1);				//色指定
		oldfont=(HFONT)SelectObject(hdc,hfont);	//フォント指定
		TextOut(hdc,x,y,str,strlen(str));		//表示
		SelectObject(hdc,oldfont);				//フォント指定戻し

		DeleteObject(hfont);

        return 0;
}


//------------------------------------------------
//	１文字表示（影付き）
//------------------------------------------------

int    ChrPut3D(HDC hdc,int x,int y,int fontSize,
				UINT color1,UINT color2,char *str,int len)
	//１文字表示（↑３Dってのは語弊があるかも：笑）
	//	len：表示する文字のバイト数（1 or 2）
{
        HFONT   hfont,oldfont;
 
		//長さ指定は １ or ２限定ってことで（^^）
		if( len > 2 ){
			MessageBox(NULL,"２文字までにしてね","ChrPut3D()",MB_OK);
			return 0;
		}

		hfont=CreateFont(
                fontSize,	//フォント高さ
				0,			//フォント幅
				0,			//		
				0,			//
				600,		//フォント太さ（0-1000で100単位：標準=400）
                0,			//TRUE=イタリック設定
				0,			//下線
				0,			//打消線
				SHIFTJIS_CHARSET,	//キャラクタセット
                OUT_DEFAULT_PRECIS,	//出力精度
                CLIP_DEFAULT_PRECIS,//クリップ精度
                DEFAULT_QUALITY,
                DEFAULT_PITCH | FF_DONTCARE,
                "ＭＳ 明朝"
		);
               
		if(hfont==NULL){
				MessageBox(NULL,"フォント失敗","えらー",MB_OK);
                return 0;
		}

		SetBkMode(hdc,TRANSPARENT);	//背景の「ふちどり」はしない
		
		//影の部分を表示
		SetTextColor(hdc,color2);				//色指定
		oldfont=(HFONT)SelectObject(hdc,hfont);	//フォント指定
		//TextOut(hdc,x+1,y+1,str,strlen(str));		//表示
		TextOut(hdc,x+1,y+1,str,len);			//表示
		SelectObject(hdc,oldfont);				//フォント指定戻し

		//表の部分を表示
		SetTextColor(hdc,color1);				//色指定
		oldfont=(HFONT)SelectObject(hdc,hfont);	//フォント指定
		TextOut(hdc,x,y,str,len);				//表示
		SelectObject(hdc,oldfont);				//フォント指定戻し

		DeleteObject(hfont);

        return 0;
}

//------------------------------------------------
//	直線を描く
//------------------------------------------------

void Line(HDC hdc,int x1,int y1,int x2,int y2,UINT color,int penfat)
{
	//直線描画関数
	//penfat=線の太さ
	HPEN	hpen,oldpen;	//ペンオブジェクトへのハンドル

	hpen=CreatePen(PS_SOLID,penfat,color);	//ペンオブジェクトを生成
		
	if(hpen==NULL){
		MessageBox(NULL,"ペン生成に失敗しました","Line()",MB_OK);
		return;
	}
	oldpen=(HPEN)SelectObject(hdc,hpen); //生成したペンを指定（戻り値は以前の内容）

	MoveToEx(hdc,x1,y1,NULL);	//描き始めの位置を指定
	LineTo(hdc,x2,y2);			//終点座標まで線を引く

	SelectObject(hdc,oldpen);	//以前の設定を復帰しておく

	DeleteObject(hpen);			//ペンオブジェクトを破棄
	
	return;
}


//------------------------------------------------
//	四角形を描く（枠だけ）
//------------------------------------------------

void	Box(HDC hdc,RECT rect,UINT color)
{
	Line(hdc,rect.left,rect.top,rect.right,rect.top,color,1);
	Line(hdc,rect.right,rect.top,rect.right,rect.bottom,color,1);
	Line(hdc,rect.right,rect.bottom,rect.left,rect.bottom,color,1);
	Line(hdc,rect.left,rect.bottom,rect.left,rect.top,color,1);

	return;
}

//------------------------------------------------
//	四角形を描く（ぬりつぶし）
//------------------------------------------------

void	Boxf(HDC hdc,RECT rect,UINT color)
{
	HBRUSH	hbrush,oldbrush;

	hbrush=CreateSolidBrush(color);

	if(hbrush==NULL){
		MessageBox(NULL,"brush lost","Error",MB_OK);
		return;
	}

	oldbrush=(HBRUSH)SelectObject(hdc,hbrush);

	PatBlt(hdc,rect.left, rect.top,(rect.right-rect.left),(rect.bottom-rect.top),PATCOPY);

	SelectObject(hdc,oldbrush);
	DeleteObject(hbrush);

	return;
}


//------------------------------------------------
//	リソースBMPのロード
//------------------------------------------------

void	DrawResBmploadRect(HINSTANCE hinst,HDC hdc,int x,int y,RECT rect,LPCTSTR lpszBitmap)
	//RECT rect：リソース画像の転送したい領域を指定
{
	//リソースＢＭＰのロード
	HDC			hworkDC;	//ローカルなデバイスコンテキスト
	HBITMAP		hBM;		//BITMAPのハンドル
	HBITMAP		hOldBM;		//旧設定の保存用
	BITMAP		bm;			//BITMAP型(高さ/幅等の情報＋データ本体へのポインタ)変数

	hworkDC=CreateCompatibleDC(hdc);	//ローカルDCを生成
	hBM=LoadBitmap(hinst,lpszBitmap);	//インスタンス hinst を参照してメモリ上のBITMAP実体のﾊﾝﾄﾞﾙを得る

	GetObject(hBM,sizeof(BITMAP),&bm);	//ｵﾌﾞｼﾞｪｸﾄの情報を得る
	hOldBM=(HBITMAP)SelectObject(hworkDC,hBM); //使い捨てではあっても一応旧設定の待避

	BitBlt(hdc,x,y,abs(rect.right-rect.left),abs(rect.bottom-rect.top),hworkDC,rect.left,rect.top,SRCCOPY);	//転送

	SelectObject(hworkDC,hOldBM);		//旧設定の復帰（これを怠るとリソース食いつぶしになるのよ TT）
	DeleteObject(hBM);					//ｵﾌﾞｼﾞｪｸﾄ破棄
	DeleteDC(hworkDC);					//ローカルDC破棄

	return;
}


//------------------------------------------------
//	リソースBMPの特定のピクセルをGET
//------------------------------------------------

COLORREF 	GetPixelResBmp(HDC hdc,HINSTANCE hinst,int x,int y,LPCTSTR lpszBitmap)
{
	HDC			hworkDC;	//ローカルなデバイスコンテキスト
	HBITMAP		hBM;		//BITMAPのハンドル
	HBITMAP		hOldBM;		//旧設定の保存用
	BITMAP		bm;			//BITMAP型(高さ/幅等の情報＋データ本体へのポインタ)変数
	COLORREF	pix; 

	hworkDC=CreateCompatibleDC(hdc);	//ローカルDCを生成
	hBM=LoadBitmap(hinst,lpszBitmap);	//インスタンス hinst を参照してメモリ上のBITMAP実体のﾊﾝﾄﾞﾙを得る

	GetObject(hBM,sizeof(BITMAP),&bm);	//ｵﾌﾞｼﾞｪｸﾄの情報を得る
	hOldBM=(HBITMAP)SelectObject(hworkDC,hBM); //使い捨てではあっても一応旧設定の待避

	pix = GetPixel(hworkDC,x,y);

	SelectObject(hworkDC,hOldBM);		//旧設定の復帰（これを怠るとリソース食いつぶしになるのよ TT）
	DeleteObject(hBM);					//ｵﾌﾞｼﾞｪｸﾄ破棄
	DeleteDC(hworkDC);					//ローカルDC破棄

	return pix;
}


//end of file

