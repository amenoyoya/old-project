#pragma once

#include "GV.h"

// 表示する主人公画像を計算
inline void calc_ch(){
	img_ch[0].img = ((++img_ch[0].cnt)%24)/6;
}
