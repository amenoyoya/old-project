#pragma once

#include "struct.h"

#define _FieldMaxX 384
#define _FieldMaxY 448

#define _FieldX 32
#define _FieldY 16

// �Q�[�����C���֐�
function<void(DxLibEngine &)> g_mainFunc;

// ��l��
Chara img_ch[2];

// �{�[�h
DxLibSprite img_board[40];
