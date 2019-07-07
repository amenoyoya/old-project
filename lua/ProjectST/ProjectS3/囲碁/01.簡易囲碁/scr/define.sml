/*** 囲碁ゲーム用グローバル変数、テーブルなど ***/

/*------------------------------------------------------------*/
/* 各種定義                                                   */
/*------------------------------------------------------------*/

SPACE = 0	/* 空点(石が置かれていない) */
BLACK = 1	/* 黒 */
WHITE = 2	/* 白 */
OUT   = 3	/* 盤外 */

BOARD_SIZE = 21		/* 碁盤の大きさ(盤外を含めて19路+2用意) */

/* 相手の色 */
def reverseColor(color){return color == BLACK & WHITE | BLACK}

/* 棋譜構造体 */
def Log(){return ${color=0, x=0, y=0}}


/*------------------------------------------------------------*/
/* 変数                                                       */
/*------------------------------------------------------------*/

/* 碁盤の表示のための文字 */
stone = ${[0]='+', '*', 'O', '?'}

/* 碁盤 */
board = s3.Array2d(BOARD_SIZE, BOARD_SIZE)

/* 手数 */
move = 0

/* アゲハマ */
black_prisoner, white_prisoner = 0, 0

/* 劫の位置 */
ko_x, ko_y = 0, 0

/* 劫が発生した手数 */
ko_num = 0

/* 棋譜(499手まで覚える) */
log_data = ${}
for i = 0, 499 {log_data[i] = Log()}

/* 合法手かどうか調べるのに使う */
check_board = s3.Array2d(BOARD_SIZE, BOARD_SIZE)
