//�L�����N�^�[�Ɋւ���\����
typedef struct{
	int flag;		//�t���O
	int cnt;		//�J�E���^
	int power;		//�p���[
	int point;		//�|�C���g
	int score;		//�X�R�A
	int num;		//�c�@��
	int mutekicnt;	//���G��ԂƃJ�E���g
	int shot_mode;	//�V���b�g���[�h
	int money;		//����
	int img;
	int slow;		//�X���[���ǂ���
	double x,y;		//���W
}ch_t;

//�p�b�h�Ɋւ���\����
typedef struct{
	int key[PAD_MAX];
}pad_t;

//�R���t�B�O�Ɋւ���\����
typedef struct{
	int left,up,right,down,shot,bom,slow,start,change;
}configpad_t;