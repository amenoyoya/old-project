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

//�G�Ɋւ���\����
typedef struct{
        int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img;
        //�t���O�A�J�E���^�A�ړ��p�^�[���A�����A�G�̎�ށAHP�ő�l�A���Ƃ��A�C�e��
        double x,y,vx,vy,sp,ang;
        //���W�A���xx�����A���xy�����A�X�s�[�h�A�p�x
        int bltime,blknd,blknd2,col,state,wtime,wait;
        //�e���J�n���ԁA�e���̎�ށA�e�̎�ށA�F�A��ԁA�ҋ@���ԁA��؎���
}enemy_t;
