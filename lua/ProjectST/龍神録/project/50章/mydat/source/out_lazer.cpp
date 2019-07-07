#include "../include/GV.h"
#include <math.h>
#include <stdio.h>

/* �Q�����x�N�g�� */
typedef struct {
    double x, y;
} Vector2_t;

/* diff �� �x�N�g�� p - q */
void Vector2Diff(Vector2_t *diff, const Vector2_t *p, const Vector2_t *q){
    diff->x = p->x - q->x;
    diff->y = p->y - q->y;
}

/* �x�N�g�� p �� q �̓��� */
double Vector2InnerProduct(const Vector2_t *p, const Vector2_t *q){
    return p->x * q->x + p->y * q->y;
}

/* �x�N�g�� p �� q �̊O�� */
double Vector2OuterProduct(const Vector2_t *p, const Vector2_t *q){
    return p->x * q->y - p->y * q->x;
}

//�_�Ɛ����Ƃ̋��������߂�
double get_distance(double x, double y, double x1, double y1, 
                    double x2, double y2){
    double dx,dy,a,b,t,tx,ty;
    double distance;
    dx = (x2 - x1); dy = (y2 - y1);
    a = dx*dx + dy*dy;
    b = dx * (x1 - x) + dy * (y1 - y);
    t = -b / a;
    if (t < 0) t = 0;
    if (t > 1) t = 1;
    tx = x1 + dx * t;
    ty = y1 + dy * t;
    distance = sqrt((x - tx)*(x - tx) + (y - ty)*(y - ty));
    return distance;
}

//�_�Ɠ_�Ƃ̋�����Ԃ�
double get_pt_and_pt(pt_t p1, pt_t p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

//�_���~�̒��ɂ��邩�ǂ����B0:�Ȃ��@1:����
double question_point_and_circle(pt_t p, pt_t rp,double r){
    double dx=p.x-rp.x,dy=p.y-rp.y;
    if(dx*dx + dy*dy < r*r)    return 1;
    else                    return 0;
}

//����ւ�
void swap_double(double *n, double *m){
    double t=*m;
    *m=*n;*n=t;
}

//�R�_����p�x��Ԃ�
double get_sita(pt_t pt0,pt_t pt1,pt_t rpt){
    /* �x�N�g�� C��P �� C��Q �̂Ȃ��p�Ƃ���щ�]���������߂�D*/
    Vector2_t c, p, q; /* ���̓f�[�^ */
    Vector2_t cp;      /* �x�N�g�� C��P */
    Vector2_t cq;      /* �x�N�g�� C��Q */
    double s;          /* �O�ρF(C��P) �~ (C��Q) */
    double t;          /* ���ρF(C��P) �E (C��Q) */
    double theta;      /* �� (���W�A��) */

    /* c�Cp�Cq �����]�̒l�ɐݒ肷��D*/
    c.x = pt0.x;    c.y = pt0.y;
    p.x = pt1.x;    p.y = pt1.y;
    q.x = rpt.x;    q.y = rpt.y;

    /* ��]��������ъp�x�Ƃ��v�Z����D*/
    Vector2Diff(&cp, &p, &c);          /* cp �� p - c   */
    Vector2Diff(&cq, &q, &c);          /* cq �� q - c   */
    s = Vector2OuterProduct(&cp, &cq); /* s �� cp �~ cq */
    t = Vector2InnerProduct(&cp, &cq); /* t �� cp �E cq */
    theta = atan2(s, t);
    return theta;
}

//�����`�Ɖ~�Ƃ̓�����𔻒肷��
int hitjudge_square_and_circle(pt_t pt[4], pt_t rpt, double r){
    int i;
    double x=rpt.x,y=rpt.y;
	double theta,theta2;

    /*�~�̒��ɒ����`�̂S�_�̂����ǂꂩ�����邩�ǂ�������*/
    for(i=0;i<4;i++){
        if(question_point_and_circle(pt[i],rpt,r)==1)
            return 1;
    }
    /*�����܂�*/

    /*�����`�̒��ɕ��̂����荞��ł��邩�ǂ����𔻒蔻��*/

    theta =get_sita(pt[0],pt[1],rpt);//3�_�̐����p1
    theta2=get_sita(pt[2],pt[3],rpt);//3�_�̐����p2

    if(0<=theta && theta<=PI/2 && 0<=theta2 && theta2<=PI/2)
        return 1;

    /*�����܂�*/

    /*�����Ɠ_�Ƃ̋��������߂�*/
    for(i=0;i<4;i++){
        if(get_distance(rpt.x,rpt.y,pt[i].x,pt[i].y,pt[(i+1)%4].x,pt[(i+1)%4].y)<r)
            return 1;
    }
    /*�����܂�*/
    return 0;//�ǂ��ɂ��q�b�g���Ȃ�������Ԃ����Ă��Ȃ�
}


int out_lazer(){
    int i,j;
    pt_t sqrp[4],rpt={ch.x,ch.y};//�����`��4�_�Ɖ~�̒��S
    //���[�U�[�����[�v
    for(i=0;i<LAZER_MAX;i++){
        //���[�U�[���o�^����Ă��āA�����蔻�������ݒ�Ȃ�
        if(lazer[i].flag>0 && lazer[i].hantei!=0){
            for(j=0;j<4;j++){//���[�U�[��4�_��ݒ�
                sqrp[j].x=lazer[i].outpt[j].x;
                sqrp[j].y=lazer[i].outpt[j].y;
            }
            //�����`�Ɖ~�Ƃ̐ڐG����
            if(hitjudge_square_and_circle(sqrp,rpt,CRANGE))
                return 1;
        }
    }
    return 0;
}