require "char"

-- �Q�[�����
game_state = 0

-- �Q�[�����s
function run_game()
	-- ���[�h��������
	if game_state == 0 then
		load_char()
		game_state = 100
	end
	
	-- �`��
	if game_state == 100 then
		draw_char()
	end
end
