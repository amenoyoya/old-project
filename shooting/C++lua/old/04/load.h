#pragma once

#include "GV.h"

void graph_main(DxLibEngine &);

void load(DxLibEngine &){
	img_ch[0].load("../dat/img/char/0.png", 73, 73, 4, 3);
	g_mainFunc = graph_main;
}
