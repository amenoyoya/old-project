/*** 囲碁ゲーム用関数 ***/

/*------------------------------------------------------------------*/
/* 碁盤の初期化                                                     */
/*------------------------------------------------------------------*/
def initializeBoard(){
	for y = 1, BOARD_SIZE-2 {
		for x = 1, BOARD_SIZE-2 { board->set(y, x, SPACE) }
	}
	for y = 0, BOARD_SIZE-1 {
		board->set(y, 0, OUT)
		board->set(y, BOARD_SIZE-1, OUT)
		board->set(0, y, OUT)
		board->set(BOARD_SIZE-1, y, OUT)
	}
}

/*------------------------------------------------------------------*/
/* 碁盤を表示する                                                   */
/*------------------------------------------------------------------*/
def displayBoard(){
	u8print"    [ A B C D E F G H J K L M N O P Q R S T]"
	for y = 1, BOARD_SIZE-2 {
		u8printf("[%2d] ", y)
		for x = 1, BOARD_SIZE-2 { u8printf(" %s", stone[board->get(y, x)]) }
		u8print""
	}
}

/*------------------------------------------------------------------*/
/* 着手位置の入力: x,y が返る                                       */
/* 今は画面から入力するようになっていますが、ここをコンピュータが考 */
/* えて着手位置を返すようにすれば、コンピュータ対人間のプログラムに */
/* なります                                                         */
/*------------------------------------------------------------------*/
def thinkMove(color){
	local inputX, inputY = 0, 0
	while true {
		/* 着手位置の入力 */
		inputX, inputY = inputCoordinate(color)
		if inputX > 0 & inputX < BOARD_SIZE-1 & inputY > 0 & inputY < BOARD_SIZE-1 {
			/* 座標が1～19ならば合法手がどうか調べる */
			if checkLegal(color, inputX, inputY) {break}
		}else{
			break
		}
	}
	return inputX, inputY
}

/*------------------------------------------------------------------*/
/* 画面から数値を入力: 入力された x,y が返る                        */
/* X座標が1～19ならばY座標も入力する                                */
/* X座標が1より小さければパスとみなし、Y座標は入力しない            */
/* X座標が19より大きければ投了とみなし、Y座標は入力しない           */
/*------------------------------------------------------------------*/
def inputCoordinate(color){
	local x, y
	
	u8print("\nPlease Input "..(color == BLACK & "Black" | "White").." Coordinates.")
	u8print" Pass -> 0, Quit -> 20\n"
	/* X座標の入力 */
	while !x {
		u8printf"InputX:"
		x = tonumber(io.read())
	}
	x = toint(x)
	if x > 0 & x < BOARD_SIZE-1 { /* X座標が1～19なのでY座標の入力 */
		while !y {
			u8printf"InputY:"
			y = tonumber(io.read())
		}
		y = toint(y)
	}elif x < 1 { /* X座標が1より小さいのでパスとみなし、Y座標は入力しない */
		y = 0
	}else{ /* X座標が19より大きいので投了とみなし、Y座標は入力しない */
		y = 20
	}
	return x, y
}

/*------------------------------------------------------------------*/
/* 合法手かどうか調べる                                             */
/*------------------------------------------------------------------*/
def checkLegal(color, x, y){
	if board->get(y, x) != SPACE { /* 空点じゃないと置けません */
		return false
	}
	if move > 1 { /* 一手前に劫を取られていたら置けません */
		if ko_x == x & ko_y == y & ko_num == move-1 {return false}
	}
	if checkSuicide(color, x, y) { /* 自殺手なら置けません */
		return false
	}
	/* 以上のチェックをすべてクリアできたので置けます */
	return true
}

/*------------------------------------------------------------------*/
/* 自殺手かどうか調べる                                             */
/*------------------------------------------------------------------*/
def checkSuicide( color, x, y){
	local opponent // 相手の色
	
	board->set(y, x, color) // 仮に石を置く
	clearCheckBoard() // マークのクリア
	
	/* 対象の石が相手に囲まれているか調べる */
	local rtnVal = doCheckRemoveStone(color, x, y)
	if rtnVal { // 囲まれているならば自殺手の可能性あり
		opponent = reverseColor(color) // 相手の色を求める
		/* その石を置いたことにより、隣の相手の石が取れるなら自殺手ではない */
		if x > 1 {
			if board->get(y, x-1) == opponent { // 隣は相手？
				clearCheckBoard() // マークのクリア
				/* 相手の石は囲まれているか？ */
				rtnVal = doCheckRemoveStone(opponent, x-1, y)
				if rtnVal { // 相手の石を取れるので自殺手ではない
					board->set(y, x, SPACE) // 盤を元に戻す
					return false
				}
			}
		}
		if y > 1 {
			if board->get(y-1, x) == opponent { // 隣は相手？
				clearCheckBoard() // マークのクリア
				/* 相手の石は囲まれているか？ */
				rtnVal = doCheckRemoveStone(opponent, x, y-1)
				if rtnVal { // 相手の石を取れるので自殺手ではない
					board->set(y, x, SPACE) // 盤を元に戻す
					return false
				}
			}
		}
		if x < BOARD_SIZE-2 {
			if board->get(y, x+1) == opponent { // 隣は相手？
				clearCheckBoard() // マークのクリア
				/* 相手の石は囲まれているか？ */
				rtnVal = doCheckRemoveStone(opponent, x+1, y)
				if rtnVal { // 相手の石を取れるので自殺手ではない
					board->set(y, x, SPACE) // 盤を元に戻す
					return false
				}
			}
		}
		if y < BOARD_SIZE-2 {
			if board->get(y+1, x) == opponent { // 隣は相手？
				clearCheckBoard() // マークのクリア
				/* 相手の石は囲まれているか？ */
				rtnVal = doCheckRemoveStone(opponent, x, y+1)
				if rtnVal { // 相手の石を取れるので自殺手ではない
					board->set(y, x, SPACE) // 盤を元に戻す
					return false
				}
			}
		}
		board->set(y, x, SPACE) // 盤を元に戻す
		return true // 相手の石を取れないなら自殺手
	}else{
		board->set(y, x, SPACE) // 盤を元に戻す
		return false // 囲まれていないので自殺手ではない
	}
}

/*------------------------------------------------------------------*/
/* チェック用の碁盤をクリア                                         */
/*------------------------------------------------------------------*/
def clearCheckBoard(){
	for y = 1, BOARD_SIZE-2 {
		for x = 1, BOARD_SIZE-2 {check_board->set(y, x, false)}
	}
}

/*------------------------------------------------------------------*/
/* 座標(x,y)にあるcolor石が相手に囲まれているか調べる               */
/* 空点があればfalseを返し、空点がなければtrueを返す                */
/*------------------------------------------------------------------*/
def doCheckRemoveStone(color, x, y){
	local rtn
	
	if check_board->get(y, x) { // 対象の場所が既に調べた点ならおしまい
		return true
	}
	check_board->set(y, x, true) // 調べたことをマークする
	if board->get(y, x) == SPACE { // 何も置かれていないならばおしまい
		return false
	}
	if board->get(y, x) == color { // 同じ色の石ならばその石の隣も調べる
		if x > 1 { // その石の左(x-1,y)を調べる
			rtn = doCheckRemoveStone(color, x-1, y)
			if !rtn {return false}
		}
		if y > 1 { // その石の上(x,y-1)を調べる
			rtn = doCheckRemoveStone(color, x, y-1)
			if !rtn {return false}
		}
		if x < BOARD_SIZE-2 { // その石の右(x+1,y)を調べる
			rtn = doCheckRemoveStone(color, x+1, y)
			if !rtn {return false}
		}
		if y < BOARD_SIZE-2 { // その石の下(x,y+1)を調べる
			rtn = doCheckRemoveStone(color, x, y+1)
			if !rtn {return false}
		}
	}
	return true // 相手の色の石があった
}

/*------------------------------------------------------------------*/
/* 勝敗の判定                                                       */
/* このプログラムでは地を数えていません                             */
/* アゲハマの多い方を勝ちと判定しています                           */
/*------------------------------------------------------------------*/
def countScore(){
	local black_score, white_score = 0, 0
	/* 碁盤上の地を数えるべきところだが省略 */
	/* アゲハマを加える */
	black_score += black_prisoner
	white_score += white_prisoner
	return black_score - white_score // 黒－白を返す
}

/*------------------------------------------------------------------*/
/* 碁盤に石を置く                                                   */
/*------------------------------------------------------------------*/
def setStone(color, x, y){
	local prisonerN = 0   /* 取り除かれた石の数（上） */
	local prisonerE = 0   /* 取り除かれた石の数（右） */
	local prisonerS = 0   /* 取り除かれた石の数（下） */
	local prisonerW = 0   /* 取り除かれた石の数（左） */
	local prisonerAll = 0 /* 取り除かれた石の総数 */
	local koFlag = false  /* 劫かどうか */
	
	board->set(y, x, color) // 座標(x,y)に石を置く
	/* 置いた石の隣に同じ色の石はあるか？ */
	if board->get(y+1, x) != color & board->get(y-1, x) != color &
		board->get(y, x+1) != color & board->get(y, x-1) != color
	{
		koFlag = true // 同じ色の石がないならば劫かもしれない
	}else{
		koFlag = false // 同じ色の石があるならば劫ではない
	}
	/* 置いた石の周囲の相手の石が死んでいれば碁盤から取り除く */
	if y > 1 {
		prisonerN = removeStone(color, x, y-1)
	}
	if x > 1 {
		prisonerW = removeStone(color, x-1, y)
	}
	if y < BOARD_SIZE-2 {
		prisonerS = removeStone(color, x, y+1)
	}
	if x < BOARD_SIZE-2 {
		prisonerE = removeStone(color, x+1, y)
	}
	prisonerAll = prisonerN + prisonerE + prisonerS + prisonerW // 取り除かれた石の総数
	/* 置いた石の隣に同じ色の石がなく、取り除かれた石も１つならば劫 */
	if koFlag & prisonerAll == 1 {
		ko_num = move // 劫の発生した手数を覚える
		/* 劫の座標を覚える */
		if prisonerE == 1 { // 取り除かれた石が右
			ko_x, ko_y = x+1, y
		}elif prisonerS == 1 { // 取り除かれた石が下
			ko_x, ko_y = x, y+1
		}elif prisonerW == 1 { // 取り除かれた石が左
			ko_x, ko_y = x-1, y
		}elif prisonerN == 1 { // 取り除かれた石が上
			ko_x, ko_y = x, y-1
		}
	}
	/* アゲハマの更新 */
	if prisonerAll > 0 {
		if color == BLACK {
			black_prisoner += prisonerAll
		}elif color == WHITE {
			white_prisoner += prisonerAll;
		}
	}
}

/*------------------------------------------------------------------*/
/* 座標(x,y)の石が死んでいれば碁盤から取り除く                      */
/* 碁盤から取り除かれた石数が返る                                   */
/*------------------------------------------------------------------*/
def removeStone(color, x, y){
	if board->get(y, x) == color { // 置いた石と同じ色なら取らない
		return 0
	}
	if board->get(y, x) == SPACE { // 空点なら取らない
		return 0
	}
	clearCheckBoard() // マークのクリア
	if doCheckRemoveStone(board->get(y, x), x, y) { // 囲まれているなら取る
		return doRemoveStone(board->get(y, x), x, y, 0)
	}
	return 0
}

/*------------------------------------------------------------------*/
/* 座標(x,y)のcolor石を碁盤から取り除き、取った石の数を返す         */
/*------------------------------------------------------------------*/
def doRemoveStone(color, x, y, prisoner){
	/* 取り除かれる石と同じ色ならば石を取る */
	if board->get(y, x) == color {
		prisoner += 1 // 取った石の数を１つ増やす
		board->set(y, x, SPACE) // その座標に空点を置く
		if x > 1 { // 左を調べる
			prisoner = doRemoveStone(color, x-1, y, prisoner)
		}
		if y > 1 { // 上を調べる
			prisoner = doRemoveStone(color, x, y-1, prisoner)
		}
		if x < BOARD_SIZE-2 { // 右を調べる
			prisoner = doRemoveStone(color, x+1, y, prisoner)
		}
		if y < BOARD_SIZE-2 { // 下を調べる
			prisoner = doRemoveStone(color, x, y+1, prisoner)
		}
	}
	return prisoner // 取った石の数を返す
}

/*------------------------------------------------------------------*/
/* 棋譜に記録                                                       */
/*------------------------------------------------------------------*/
def recordMove(color, x, y){
	if move < 500 {
		log_data[move].color = color
		log_data[move].x     = x
		log_data[move].y     = y
	}
}
