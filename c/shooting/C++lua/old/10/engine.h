#pragma once

#include "GV.h"

// ������
void first_ini(DxLibEngine &);

// �摜���[�h
void load(DxLibEngine &);

// �摜�`�惁�C��
void graph_main(DxLibEngine &);

/* �L�[�p�b�h���͏�� */
m4_define(_InputKeyPad, $1.key($2)$4 || pad1[$3]$4)
m4_define(_InputDown, _InputKeyPad($1, KEY_INPUT_DOWN, 0, $2))
m4_define(_InputLeft, _InputKeyPad($1, KEY_INPUT_LEFT, 1, $2))
m4_define(_InputRight, _InputKeyPad($1, KEY_INPUT_RIGHT, 2, $2))
m4_define(_InputUp, _InputKeyPad($1, KEY_INPUT_UP, 3, $2))
m4_define(_InputBom, _InputKeyPad($1, KEY_INPUT_X, 4, $2))
m4_define(_InputShot, _InputKeyPad($1, KEY_INPUT_Z, 5, $2))
m4_define(_InputSlow, _InputKeyPad($1, KEY_INPUT_LSHIFT, 11, $2))
m4_define(_InputStart, _InputKeyPad($1, KEY_INPUT_ESCAPE, 10, $2))
m4_define(_InputChange, _InputKeyPad($1, KEY_INPUT_LCONTROL, 6, $2))