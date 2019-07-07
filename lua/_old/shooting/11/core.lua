require "char"
require "stage"
require "enemy"

-- ƒQ[ƒ€ó‘Ô
game_state = 0

-- ƒQ[ƒ€Às
function run_game()
	-- ƒ[ƒh
	if game_state == 0 then
		load_char(); load_board(); load_enemy()
		game_state = 100
	end
	
	-- ‰Šú‰»
	if game_state == 100 then
		init_char(); init_board()
		game_state = 200
	end
	
	-- •`‰æ
	if game_state == 200 then
		draw_char(); draw_enemy(); draw_board()
	end
end
