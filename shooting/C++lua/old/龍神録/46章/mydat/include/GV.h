#include "../../../include/DxLib.h"
#include "define.h"
#include "math.h"

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern 
#endif

#include "function.h"

//�摜�p�ϐ��錾��
GLOBAL int img_ch[2][12];	//�L�����N�^�摜12�����@X2(�ϐg�p)
GLOBAL int img_chetc[10];	//�L�����N�^�Ɋւ��鑼�̉摜
GLOBAL int img_enemy[3][9];	//�G�摜9����
GLOBAL int img_board[40];	//�{�[�h�ɂ����摜
GLOBAL int img_bullet[20][10];//�e�p�摜
GLOBAL int img_lazer[10][10],img_lazer_moto[10][10];//���[�U�[�摜
GLOBAL int img_cshot[2];	//���@�V���b�g�p�摜
GLOBAL int img_del_effect[5];//���ŃG�t�F�N�g�p�摜
GLOBAL int img_back[20];//�w�i�p�摜
GLOBAL int img_eff_bom[5];	//�{���̃G�t�F�N�g�摜
GLOBAL int img_dot_riria[8];//�����A�̃h�b�g�G�摜
GLOBAL int img_etc[50];//���̑��̉摜
GLOBAL int img_item[6][2];//�A�C�e���̉摜
GLOBAL int img_num[3][12];//�����̉摜(41)

//���y�t�@�C���p�ϐ��錾��
GLOBAL int sound_se[SE_MAX];

//�t���O�E�X�e�[�^�X�ϐ�
GLOBAL int func_state,stage_count,count,stage;	//�֐�����p�ϐ�
GLOBAL int se_flag[SE_MAX];			//�T�E���h�t���O

//�ݒ�p�ϐ�
GLOBAL int stage_title_count[STAGE_NUM];

//���̑��̕ϐ�
GLOBAL int color[20],font[20];//�F(41) �t�H���g(44)

//�\���̕ϐ��錾��
GLOBAL ch_t ch;			//�L�����N�^�f�[�^�錾
GLOBAL enemy_t enemy[ENEMY_MAX];//�G���
GLOBAL configpad_t configpad;//�R���t�B�O�Őݒ肵���L�[���
GLOBAL enemy_order_t enemy_order[ENEMY_ORDER_MAX];//�G�̏o�����
GLOBAL shot_t shot[SHOT_MAX];//�V���b�g���
GLOBAL boss_shot_t boss_shot;//�{�X�V���b�g���
GLOBAL cshot_t cshot[CSHOT_MAX];//���@�V���b�g
GLOBAL del_effect_t del_effect[DEL_EFFECT_MAX];//���ŃG�t�F�N�g
GLOBAL effect_t effect[EFFECT_MAX];//�G�t�F�N�g
GLOBAL bullet_info_t bullet_info[20];//�e���
GLOBAL bom_t bom;				//�{��
GLOBAL bright_set_t bright_set; //�`��̋P�x
GLOBAL dn_t dn;					//�h���Ɨh���
GLOBAL boss_t boss;				//�{�X���
GLOBAL lazer_t lazer[LAZER_MAX];//���[�U�[
GLOBAL child_t child[CHILD_MAX];//�e���̔��ˈʒu�ɕ\������G�t�F�N�g
GLOBAL stage_title_t stage_title;//�X�e�[�W�^�C�g��
GLOBAL item_t item[ITEM_MAX];//�A�C�e��
GLOBAL flash_t flash;//(42)

