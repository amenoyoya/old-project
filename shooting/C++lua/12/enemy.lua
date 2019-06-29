require "enemy_order"

field = field_max()
enemy = enemies()

math.randomseed(os.time())

-- -ang～angまでのランダムな角度を返す
function rang(ang)
	return math.random(-ang, ang)
end

--あいている敵番号を検索
function enemy_num_search()
	for i = 0, enemy_max() do
		--フラグの立っていないenemy番号を返す
		if enemy[i].flag == 0 then return i end
	end
	return -1	--全部埋まっていたらエラーを返す
end


-- 移動パターン0
-- 下がって来て止まって上がっていく
function enemy_pattern0(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 3 end	--下がって来る
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end	--止まる
	
	if enemy[i].cnt == 40+enemy[i].wait then --登録された時間だけ止まって
		enemy[i].vy = -3	--上がっていく
	end
end

-- 移動パターン1
-- 下がってきて停滞して左下に行く
function enemy_pattern1(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 3 end	-- 下がってくる
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end	-- 止まる
	if enemy[i].cnt == 40+enemy[i].wait then-- 登録された時間だけ停滞して
		enemy[i].vx = -1-- 左へ
		enemy[i].vy = 2-- 下がっていく
		enemy[i].muki = 0-- 左向きセット
	end
end

-- 移動パターン2
-- 下がってきて停滞して右下に行く
function enemy_pattern2(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 3 end-- 下がってくる
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end-- 止まる
	if enemy[i].cnt == 40+enemy[i].wait then-- 登録された時間だけ停滞して
		enemy[i].vx = 1-- 右へ
		enemy[i].vy = 2-- 下がっていく
		enemy[i].muki = 2-- 右向きセット
	end
end

-- 行動パターン3
-- すばやく降りてきて左へ
function enemy_pattern3(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 5 end-- 下がってくる
	if enemy[i].cnt == 30 then-- 途中で左向きに
		enemy[i].muki = 0
	end
	if enemy[i].cnt < 100 then
		enemy[i].vx = enemy[i].vx - 5/100-- 左向き加速
		enemy[i].vy = enemy[i].vy - 5/100-- 減速
	end
end

-- 行動パターン4
-- すばやく降りてきて右へ
function enemy_pattern4(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 5 end-- 下がってくる
	if enemy[i].cnt == 30 then-- 途中で右向きに
		enemy[i].muki = 2
	end
	if enemy[i].cnt < 100 then
		enemy[i].vx = enemy[i].vx + 5/100-- 右向き加速
		enemy[i].vy = enemy[i].vy - 5/100-- 減速
	end
end

-- 行動パターン5
-- 斜め左下へ
function enemy_pattern5(i)
	if enemy[i].cnt == 0 then
		enemy[i].vx = enemy[i].vx - 1
		enemy[i].vy = 2
		enemy[i].muki = 0
	end
end

-- 行動パターン6
-- 斜め右下へ
function enemy_pattern6(i)
	if enemy[i].cnt == 0 then
		enemy[i].vx = enemy[i].vx + 1
		enemy[i].vy = 2
		enemy[i].muki = 2
	end
end

-- 移動パターン7
-- 停滞してそのまま左上に
function enemy_pattern7(i)
	if enemy[i].cnt == enemy[i].wait then-- 登録された時間だけ停滞して
		enemy[i].vx = -0.7-- 左へ
		enemy[i].vy = -0.3-- 上がっていく
		enemy[i].muki = 0-- 左向き
	end
end

-- 移動パターン8
-- 停滞してそのまま右上に
function enemy_pattern8(i)
	if enemy[i].cnt == enemy[i].wait then-- 登録された時間だけ停滞して
		enemy[i].vx = 0.7-- 右へ
		enemy[i].vy = -0.3-- 上がっていく
		enemy[i].muki = 2-- 右向き
	end
end

-- 移動パターン9
-- 停滞してそのまま上に
function enemy_pattern9(i)
	if enemy[i].cnt == enemy[i].wait then-- 登録された時間だけ停滞して
		enemy[i].vy = -1-- 上がっていく
	end
end

PI = 3.1415

-- 移動パターン10
-- 下がってきてウロウロして上がっていく
function enemy_pattern10(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 4 end-- 下がってくる
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end-- 止まる
	if enemy[i].cnt >= 40 then
		if enemy[i].cnt%60 == 0 then
			local r = cos(enemy[i].ang) < 0 and 0 or 1
			enemy[i].sp = 6+rang(2)
			enemy[i].ang = rang(PI/4)+PI*r
			enemy[i].muki = 2-2*r
		end
		enemy[i].sp = enemy[i].sp * 0.95
	end
	if enemy[i].cnt >= 40+enemy[i].wait then
		enemy[i].vy = enemy[i].vy - 0.05
	end
end

-- 敵登録
function enemy_enter()
	for t = 1, table.maxn(enemy_order) do
		--現在の瞬間がオーダーの瞬間なら
		if enemy_order[t].cnt == stage_count() then
			local i = enemy_num_search()
			--敵番号が空いているなら登録
			if i ~= -1 then
				enemy[i].flag = 1
				enemy[i].cnt = 0
				enemy[i].pattern = enemy_order[t].pattern
				enemy[i].muki = 1
				enemy[i].knd = enemy_order[t].knd
				enemy[i].x = enemy_order[t].x
				enemy[i].y = enemy_order[t].y
				enemy[i].sp = enemy_order[t].sp
				enemy[i].bltime = enemy_order[t].bltime
				enemy[i].blknd = enemy_order[t].blknd
				enemy[i].col = enemy_order[t].col
				enemy[i].wait = enemy_order[t].wait
				enemy[i].hp = enemy_order[t].hp
				enemy[i].hp_max = enemy[i].hp
				enemy[i].vx = 0
				enemy[i].vy = 0
				enemy[i].ang = 0
			end
		end
	end
end
