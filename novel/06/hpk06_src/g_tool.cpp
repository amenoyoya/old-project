
//------------------------------------------------------------
//	g_tools.cpp		�O���t�B�b�N����̊�{�֐�
//------------------------------------------------------------

#include	<windows.h>
#include	<stdio.h>

extern	HINSTANCE	hinst;		//���s�t�@�C���̃C���X�^���X�̃n���h��
extern	HWND		hwnd;		//�E�B���h�E�̃n���h��


//-----------------------------------------------------------
//	��Ԃ���y��BMP�ǂݍ���
//-----------------------------------------------------------

int Load_Bmp( HDC hdc, char *f_name_of_BMP)
{
	HANDLE	hbmp;
	HDC		work_DC;

	hbmp=LoadImage(hinst,f_name_of_BMP,IMAGE_BITMAP,0,0,LR_CREATEDIBSECTION | LR_LOADFROMFILE);
	work_DC = CreateCompatibleDC( hdc );
	SelectObject( work_DC, hbmp );

	BitBlt(hdc,0,0,640,480,work_DC,0,0,SRCCOPY);
    
	ReleaseDC( hwnd,work_DC );	
	DeleteObject( hbmp );

	return 0;
}

//-----------------------------------------------------------
//	�t���J���[BMP����̎��͓ǂݍ��݊֐�
//-----------------------------------------------------------

int Load_Fullcolor_Bmp( HDC hdc, char *f_name_of_BMP)
	//�t���J���[BMP�̓ǂݍ��݁i�C���f�b�N�X�J���[�͖����j
{
    HANDLE				hF,hMem1, hMem2;
    LPBITMAPFILEHEADER	lp_Bitmap_file_header;			//���t�@�C���w�b�_���w���|�C���^
    LPBITMAPINFOHEADER	lp_Bitmap_info_header;			//���C���t�H�w�b�_���w���|�C���^
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

	//�t�@�C�����J��
    hF = CreateFile(	
		f_name_of_BMP,			//�t�@�C����
		GENERIC_READ,			//�ǂݍ��݃��[�h 
		0,						//���L�͂��Ȃ�
		NULL,					//�Z�L�����e�B�͖���
		OPEN_EXISTING,			//�V�K��������Ȃ��ēǂނ���
		FILE_ATTRIBUTE_NORMAL,	//���ɕς���������͂Ȃ�
        NULL					//�����̃R�s�[����ʂ񥥥�i�悭�킩��Ȃ����疳���I�j
	);

    if( hF == INVALID_HANDLE_VALUE ){	
       MessageBox(NULL, "�t�@�C�����J���Ȃ���[��", "Error", MB_OK); 
		return -1;
    }


	//---------------------------------------------------
	//���w�b�_���̂P�iBITMAPFILEHEADER�j���܂����ׂ�
	//---------------------------------------------------
    hMem1 = GlobalAlloc(GHND, sizeof(BITMAPFILEHEADER));	//�q�[�v���w�b�_�������m��
						//��GHND(�׸ޒ萔)�F�Ĕz�u�\�A�������l�Ƃ��ă[���N���A���K�p�����
    lp_Bitmap_file_header = (LPBITMAPFILEHEADER)GlobalLock(hMem1);			//���b�N����

	//�w�b�_������̧�ق�ǂ�
	ReadFile(	hF, 
				(LPBITMAPFILEHEADER)lp_Bitmap_file_header,
				sizeof(BITMAPFILEHEADER),
				&dwResult,
				NULL
	);
	dwFileSize = lp_Bitmap_file_header->bfSize;			//̧��(�S��)�̃T�C�Y
    dwOffBits  = lp_Bitmap_file_header->bfOffBits;		//̧�ِ擪����BIT��܂ł�OFFSET

		//DEBUG�F�w�b�_��\��
	    //wsprintf(str, "dwFileSize = %d, szFType = %s dwOffBits = %d[%xh]",
		//    dwFileSize, szFType, dwOffBits, dwOffBits );
	    //MessageBox(NULL, str, "BMP��񂻂̂P", MB_OK);

	//---------------------------------------------------
	//���w�b�_���̂Q�iBITMAPINFOHEADER�j�𒲂ׂ�
	//---------------------------------------------------
	hMem2 = GlobalAlloc(GHND, sizeof(BITMAPINFOHEADER));	//�q�[�v���m��
	lp_Bitmap_info_header = (LPBITMAPINFOHEADER)GlobalLock(hMem2);			//���b�N

	ReadFile(	hF, 
				(LPBITMAPINFOHEADER)lp_Bitmap_info_header,
				sizeof(BITMAPINFOHEADER), 
				&dwResult, 
				NULL
	);
	wx = lp_Bitmap_info_header->biWidth;		//��
	wy = lp_Bitmap_info_header->biHeight;		//����    
	wBitCount = lp_Bitmap_info_header->biBitCount;	//�P�s�N�Z���������BIT���i1,4,8,24�j
    dwClrUsed = lp_Bitmap_info_header->biClrUsed;	//�g�p����Ă���F��
	dwClrImportant = lp_Bitmap_info_header->biClrImportant;	//"�d�v�ȐF"�̐��i���F�ł����Ȃ����薳���A�����j

	//�t�@�C���T�C�Y���Z�o�i�t���J���[����j
	dwSizeImage = wx*wy*4;	//�t���J���[�̏ꍇ�Ppixel=4byte�Ȃ̂�

		//DEBUG�F�w�b�_��\��
		//wsprintf(str, "wx = %d, wy = %d\nwBitCount = %d, dwClrUsed = %d, dwClrImportant = %d",
		//	wx, wy, wBitCount, dwClrUsed, dwClrImportant);
		//MessageBox(NULL, str, "BMP��񂻂̂Q", MB_OK);    
	

        
	//BITMAPFILEHEADER���������T�C�Y�̗̈���m�ۥ���̔��Ȃ񂾂��ǁA
	//���m�ɂ���Ă� 24bit/32bit �����݂��Ă����Ⴒ����݂����Ȃ̂�
	//�u�������I�v�� 32bit�~�s�N�Z�����{BITMAPFILEHEADER���m�ہ�
	bmp_info.bmiHeader = *lp_Bitmap_info_header;
	hMem = GlobalAlloc(GHND,  dwSizeImage + sizeof(BITMAPFILEHEADER) );

	szBuffer = (char *)GlobalLock(hMem);

	//�t�@�C���|�C���^��擪����BITMAPFILEHEADER�������i�߂�
	SetFilePointer(hF, sizeof(BITMAPFILEHEADER), 0, FILE_BEGIN);

	//�t�@�C����ǂ�
	if( 0 == ReadFile(
			hF,			//File handle
			szBuffer,	//�o�b�t�@�ւ̃|�C���^
			sizeof(BITMAPINFOHEADER) + dwSizeImage,	//�ǂݎ��T�C�Y 
			&dwResult,	//�����ۂɓǂݍ��񂾃t�@�C���T�C�Y���i�[�����
			NULL		//�����ǂݎ��
	) ){
			sprintf( str,
				"�ǂ߂Ȃ�����\n"
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
 
	//BITMAP�W�J
	SetDIBitsToDevice(hdc,
			0, 0,	//�]������W
			wx, wy, //���A����
			0, 0,	//�]�������W
			0, wy,	//�����J�n�ԍ��A�������̖{��
			//�r�b�g�}�b�v�f�[�^�J�n�̃A�h���X
			(char *)szBuffer + dwOffBits - sizeof(BITMAPFILEHEADER),
			&bmp_info, //BITMAPINFO�\���̂ւ̃|�C���^
			DIB_RGB_COLORS
	);

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
//	������\���i�e�t���j
//------------------------------------------------

int    StrPut3D(HDC hdc,int x,int y,int fontSize,UINT color1,UINT color2,char *str)
	//������\���i���RD���Ă̂͌ꕾ�����邩���F�΁j
{
        HFONT   hfont,oldfont;
                
		hfont=CreateFont(
                fontSize,	//�t�H���g����
				0,			//�t�H���g��
				0,			//		
				0,			//
				600,		//�t�H���g�����i0-1000��100�P�ʁF�W��=400�j
                0,			//TRUE=�C�^���b�N�ݒ�
				0,			//����
				0,			//�ŏ���
				SHIFTJIS_CHARSET,	//�L�����N�^�Z�b�g
                OUT_DEFAULT_PRECIS,	//�o�͐��x
                CLIP_DEFAULT_PRECIS,//�N���b�v���x
                DEFAULT_QUALITY,
                DEFAULT_PITCH | FF_DONTCARE,
                "�l�r ����"
		);
               
		if(hfont==NULL){
				MessageBox(NULL,"�t�H���g���s","����[",MB_OK);
                return 0;
		}

		SetBkMode(hdc,TRANSPARENT);	//�w�i�́u�ӂ��ǂ�v�͂��Ȃ�
		
		//�e�̕�����\��
		SetTextColor(hdc,color2);				//�F�w��
		oldfont=(HFONT)SelectObject(hdc,hfont);	//�t�H���g�w��
		TextOut(hdc,x+1,y+1,str,strlen(str));		//�\��
		SelectObject(hdc,oldfont);				//�t�H���g�w��߂�

		//�\�̕�����\��
		SetTextColor(hdc,color1);				//�F�w��
		oldfont=(HFONT)SelectObject(hdc,hfont);	//�t�H���g�w��
		TextOut(hdc,x,y,str,strlen(str));		//�\��
		SelectObject(hdc,oldfont);				//�t�H���g�w��߂�

		DeleteObject(hfont);

        return 0;
}



//end of file

