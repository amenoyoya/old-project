active_enemy = 0

math.randomseed(os.time())

-- 移動パターン0
-- 下がって来て止まって上がっていく
function enemy_pattern0()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 3 end	--下がって来る
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end	--止まる
	
	if enemy[active_enemy].cnt == 40+enemy[active_enemy].wait then --登録された時間だけ止まって
		enemy[active_enemy].vy = -3	--上がっていく
	end
end

-- 移動パターン1
-- 下がってきて停滞して左下に行く
function enemy_pattern1()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 3 end	-- 下がってくる
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end	-- 止まる
	if enemy[active_enemy].cnt == 40+enemy[active_enemy].wait then-- 登録された時間だけ停滞して
		enemy[active_enemy].vx = -1-- 左へ
		enemy[active_enemy].vy = 2-- 下がっていく
		enemy[active_enemy].muki = 0-- 左向きセット
	end
end

-- 移動パターン2
-- 下がってきて停滞して右下に行く
function enemy_pattern2()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 3 end-- 下がってくる
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end-- 止まる
	if enemy[active_enemy].cnt == 40+enemy[active_enemy].wait then-- 登録された時間だけ停滞して
		enemy[active_enemy].vx = 1-- 右へ
		enemy[active_enemy].vy = 2-- 下がっていく
		enemy[active_enemy].muki = 2-- 右向きセット
	end
end

-- 行動パターン3
-- すばやく降りてきて左へ
function enemy_pattern3()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 5 end-- 下がってくる
	if enemy[active_enemy].cnt == 30 then-- 途中で左向きに
		enemy[active_enemy].muki = 0
	end
	if enemy[active_enemy].cnt < 100 then
		enemy[active_enemy].vx = enemy[active_enemy].vx - 5/100-- 左向き加速
		enemy[active_enemy].vy = enemy[active_enemy].vy - 5/100-- 減速
	end
end

-- 行動パターン4
-- すばやく降りてきて右へ
function enemy_pattern4()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 5 end-- 下がってくる
	if enemy[active_enemy].cnt == 30 then-- 途中で右向きに
		enemy[active_enemy].muki = 2
	end
	if enemy[active_enemy].cnt < 100 then
		enemy[active_enemy].vx = enemy[active_enemy].vx + 5/100-- 右向き加速
		enemy[active_enemy].vy = enemy[active_enemy].vy - 5/100-- 減速
	end
end

-- 行動パターン5
-- 斜め左下へ
function enemy_pattern5()
	if enemy[active_enemy].cnt == 0 then
		enemy[active_enemy].vx = enemy[active_enemy].vx - 1
		enemy[active_enemy].vy = 2
		enemy[active_enemy].muki = 0
	end
end

-- 行動パターン6
-- 斜め右下へ
function enemy_pattern6()
	if enemy[active_enemy].cnt == 0 then
		enemy[active_enemy].vx = enemy[active_enemy].vx + 1
		enemy[active_enemy].vy = 2
		enemy[active_enemy].muki = 2
	end
end

-- 移動パターン7
-- 停滞してそのまま左上に
function enemy_pattern7()
	if enemy[active_enemy].cnt == enemy[active_enemy].wait then-- 登録された時間だけ停滞して
		enemy[active_enemy].vx = -0.7-- 左へ
		enemy[active_enemy].vy = -0.3-- 上がっていく
		enemy[active_enemy].muki = 0-- 左向き
	end
end

-- 移動パターン8
-- 停滞してそのまま右上に
function enemy_pattern8()
	if enemy[active_enemy].cnt == enemy[active_enemy].wait then-- 登録された時間だけ停滞して
		enemy[active_enemy].vx = 0.7-- 右へ
		enemy[active_enemy].vy = -0.3-- 上がっていく
		enemy[active_enemy].muki = 2-- 右向き
	end
end

-- 移動パターン9
-- 停滞してそのまま上に
function enemy_pattern9()
	if enemy[active_enemy].cnt == enemy[active_enemy].wait then-- 登録された時間だけ停滞して
		enemy[active_enemy].vy = -1-- 上がっていく
	end
end

PI = 3.1415

-- 移動パターン10
-- 下がってきてウロウロして上がっていく
function enemy_pattern10()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 4 end-- 下がってくる
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end-- 止まる
	if enemy[active_enemy].cnt >= 40 then
		if enemy[active_enemy].cnt%60 == 0 then
			local r = math.cos(enemy[active_enemy].ang) < 0 and 0 or 1
			enemy[active_enemy].sp = 6+math.random(-2, 2)
			enemy[active_enemy].ang = math.random(-PI/4, PI/4)+PI*r
			enemy[active_enemy].muki = 2-2*r
		end
		enemy[active_enemy].sp = enemy[active_enemy].sp * 0.95
	end
	if enemy[active_enemy].cnt >= 40+enemy[active_enemy].wait then
		enemy[active_enemy].vy = enemy[active_enemy].vy - 0.05
	end
end
