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

void (*boss_shot_bullet[DANMAKU_MAX])() =
{
//中ボス
        boss_shot_bulletH000,//ノーマル
        boss_shot_bulletH002,//スペル〜パーフェクトフリーズ〜
//ラスボス
        boss_shot_bulletH001,//ノーマル〜サイレントセレナ〜
        boss_shot_bulletH004,//スペル〜ケロちゃん〜
        boss_shot_bulletH009,//スペル〜反魂蝶〜
//終り

        boss_shot_bulletH000,//ぬるぽ回避用(この弾幕は出てこない)
};
