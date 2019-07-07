#pragma once

#include "struct.h"

#define _FieldMaxX 384
#define _FieldMaxY 448

#define _FieldX 32
#define _FieldY 16

// ゲームメイン関数
function<void(DxLibEngine &)> g_mainFunc;

// 主人公
Chara img_ch[2];

// ボード
DxLibSprite img_board[40];
