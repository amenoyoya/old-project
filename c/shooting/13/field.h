#pragma once

#include "gv.h"

class FieldObject: public GameObject{
	dximg_t img_board[40];
	
	bool load(){
		loaderrstr = "ボード画像のロードに失敗しました";
		return dximg_t::open(&img_board[10], "../dat/img/board/10.png")
			&& dximg_t::open(&img_board[11], "../dat/img/board/11.png")
			&& dximg_t::open(&img_board[12], "../dat/img/board/12.png")
			&& dximg_t::open(&img_board[20], "../dat/img/board/20.png");
	}
	
	bool draw(){
		++_field::cnt;
		return img_board[10].draw(0, 0, false)
			&& img_board[11].draw(0, _field::y, false)
			&& img_board[12].draw(0, _field::maxh + _field::y, false)
			&& img_board[20].draw(_field::maxw + _field::x, 0, false);
	}
}fieldobj;
