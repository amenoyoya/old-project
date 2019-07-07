require "scr.array2d"
require "scr.define"
require "scr.go"

/*------------------------------------------------------------------*/
/* メイン処理                                                       */
/*------------------------------------------------------------------*/
def main(){
	local xBlack, yBlack /* 黒の着手位置 */
	local xWhite, yWhite /* 白の着手位置 */
	local score          /* 黒地－白地   */
	
	initializeBoard() // 碁盤の初期化
	u8print"Sample Program Start"
	xBlack, yBlack = 999, 999 // 最初は0以外の数字を書いておく
	xWhite, yWhite = 999, 999 // 最初は0以外の数字を書いておく
	black_prisoner, white_prisoner = 0, 0 // アゲハマ
	move = 1 // 手数
	/* 終局するまでループ */
	while true {
		/*------*/
		/* 黒番 */
		/*------*/
		displayBoard() // 碁盤の表示
		xBlack, yBlack = thinkMove(BLACK) // 黒の着手位置を入力
		/* 黒が投了なら白の勝ち */
		if xBlack >= BOARD_SIZE-1 | yBlack >= BOARD_SIZE-1 {
			u8print"Black Resign. White Win."
			break
		}
		/* 黒白ともにパスなら地を数えて勝者を表示 */
		if ( xBlack < 1 | yBlack < 1 ) & ( xWhite < 1 | yWhite < 1 ) {
			score = countScore()
			if score > 0 { // 黒が多ければ黒の勝ち
				u8print"Black Win"
			}elif score < 0 { // 黒が少なければ白の勝ち
				u8print"White Win"
			}else{ // 同数ならば引分け
				u8print"Draw"
			}
			break
		}
		setStone(BLACK, xBlack, yBlack) // 座標が1～19なら碁盤に石を置く
		recordMove(BLACK, xBlack, yBlack) // 棋譜に記録
		move += 1 // 手数が1増える
		
		/*------*/
		/* 白番 */
		/*------*/
		displayBoard() // 碁盤の表示
		xWhite, yWhite = thinkMove(WHITE) // 白の着手位置を入力
		/* 白が投了なら黒の勝ち */
		if xWhite >= BOARD_SIZE-1 | yWhite >= BOARD_SIZE-1 {
			u8print"White Resign. Black Win."
			break
		}
		/* 黒白ともにパスなら地を数えて勝者を表示 */
		if ( xBlack < 1 | yBlack < 1 ) & ( xWhite < 1 | yWhite < 1 ) {
			score = countScore()
			if score > 0 { // 黒が多ければ黒の勝ち
				u8print"Black Win"
			}elif score < 0 { // 黒が少なければ白の勝ち
				u8print"White Win"
			}else{ // 同数ならば引分け
				u8print"Draw"
			}
			break
		}
		setStone(WHITE, xWhite, yWhite) // 座標が1～19なら碁盤に石を置く
		recordMove(WHITE, xWhite, yWhite) // 棋譜に記録
		move += 1 // 手数が1増える
	}
	u8print"Sample Program End"
	os.execute"pause"
}

main()
