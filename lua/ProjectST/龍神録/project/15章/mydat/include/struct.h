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

//�G�Ɋւ���\����
typedef struct{
	int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img;
	//�t���O�A�J�E���^�A�ړ��p�^�[���A�����A�G�̎�ށAHP�ő�l�A���Ƃ��A�C�e��
	double x,y,vx,vy,sp,ang;
	//���W�A���xx�����A���xy�����A�X�s�[�h�A�p�x
	int bltime,blknd,blknd2,col,state,wtime,wait;
	//�e���J�n���ԁA�e���̎�ށA�e�̎�ށA�F�A��ԁA�ҋ@���ԁA��؎���
}enemy_t;

typedef struct{
	//�J�E���^�A�ړ��p�^�[���A�G�̎��
	int cnt,pattern,knd;
	//�������W�ƈړ��X�s�[�h
	double x,y,sp;
	//�e���J�n���ԁA�e���̎�ށA�F�A�̗́A�e�̎�ށA��؎��ԁA�A�C�e��(6���)
	int bltime,blknd,col,hp,blknd2,wait,item_n[6];
}enemy_order_t;

//�p�b�h�Ɋւ���\����
typedef struct{
	int key[PAD_MAX];
}pad_t;

//�R���t�B�O�Ɋւ���\����
typedef struct{
	int left,up,right,down,shot,bom,slow,start,change;
}configpad_t;

//�e�Ɋւ���\����
typedef struct{
//�t���O�A��ށA�J�E���^�A�F�A��ԁA���Ȃ��Ƃ������Ȃ����ԁA�G�t�F�N�g�̎��
	int flag,knd,cnt,col,state,till,eff;
//���W�A�p�x�A���x�A�x�[�X�̊p�x�A�ꎞ�L���X�s�[�h
	double x,y,angle,spd,base_angle[1],rem_spd[1];
}bullet_t;

//�V���b�g�Ɋւ���\����
typedef struct{
//�t���O�A��ށA�J�E���^�A�ǂ̓G���甭�˂��ꂽ���̔ԍ��A�F
	int flag,knd,cnt,num;
//�x�[�X�p�x�A�x�[�X�X�s�[�h
	double base_angle[1],base_spd[1];
	bullet_t bullet[SHOT_BULLET_MAX];
}shot_t;
