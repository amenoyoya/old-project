//char.cpp
	GLOBAL void calc_ch();
	GLOBAL void ch_move();

//enemy.cpp
	GLOBAL void enemy_main();

//graph.cpp
	//�`�惁�C��
	GLOBAL void graph_main();

//ini.cpp
	GLOBAL void first_ini();
	GLOBAL void ini();

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

