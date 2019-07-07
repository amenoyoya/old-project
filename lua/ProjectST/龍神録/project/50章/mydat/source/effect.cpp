#include "../include/GV.h"

extern void dn_calc();

//�G�t�F�N�g�̓o�^�󂫔ԍ���T��
int search_effect(){
    for(int i=0;i<EFFECT_MAX;i++){
        if(effect[i].flag==0)
            return i;
    }
    return -1;
}

//�G�t�F�N�g���v�Z����
void calc_effect(){
    for(int i=0;i<EFFECT_MAX;i++){
        if(effect[i].flag>0){//�G�t�F�N�g���o�^����Ă�����
            effect[i].x+=cos(effect[i].mvang)*effect[i].spd;
            effect[i].y+=sin(effect[i].mvang)*effect[i].spd;
            switch(effect[i].knd){//�G�t�F�N�g�̎�ނɂ���ĕ���
                case 0://�G�̏��ŃG�t�F�N�g
                    effect[i].cnt++;
                    effect[i].r+=0.08;//�G�t�F�N�g�̑傫����i�X�傫������
                    if(effect[i].cnt>10)//10�J�E���g�ȏ�ɂȂ�����
                        effect[i].brt-=25;//���邳�����Ȃ�����
                    if(effect[i].cnt>20)//20�J�E���g�ȏ�ɂȂ�����
                        effect[i].flag=0;//����
                    break;
                case 1://�{���̃G�t�F�N�g
                    //�X�s�[�h�v�Z
                    if(effect[i].cnt<60)
                        effect[i].spd-=(0.2+effect[i].cnt*effect[i].cnt/3000.0);
                    if(effect[i].cnt==60){
                        effect[i].spd=0;
                        se_flag[15]=1;
						enter_dn(11,20);//(45)
                    }
                    //���邳�Ƒ傫���v�Z
                    effect[i].r+=0.015;
                    if(effect[i].cnt<51)
                        effect[i].brt+=5;
                    if(effect[i].cnt>=60){
                        effect[i].r+=0.04;
                        effect[i].brt-=255/30.0;
                    }
                    //�J�E���g�A�b�v�Ə����v�Z
                    effect[i].cnt++;
                    if(effect[i].cnt>=90)
                        effect[i].flag=0;
                    break;
                case 2://�{���G�t�F�N�g�i�L�����j
                    //���邳�v�Z
                    if(effect[i].cnt<51)
                        effect[i].brt+=4;
                    if(effect[i].cnt>130-51)
                        effect[i].brt-=4;
                    //�J�E���g�A�b�v�Ə����v�Z
                    effect[i].cnt++;
                    if(effect[i].cnt>=130)
                        effect[i].flag=0;
                    break;
                case 3://�{���̃G�t�F�N�g�i���C���j
                    //���邳�v�Z
                    if(effect[i].cnt<51)
                        effect[i].brt+=2;
                    if(effect[i].cnt>130-51)
                        effect[i].brt-=2;
                    //�J�E���g�A�b�v�Ə����v�Z
                    effect[i].cnt++;
                    if(effect[i].cnt>=130)
                        effect[i].flag=0;
                    break;                
                case 4://��炢�{���G�t�F�N�g
                    //���邳�v�Z
                    if(effect[i].cnt>=6)
                        effect[i].brt-=255/6;
                    effect[i].r+=0.12;
                    effect[i].cnt++;
                    if(effect[i].cnt>=12 || ch.flag!=1)
                        effect[i].flag=0;
                    break;                
                default:
                    printfDx("effect�ݒ�G���[\n");
                    break;
            }
        }
    }
}

//���ŃG�t�F�N�g�̓o�^�󂫔ԍ���T��
int search_del_effect(){
    for(int i=0;i<DEL_EFFECT_MAX;i++){
        if(del_effect[i].flag==0)
            return i;
    }
    return -1;
}

//���ŃG�t�F�N�g��o�^����
void enter_del_effect(int s){
    int k=search_del_effect();
    if(k!=-1){
        del_effect[k].flag=1;//�t���O�𗧂Ă�
        del_effect[k].cnt=0;
        del_effect[k].col=enemy[s].back_col;//�G�̔w�i�F�����ŐF�ɐݒ肷��
        del_effect[k].x=enemy[s].x;//�G�̍��W�����ňʒu�ɃZ�b�g
        del_effect[k].y=enemy[s].y;
    }
}

//���ŃG�t�F�N�g���v�Z�E�G�t�F�N�g��o�^����
void calc_del_effect(){
    int k;
    for(int i=0;i<DEL_EFFECT_MAX;i++){
        if(del_effect[i].flag>0){
            if(del_effect[i].cnt%2==0){// 1/30�b���Z�b�g
                if((k=search_effect())!=-1){//�󂫔ԍ�����
                    memset(&effect[k],0,sizeof(effect_t));//������
                    effect[k].flag=1;//�t���O�𗧂Ă�
                    effect[k].brt=255;//�P�x���ő�l��
                    effect[k].ang=rang(PI);//�p�x�������_����
                    effect[k].col=del_effect[i].col;//�F���Z�b�g
                    effect[k].eff=1;//1�͌��G�t�F�N�g�B���G�t�F�N�g�ɃZ�b�g����
                    effect[k].img=img_del_effect[effect[k].col];//���ł���摜���Z�b�g
                    effect[k].knd=0;//�G�t�F�N�g�̎�ނ�0��(���ŃG�t�F�N�g��0�Ƃ���)
                    effect[k].x=del_effect[i].x;//���W���Z�b�g
                    effect[k].y=del_effect[i].y;
                    effect[k].spd=0;
                }
            }
            if(del_effect[i].cnt>8){
                del_effect[i].flag=0;
            }
            del_effect[i].cnt++;
        }
    }
}

//�{����o�^
void enter_bom(){
    int k;
    bom.flag=1;
    bom.cnt=0;
    bom.knd=0;
    ch.flag=0;
    ch.mutekicnt=1;//���G��
    se_flag[14]=1;//�L���C�[����
    //�c��
    if((k=search_effect())!=-1){
        effect[k].flag=1;
        effect[k].cnt=0;
        effect[k].knd=3;//�{���̐��̃G�t�F�N�g
        effect[k].brt=0;
        effect[k].ang=PI/2;
        effect[k].mvang=-PI/2;
        effect[k].spd=1;
        effect[k].r=1;
        effect[k].eff=2;
        effect[k].img=img_eff_bom[3];
        effect[k].x=70;
        effect[k].y=300;
    }
    //����
    if((k=search_effect())!=-1){
        effect[k].flag=1;
        effect[k].cnt=0;
        effect[k].knd=3;//�{���̐��̃G�t�F�N�g
        effect[k].brt=0;
        effect[k].ang=0;
        effect[k].mvang=0;
        effect[k].spd=1;
        effect[k].r=1;
        effect[k].eff=2;
        effect[k].img=img_eff_bom[3];
        effect[k].x=100;
        effect[k].y=350;
    }
    //�L����
    if((k=search_effect())!=-1){
        effect[k].flag=1;
        effect[k].cnt=0;
        effect[k].knd=2;//�{���̃L�����E���̃G�t�F�N�g
        effect[k].brt=0;
        effect[k].ang=0;
        effect[k].mvang=-PI/2;
        effect[k].spd=0.7;
        effect[k].r=1;
        effect[k].eff=2;
        effect[k].img=img_eff_bom[2];
        effect[k].x=260;
        effect[k].y=300;
    }
}

//�{���v�Z
void bom_calc(){
    int n,k;
	double shot_angle[4]={0,PI,PI/2,PI*1.5};//4���G�t�F�N�g����Ԋp�x
    if((ch.flag==0||ch.flag==1) && bom.flag==0){//�L�������ʏ킩��炢�{����ԂŁA�{�����I�t�Ȃ�
        if(CheckStatePad(configpad.bom)==1){//�{���{�^���������ꂽ��
            enter_bom();
        }
    }
    if(bom.flag==1){//�{�����o�^����Ă�����
        if(bom.cnt%10==0){//1/6�b�ɂP��
            n=(bom.cnt/10);
            if(n<4 && (k=search_effect())!=-1){
                effect[k].flag=1;
                effect[k].cnt=0;
                effect[k].knd=1;//�G�t�F�N�g�ԍ��P�F�{���̃G�t�F�N�g
                effect[k].brt=0;
                effect[k].ang=rang(PI);//�摜�̌����̓����_��
                effect[k].mvang=shot_angle[n]-PI/4;//��ԕ���
                effect[k].spd=13+rang(2);//�X�s�[�h
                effect[k].r=0.5;//�傫��
                effect[k].eff=2;//���u�����h
                effect[k].img=img_eff_bom[(bom.cnt/10)/3];//�摜
                effect[k].x=ch.x;//���W
                effect[k].y=ch.y;
            }
        }
        bom.cnt++;
        if(bom.cnt<40)
            bright_set.brt=255-bom.cnt*5;//��ʂ̖��邳�ݒ�(�Â�)
        if(bom.cnt>90)
            bright_set.brt=255-40*5+(bom.cnt-90)*5;//��ʂ̖��邳�ݒ�(���邭)
        if(bom.cnt>130){
            bom.flag=0;
            bright_set.brt=255;
        }
    }
}


void enter_crybom_effect(){
    int k;
    if(ch.flag==1){
        if(ch.cnt%2==0){
            if((k=search_effect())!=-1){
                effect[k].flag=1;
                effect[k].cnt=0;
                effect[k].knd=4;//��炢�{���G�t�F�N�g
                effect[k].brt=255;
                effect[k].ang=rang(PI);
                effect[k].spd=0;
                effect[k].r=0;
                effect[k].eff=2;
                effect[k].img=img_del_effect[GetRand(4)];
                effect[k].x=ch.x;
                effect[k].y=ch.y;
            }
        }
    }
}

void calc_child(){
	for(int i=0;i<CHILD_MAX;i++){
		if(child[i].flag>0){
			child[i].x+=cos(child[i].angle)*child[i].spd;
			child[i].y+=sin(child[i].angle)*child[i].spd;
			child[i].cnt++;
		}
	}
}

void effect_main(){
	calc_child();
    dn_calc();//�h�K�[���Ƃ����ʂ̏���
    calc_del_effect();//���ŃG�t�F�N�g�̌v�Z
    calc_effect();//�G�t�F�N�g�̌v�Z
    bom_calc();//�{���v�Z
    enter_crybom_effect();
}