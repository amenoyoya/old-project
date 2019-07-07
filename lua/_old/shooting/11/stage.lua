require "define"

-- Board
img_board = {}
for i=1,40 do img_board[i] = Spirits() end

-- ボードロード
function load_board()
	img_board[10]:open("../dat/img/board/10.png", 0)
	img_board[11]:open("../dat/img/board/11.png", 0)
	img_board[12]:open("../dat/img/board/12.png", 0)
	img_board[20]:open("../dat/img/board/20.png", 0)
end

-- ボード初期化
function init_board()
	img_board[10]:pos(0, 0)
	img_board[11]:pos(0, field.h)
	img_board[12]:pos(0, field.maxh+field.h)
	img_board[20]:pos(field.maxw+field.w, 0)
end

-- ボード描画
function draw_board()
	stage_count = stage_count + 1
	
	img_board[10]:draw()
	img_board[11]:draw()
	img_board[12]:draw()
	img_board[20]:draw()
end
