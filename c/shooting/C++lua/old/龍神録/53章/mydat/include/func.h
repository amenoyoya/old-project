extern void boss_shot_bulletH000();
extern void boss_shot_bulletH001();
extern void boss_shot_bulletH002();
extern void boss_shot_bulletH003();
extern void boss_shot_bulletH004();
extern void boss_shot_bulletH005();
extern void boss_shot_bulletH006();
extern void boss_shot_bulletH007();
extern void boss_shot_bulletH008();
extern void boss_shot_bulletH009();
extern void boss_shot_bulletH010();
extern void boss_shot_bulletH011();
extern void boss_shot_bulletH012();//(53)
extern void boss_shot_bulletH013();//(53)

void (*boss_shot_bullet[DANMAKU_MAX])() =
{
        boss_shot_bulletH012,//�����e��(53)
        boss_shot_bulletH013,//�����e��(53)

//���{�X
        boss_shot_bulletH000,//�m�[�}��
        boss_shot_bulletH002,//�X�y���`�p�[�t�F�N�g�t���[�Y�`
//���X�{�X
        boss_shot_bulletH001,//�m�[�}���`�T�C�����g�Z���i�`
        boss_shot_bulletH004,//�X�y���`�P�������`
        boss_shot_bulletH009,//�X�y���`�������`
//�I��

        boss_shot_bulletH000,//�ʂ�ۉ��p(���̒e���͏o�Ă��Ȃ�)
};
