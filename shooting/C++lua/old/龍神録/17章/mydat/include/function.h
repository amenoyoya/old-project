//enemy.cpp
	GLOBAL void enemy_main();

//enemy_act_pattern.cpp
	GLOBAL double rang(double);

//cshot.cpp
	GLOBAL void cshot_main();

//char.cpp
	GLOBAL void calc_ch();
	GLOBAL void ch_move();

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