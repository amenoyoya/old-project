require "define"
require "keyconf"

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

-- キャラクター移動
function move_char()
	local sayu_flag , joge_flag = false, false
	local x, y, mx, my, naname = 0, 0, 0, 0, 1
	-- {左,右,下,上}のスピード
	local move_x = {-4.0, 4.0, 0, 0}
	local move_y = {0, 0, 4.0, -4.0}
	
	local inputpad = {}
	inputpad[1] = kleft(); inputpad[2] = kright()
	inputpad[3] = kdown(); inputpad[4] = kup()

	if inputpad[1] > 0 then		-- 左キーが押されていたら
		ch.img = ch.img + 4*2	-- 画像を左向きに
	elseif inputpad[2] > 0 then	-- 右キーが押されていたら
		ch.img = ch.img + 4*1	-- 画像を右向きに
	end
	
	for i=1,2 do	-- 左右分
		if inputpad[i] > 0 then		-- 左右どちらかの入力があれば
			sayu_flag = true		-- 左右入力フラグを立てる
		end
	end
	for i=3,4 do	-- 上下分
		if inputpad[i] > 0 then		-- 上下どちらかの入力があれば
			joge_flag = true		--上下入力フラグを立てる
		end
	end
	
	if sayu_flag and joge_flag then	-- 左右、上下両方の入力があれば斜めだと言う事
		naname = math.sqrt(2.0)		-- 移動スピードを1/ルート2に
	end
	
	for i=1,4 do	-- 4方向分ループ
		if inputpad[i] > 0 then		-- i方向のキーボード、パッドどちらかの入力があれば
			x = ch.x; y = ch.y		-- 今の座標をとりあえずx,yに格納
			mx = move_x[i]; my = move_y[i]	-- 移動分をmx,myに代入
			if kslow() > 0 then		-- 低速移動なら
				mx = move_x[i]/3; my = move_y[i]/3	-- 移動スピードを1/3に
			end
			x = x+mx/naname; y = y+my/naname	-- 今の座標と移動分を足す
			
			if not(x < 10 or x > field.maxw-10 
				or y < 5 or y > field.maxh-5)
			then	--計算結果移動可能範囲内なら
				ch.x = x; ch.y = y	-- 実際に移動させる
			end
		end
	end
end

-- キャラクター描画
function draw_char()
	ch.cnt = ch.cnt + 1		-- キャラカウンタ進める
	ch.img = (ch.cnt%24)/6	-- キャラ画像更新
	
	move_char()
	img_ch[1]:pos(ch.x, ch.y)
	img_ch[1]:divdraw(ch.img)
end
