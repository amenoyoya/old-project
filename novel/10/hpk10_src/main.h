
//-----------------------------------------------------------------------------
//	main.h	�R�}���h���`�F�u�x���v�̃C���v�������g
//-----------------------------------------------------------------------------


extern HWND			hwnd;		//�E�B���h�E�̃n���h��
extern HDC			win_hdc;	//�f�o�C�X�R���e�L�X�g�i��ʂ𑀍삷��Ƃ��Ɏg���܂��j
extern HINSTANCE	hinst;		//�C���X�^���X�i���������ɂ�������t�@�C���j�ւ̃n���h��
						//���Q�d�N���Ȃǂւ̑΍�Ƃ��Ď������g�̃n���h���������Ă���
extern int			flag_delay;	//�x�������p�̃t���O



//������
void init_game();

//���b�Z�[�W�i�}�E�X��L�[�̓��͂Ȃǁj�������Ƃ��Ɏ��s���郋�[�v
void	Mainloop(void);

//���b�Z�[�W�i�}�E�X��L�[�̓��͂Ȃǁj�́A�����Œ��ׂ܂�
LRESULT WndProc(HWND hwnd,UINT msg,WPARAM wprm,LPARAM lprm);

//---------------------------------------------------------
//	����������s�J�n��
//---------------------------------------------------------

APIENTRY WinMain(HINSTANCE hIns,HINSTANCE hPI,LPSTR lpArg,int nCmdShow);

//end of file
