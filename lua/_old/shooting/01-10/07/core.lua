require "char"
require "stage"

-- ƒQ[ƒ€ó‘Ô
game_state = 0

-- ƒQ[ƒ€Às
function run_game()
	-- ƒ[ƒh
	if game_state == 0 then
		load_char(); load_board()
		game_state = 100
	end
	
	-- ‰Šú‰»
	if game_state == 100 then
		init_char(); init_board()
		game_state = 200
	end
	
	-- •`‰æ
	if game_state == 200 then
		draw_char(); draw_board()
	end
end
