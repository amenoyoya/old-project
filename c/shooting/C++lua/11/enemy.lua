require "enemy_order"

field = field_max()
enemy = enemies()

function enemy_pattern(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 2 end	--‰º‚ª‚Á‚Ä—ˆ‚é
 	if enemy[i].cnt == 60 then enemy[i].vy = 0 end	--~‚Ü‚é
 	
 	if enemy[i].cnt == 60+enemy[i].wait then --“o˜^‚³‚ê‚½ŠÔ‚¾‚¯~‚Ü‚Á‚Ä
 		enemy[i].vy = -2	--ã‚ª‚Á‚Ä‚¢‚­
 	end
end

--‚ ‚¢‚Ä‚¢‚é“G”Ô†‚ğŒŸõ
function enemy_num_search()
	for i = 0, enemy_max() do
		--ƒtƒ‰ƒO‚Ì—§‚Á‚Ä‚¢‚È‚¢enemy”Ô†‚ğ•Ô‚·
		if enemy[i].flag == 0 then return i end
	end
	return -1	--‘S•”–„‚Ü‚Á‚Ä‚¢‚½‚çƒGƒ‰[‚ğ•Ô‚·
end

function enemy_enter()
	for t = 1, table.maxn(enemy_order) do
		--Œ»İ‚ÌuŠÔ‚ªƒI[ƒ_[‚ÌuŠÔ‚È‚ç
		if enemy_order[t].cnt == stage_count() then
			local i = enemy_num_search()
			--“G”Ô†‚ª‹ó‚¢‚Ä‚¢‚é‚È‚ç“o˜^
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
