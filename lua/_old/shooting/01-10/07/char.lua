require "define"

-- キャラクター構造体
ch = {
	flag = 0,       --フラグ
	cnt = 0,        --カウンタ
	power = 0,      --パワー
	point = 0,      --ポイント
	score = 0,      --スコア
	num = 0,        --残機数
	mutekicnt = 0,  --無敵状態とカウント
	shot_mode = 0,  --ショットモード
	money = 0,      --お金
	img = 0,        --画像
	slow = 0,       --スローかどうか
	x = 0, y = 0    --座標
}

img_ch = {}
for i=1,2 do img_ch[i] = Spirits() end


-- キャラクターロード
function load_char()
	img_ch[1]:divopen("../dat/img/char/0.png", 4, 3, 73, 73, 0)
end

-- キャラクター初期化
function init_char()
	ch.x = field.maxw/2
	ch.y = field.maxh*3/4
end

-- キャラクター描画
function draw_char()
	ch.cnt = ch.cnt + 1		-- キャラカウンタ進める
	ch.img = (ch.cnt%24)/6	-- キャラ画像更新
	
	img_ch[1]:pos(ch.x, ch.y)
	img_ch[1]:divdraw(ch.img)
end
