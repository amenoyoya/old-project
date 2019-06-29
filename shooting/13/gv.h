#pragma once

#include "engine.h"

namespace _field{
	const double maxw = 384, maxh = 448;
	const double x = 32, y = 16;
	static uint_t cnt = 1;
}

namespace _enemy{
	const int max = 30;
	const int maxorder = 500;
	const int maxpattern = 11;	// �G�̍s���p�^�[���̍ő吔
}

namespace _shot{
	// �G1�C�����e�̍ő吔
	const int maxbullet = 1000;
	// ��x�ɕ\���ł���e���̍ő吔
	const int max = 30;
	// �V���b�g�̎�ނ̍ő吔
	const int maxknd = 1;
}

namespace _se{
	const int max = 100;
}

#define PI  3.1415926535898
#define PI2 (PI*2)
