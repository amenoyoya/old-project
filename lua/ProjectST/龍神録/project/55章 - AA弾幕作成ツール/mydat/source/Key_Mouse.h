
typedef struct{
    int x;
    int y;          //���W
    unsigned int Button[8];  //�{�^���̉��������
    int WheelRotVol;//�z�C�[���̉�]��
}Mouse_t;

int GetHitKeyStateAll_2(int GetHitKeyStateAll_InputKey[]){
    char GetHitKeyStateAll_Key[256];
    GetHitKeyStateAll( GetHitKeyStateAll_Key );
    for(int i=0;i<256;i++){
        if(GetHitKeyStateAll_Key[i]==1) GetHitKeyStateAll_InputKey[i]++;
        else                            GetHitKeyStateAll_InputKey[i]=0;
    }
    return 0;
}

int GetHitMouseStateAll_2(Mouse_t *Nezumi){
    if(GetMousePoint( &Nezumi->x, &Nezumi->y ) == -1){ //�}�E�X�̈ʒu�擾
        return -1;
    }
    int MouseInput=GetMouseInput();    //�}�E�X�̉�������Ԏ擾
    for(int i=0; i<8; i++){            //�}�E�X�̃L�[�͍ő�8�܂Ŋm�F�o����
        if( (MouseInput & 1<<i ) != 0 ) Nezumi->Button[i]++;   //������Ă�����J�E���g�A�b�v
        else                            Nezumi->Button[i] = 0; //������ĂȂ�������0
    }
    Nezumi->WheelRotVol = GetMouseWheelRotVol() ;    //�z�C�[����]�ʎ擾
    return 0;
}
