#include "../include/GV.h"

int fps_wait;

void wait_fanc(){//60fps�ȏ�ɂȂ�Ȃ��悤�ɂ���֐�
   LONGLONG miri_wait=0,micro_wait=0,wait=0,wait2=0,start=0;
   static LONGLONG before_time=0;
   static int cnt=0;
   if(cnt!=0){//�ŏ���before_time�ɒl�������Ă��Ȃ��̂Ŕ�΂�
	   //�܂�Sleep�֐��̌덷�𓥂܂���16666-1000��15666�ʕb�ҋ@�������B
	   //�ҋ@���ׂ�����=15666-(������������)�ɂ��
	   //wait�ɑҋ@���������Ԃ��i�[����B
	   wait=15666-(GetNowHiPerformanceCount()-before_time);
      if(wait>0){//�ҋ@���ׂ����Ԃ������
         //15666�}�C�N���b�́A�܂�15�~���b�ɂȂ�܂�Sleep����B
         miri_wait=wait/1000;
         Sleep(miri_wait);
	  }
      //���̐��m�ȑҋ@��while�ōs���B
	  //�ҋ@���ׂ�����=15666-(������������)�ɂ��
      //wait2�Ƀ}�C�N���b�ҋ@���������Ԃ��i�[����B
      wait2=16600-(GetNowHiPerformanceCount()-before_time);
	  if(wait2>0){
		 micro_wait=wait2;
		 start=GetNowHiPerformanceCount();
		 while(GetNowHiPerformanceCount()-start<micro_wait);
      }
      //����1���ɂ����������Ԃ�fps_wait�Ɋi�[����B16666�����鎖�����҂���B
      //fps_wait��unsigned int�̃O���[�o�X�ϐ�
      fps_wait=(unsigned int)(GetNowHiPerformanceCount()-before_time);
   }
   before_time=GetNowHiPerformanceCount();
   cnt++;
   return;
}

void fps(){//fps���v�Z����֐�
        int i;
		double fps;
		static int cnt=0;
		static int f[60]={};
		static double ave=0;
		int fn=func_state;
		if(!(fn==1||fn==11||fn==100||fn==1000||fn==0)){
			cnt=0;
			return;
		}
        f[cnt]=fps_wait;
        if(cnt==39){
                ave=0;
				double sum=0;
				for(i=10;i<40;i++){
					sum+=f[i];
				}
				sum/=30;
				for(i=10;i<40;i++){
					if(f[i]>sum*1.5)
						f[i]=sum;
					ave+=f[i];
				}
                ave/=30.0;
				ave/=1000.0;
        }
		if(ave>10){
			int col; char st[64];
			fps=1000/ave;
			if(fps>65){col=GetColor(255,0,0);strcpy(st,"FPS����������");}
			if(56<=fps && fps<=65){col=GetColor(255,255,255);strcpy(st,"");}
			if(50<=fps && fps<56){col=GetColor(255,255,0);strcpy(st,"�X�y�b�N�s��");}
			if(fps<50){col=GetColor(255,0,0);strcpy(st,"���ɃX�y�b�N�s��");}
			if(count>120 && fps>5){
				if(func_state==1)
					DrawFormatStringToHandle(0,0,col,font[5],"[%.1f] %s",fps,st);
				else
					DrawFormatStringToHandle(0,462,col,font[5],"[%.1f] %s",fps,st);
			}
		}
		cnt++;
		if(cnt>=40)
			cnt=0;
        return;
}