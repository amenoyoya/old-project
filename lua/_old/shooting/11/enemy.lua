require "define"

-- “G‚ÉŠÖ‚·‚é\‘¢‘Ì
enemy = csv2table("../dat/csv/story0.txt")

img_enemy = {}
for i=1,3 do img_enemy[i] = Spirits() end

-- “Gƒ[ƒh
function load_enemy()
	img_enemy[1]:divopen("../dat/img/enemy/0.png", 3, 3, 32, 32, 0)
end

-- ˆÚ“®ƒpƒ^[ƒ“0
function enemy_pattern0(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 2 end	--‰º‚ª‚Á‚Ä‚­‚é
	if enemy[i].cnt == 60 then enemy[i].vy = 0 end	--~‚Ü‚é
	if enemy[i].cnt == 60+enemy[i].wait then	-- “o˜^‚³‚ê‚½ŠÔ‚¾‚¯’â‘Ø‚µ‚Ä
		enemy[i].vy = -2	-- ã‚ª‚Á‚Ä‚¢‚­
	end
end

-- “Gƒf[ƒ^“o˜^
function enemy_enter()
	for i=1, table.maxn(enemy) do
		if enemy[i].entry == stage_count then	-- “oê‚ÌŠÔ‚É‚È‚Á‚½‚ç
			enemy[i].flag = 1	-- “oê‚³‚¹‚é
		end
	end
end

-- “G‚Ìs“®§Œä
function enemy_act()
	for i=1, table.maxn(enemy) do
		if enemy[i].flag == 1 then
			enemy_pattern0(i)
			enemy[i].x = enemy[i].x + math.cos(enemy[i].ang)*enemy[i].sp;
			enemy[i].y = enemy[i].y + math.sin(enemy[i].ang)*enemy[i].sp;
			enemy[i].x = enemy[i].x + enemy[i].vx;
			enemy[i].y = enemy[i].y+ enemy[i].vy;
			enemy[i].cnt = enemy[i].cnt + 1
			enemy[i].img = enemy[i].muki*3+(enemy[i].cnt%18)/6
			-- “G‚ª‰æ–Ê‚©‚çŠO‚ê‚½‚çÁ‚·
			if(enemy[i].x < -50 or field.maxw+50 < enemy[i].x
				or enemy[i].y < -50 or field.maxh+50 < enemy[i].y)
			then
				enemy[i].flag = 0
			end
		end
	end
end

-- “G•`‰æ
function draw_enemy()
	enemy_enter()
	enemy_act()
	for i=1, table.maxn(enemy) do
		if enemy[i].flag==1 then
			img_enemy[1]:pos(enemy[i].x, enemy[i].y)
			img_enemy[1]:divdraw(enemy[i].img)
		end
	end
end
