require "char"
require "stage"

-- �Q�[�����
game_state = 0

-- �Q�[�����s
function run_game()
	-- ���[�h
	if game_state == 0 then
		load_char(); load_board()
		game_state = 100
	end
	
	-- ������
	if game_state == 100 then
		init_char(); init_board()
		game_state = 200
	end
	
	-- �`��
	if game_state == 200 then
		draw_char(); draw_board()
	end
end
