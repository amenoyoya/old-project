#include "../include/GV.h"

void music_ini(){
	memset(se_flag,0,sizeof(int)*SE_MAX);
}

void music_play(){
	int i;
	for(i=0;i<SE_MAX;i++){
		if(se_flag[i]==1){
			if(CheckSoundMem(sound_se[i])!=0){
				if(i==8)continue;
				StopSoundMem(sound_se[i]);
			}
			PlaySoundMem(sound_se[i],DX_PLAYTYPE_BACK);
		}
	}
}

void load_bgm(int flag){
	char str[64];
	sprintf(str,"../dat/music/%d_%d.ogg",stage,flag);
	area.bgm.handle=LoadSoundMem(str);
}

void delete_bgm(){
	DeleteSoundMem(area.bgm.handle);
}

void bgm_main(){
	if(area.bgm.flag==0){//�ŏ��ɓǂݍ���
		load_bgm(0);
		SetLoopPosSoundMem( area.bgm.loop_pos[0], area.bgm.handle );//���[�v�ʒu�Z�b�g
		area.bgm.flag=1;
	}
	if(area.bgm.flag==1){//��ނɉ����čĐ����͂��߂�
		switch(area.bgm.knd[0]){
			case 0://�Đ����0�Ȃ�
				if(stage_count==60){//�͂��܂���60�J�E���g��ɍĐ�
					PlaySoundMem(area.bgm.handle,DX_PLAYTYPE_LOOP);
					area.bgm.flag=2;
				}
				break;
			default:
				break;
		}
	}
	if(area.bgm.flag==2){//�{�X�o�����ɓǂݍ���
		if(stage_count==boss.appear_count[1]){//���X�{�X�����ꂽ��ǂݍ���
			StopSoundMem(area.bgm.handle);
			delete_bgm();
			load_bgm(1);
			SetLoopPosSoundMem( area.bgm.loop_pos[1], area.bgm.handle );//���[�v�ʒu�Z�b�g
			area.bgm.flag=3;
		}
	}
	if(area.bgm.flag==3){
		switch(area.bgm.knd[0]){
			case 0://�Đ����0�Ȃ�
				if(stage_count==boss.appear_count[1]){//���X�{�X�����ꂽ��Đ�
					PlaySoundMem(area.bgm.handle,DX_PLAYTYPE_LOOP);
					area.bgm.flag=4;
				}
				break;
			default:
				break;
		}
	}
}