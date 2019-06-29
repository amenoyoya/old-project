field = field_max()
enemy = enemies()

function enemy_pattern(i)
	if enemy[i].cnt < 60 then enemy[i].y = enemy[i].y+2.0 end
 	if enemy[i].cnt > 60+240 then enemy[i].y = enemy[i].y-2.0 end
end

function enemy_enter()
	if stage_count() == 100 then --ƒQ[ƒ€‚ªn‚Ü‚Á‚Ä100ƒJƒEƒ“ƒg‚Å“o˜^
		enemy[0].cnt	= 0
		enemy[0].muki   = 1
		enemy[0].flag   = 1
		enemy[0].bltime = 150
		enemy[0].hp     = 1000
		enemy[0].hp_max = enemy[0].hp
		enemy[0].pattern= 0;
		enemy[0].x	    = field["w"]/2;
		enemy[0].y	    = -20;
	end
end
