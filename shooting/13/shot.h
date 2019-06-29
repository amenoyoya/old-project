#pragma once

#include "story.h"
#include "char.h"

// �e�Ɋւ���\����
struct bullet_t{
	//�t���O�A��ށA�J�E���^�A�F�A��ԁA���Ȃ��Ƃ������Ȃ����ԁA�G�t�F�N�g�̎��
	int flag,knd,cnt,col,state,till,eff;
	//���W�A�p�x�A���x�A�x�[�X�̊p�x�A�ꎞ�L���X�s�[�h
	double x,y,angle,spd,base_angle[1],rem_spd[1];
};

//�V���b�g�Ɋւ���\����
struct shot_t{
	//�t���O�A��ށA�J�E���^�A�ǂ̓G���甭�˂��ꂽ���̔ԍ�
	int flag,knd,cnt,num;
	//�x�[�X�p�x�A�x�[�X�X�s�[�h
	double base_angle[1],base_spd[1];
	bullet_t bullet[_shot::maxbullet];
};

/* �V���b�g�\�ȓG�N���X */
class ShotEnemyObject: public StoryObject{
	dximg_t		img_bullet[10][10];
	dxsnd_t		sound_se[_se::max];
	int			se_flag[_se::max];
	shot_t		shot[_shot::max];
	// �e���p�^�[��
	function<void(int)> shot_pattern[_shot::maxknd];
	
	void init(){
		EnemyObject::init();
		ZeroMemory(shot, sizeof(shot_t)*_shot::max);
	}
	
	bool load(){
		//�e�摜�̃t�@�C����ǂݍ���
		dximg_t::divopen(img_bullet[0], "../dat/img/bullet/b0.png", 5, 1, 76, 76);
		dximg_t::divopen(img_bullet[1], "../dat/img/bullet/b1.png", 6, 1, 22, 22);
		dximg_t::divopen(img_bullet[2], "../dat/img/bullet/b2.png", 10, 1, 5, 120);
		dximg_t::divopen(img_bullet[3], "../dat/img/bullet/b3.png", 5, 1, 19, 34);
		dximg_t::divopen(img_bullet[4], "../dat/img/bullet/b4.png", 10, 1, 38, 38);
		dximg_t::divopen(img_bullet[5], "../dat/img/bullet/b5.png", 3, 1, 14, 16);
		dximg_t::divopen(img_bullet[6], "../dat/img/bullet/b6.png", 3, 1, 14, 18);
		dximg_t::divopen(img_bullet[7], "../dat/img/bullet/b7.png", 9, 1, 16, 16);
		dximg_t::divopen(img_bullet[8], "../dat/img/bullet/b8.png", 10, 1, 12, 18);
		dximg_t::divopen(img_bullet[9], "../dat/img/bullet/b9.png", 3, 1, 13, 19);
		//�G�̃V���b�g����ǂݍ���
		dxsnd_t::open(&sound_se[0], "../dat/se/enemy_shot.wav");
		return StoryObject::load();
	}
	
	// �e���G���g���[
	void enter_shot(int i){
		if(enemy[i].bltime == enemy[i].cnt){
			for(int j=0; j<_shot::max; ++j){
				if(shot[j].flag == 0){// ���g�p�̒e���f�[�^�������
					ZeroMemory(&shot[j], sizeof(shot_t));//���������ēo�^
					shot[j].flag = 1;
					shot[j].knd = enemy[i].blknd;//�e�̎��
					shot[j].cnt = 0;
					return;
				}
			}
		}
	}
	
	//n�Ԗڂ̃V���b�g��o�^�����G�Ǝ��@�Ƃ̊p�x��Ԃ�
	double shotatan2(int n){
		return atan2(charobj.ch.y-enemy[shot[n].num].y,
			charobj.ch.x-enemy[shot[n].num].x);
	}
	
	//�󂢂Ă���e��T��
	int shot_search(int n){
		for(int i=0; i<_shot::maxbullet; ++i){
			if(shot[n].bullet[i].flag==0) return i;
		}
		return -1;
	}
	
	void shot_calc(int n){
		int max = 0;
		
		if(enemy[shot[n].num].flag != 1)//�G���|���ꂽ��
			shot[n].flag = 2;//����ȏ�V���b�g��o�^���Ȃ��t���O�ɕς���
		for(int i=0; i<_shot::maxbullet; ++i){//n�Ԗڂ̒e���f�[�^�̒e���v�Z
			if(shot[n].bullet[i].flag>0){//���̒e���o�^����Ă�����
				shot[n].bullet[i].x += cos(shot[n].bullet[i].angle)*shot[n].bullet[i].spd;
				shot[n].bullet[i].y += sin(shot[n].bullet[i].angle)*shot[n].bullet[i].spd;
				++shot[n].bullet[i].cnt;
				if(shot[n].bullet[i].x<-50 || shot[n].bullet[i].x>_field::maxw+50
					|| shot[n].bullet[i].y<-50 || shot[n].bullet[i].y>_field::maxh+50)
				{//��ʂ���O�ꂽ��
					if(shot[n].bullet[i].till<shot[n].bullet[i].cnt)//�Œ�����Ȃ����Ԃ�蒷�����
						shot[n].bullet[i].flag = 0;//����
				}
			}
		}
		//���ݕ\�����̒e����ł����邩�ǂ������ׂ�
		for(int i=0; i<_shot::maxbullet; ++i)
			if(shot[n].bullet[i].flag>0) return;
		
		if(enemy[shot[n].num].flag != 1){
			shot[n].flag = 0;//�I��
			enemy[shot[n].num].flag = 0;
		}
	}
	
	void shot_main(){
		for(int i=0; i<_shot::max; ++i){//�e���f�[�^�v�Z
			//�t���O�������Ă��āA�ݒ肵����ނ��Ԉ���Ă��Ȃ����(�I�[�o�[�t���[�΍�)
			if(shot[i].flag!=0 && 0<=shot[i].knd && shot[i].knd<_shot::maxknd){
				shot_pattern[shot[i].knd](i);//.knd�̒e���v�Z�֐����ĂԊ֐��|�C���^
				shot_calc(i);//i�Ԗڂ̒e�����v�Z
				++shot[i].cnt;
			}
		}
	}
	
	bool draw(){
		shot_main();
		
		SetDrawMode(DX_DRAWMODE_BILINEAR);//���`�⊮�`��
		for(int i=0; i<_shot::max; ++i){//�G�̒e���������[�v
			if(shot[i].flag>0){//�e���f�[�^���I���Ȃ�
				for(int j=0; j<_shot::maxbullet; ++j){//���̒e�������e�̍ő吔�����[�v
					if(shot[i].bullet[j].flag!=0){//�e�f�[�^���I���Ȃ�
						if(shot[i].bullet[j].eff==1)
								SetDrawBlendMode(DX_BLENDMODE_ADD, 255);
						
						img_bullet[shot[i].bullet[j].knd][shot[i].bullet[j].col].rotadraw(
							shot[i].bullet[j].x+_field::x, shot[i].bullet[j].y+_field::y,
							1.0, shot[i].bullet[j].angle+PI/2);
						
						if(shot[i].bullet[j].eff==1)
							SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
					}
				}
			}
		}
		SetDrawMode(DX_DRAWMODE_NEAREST);//�`��`����߂�
		return EnemyObject::draw();
	}
public:
	ShotEnemyObject(){
		shot_pattern[0] = [this](int n){
			int k = -1;
			
			if(shot[n].cnt == 0){//�e�����n�܂���0�J�E���g��
				//�G���|����Ă��Ȃ��āA�T�����o�^�\�Ȓe�ԍ����L���Ȃ�
				if(shot[n].flag != 2 && (k = shot_search(n)) != -1){
					shot[n].bullet[k].knd   =enemy[shot[n].num].blknd2;//�e�̎��
					shot[n].bullet[k].angle =shotatan2(n);//�p�x
					shot[n].bullet[k].flag  =1;//�t���O
					shot[n].bullet[k].x	 =enemy[shot[n].num].x;//���W
					shot[n].bullet[k].y	 =enemy[shot[n].num].y;
					shot[n].bullet[k].col   =enemy[shot[n].num].col;//�F
					shot[n].bullet[k].cnt   =0;//�J�E���^
					shot[n].bullet[k].spd   =3;//�X�s�[�h
					se_flag[0]=1;//�e�̔��ˉ��t���O�𗧂Ă�
				}
			}
		};
	}
}shotenemyobj;
