//boss_shot.cpp
	GLOBAL void boss_shot_main();

//calc.cpp
	GLOBAL void calc_main();

//enemy.cpp
	GLOBAL void enemy_main();

//enemy_act_pattern.cpp
	GLOBAL double rang(double);

//cshot.cpp
	GLOBAL void cshot_main();

//char.cpp
	GLOBAL void calc_ch();
	GLOBAL void ch_move();

//effect.cpp
	GLOBAL void effect_main();

//fps.cpp
	GLOBAL void fps_wait();
	GLOBAL void draw_fps(int x, int y);

//graph.cpp
	//�`�惁�C��
	GLOBAL void graph_main();

//ini.cpp
	GLOBAL void first_ini();
	GLOBAL void ini();

//shot.cpp
	GLOBAL double shotatan2(int n);
	GLOBAL int shot_search(int n);
	GLOBAL void shot_main();

//key.cpp
	//���݂̃L�[���͏������s��
	GLOBAL int GetHitKeyStateAll_2();
	//�󂯎�����L�[�ԍ��̌��݂̓��͏�Ԃ�Ԃ�
	GLOBAL int CheckStateKey(unsigned char Handle);

	//���݂̃p�b�h���͏������s���֐�
	GLOBAL void GetHitPadStateAll();
	//�󂯎�����p�b�h�ԍ��̌��݂̓��͏�Ԃ�Ԃ�
	GLOBAL int CheckStatePad(unsigned int Handle);

//laod.cpp
	//�f�[�^�̃��[�h
	GLOBAL void load();
	GLOBAL void load_story();

//music.cpp
	GLOBAL void music_ini();
	GLOBAL void music_play();

//out.cpp
	GLOBAL void out_main();
