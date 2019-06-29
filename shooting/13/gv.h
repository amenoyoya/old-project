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
	const int maxpattern = 11;	// 敵の行動パターンの最大数
}

namespace _shot{
	// 敵1匹が持つ弾の最大数
	const int maxbullet = 1000;
	// 一度に表示できる弾幕の最大数
	const int max = 30;
	// ショットの種類の最大数
	const int maxknd = 1;
}

namespace _se{
	const int max = 100;
}

#define PI  3.1415926535898
#define PI2 (PI*2)
