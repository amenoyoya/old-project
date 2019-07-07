require "char"

-- ƒQ[ƒ€ó‘Ô
game_state = 0

-- ƒQ[ƒ€Às
function run_game()
	-- ƒ[ƒh•‰Šú‰»
	if game_state == 0 then
		load_char()
		game_state = 100
	end
	
	-- •`‰æ
	if game_state == 100 then
		draw_char()
	end
end
