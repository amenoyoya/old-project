active_enemy = 0

math.randomseed(os.time())

-- �ړ��p�^�[��0
-- �������ė��Ď~�܂��ďオ���Ă���
function enemy_pattern0()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 3 end	--�������ė���
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end	--�~�܂�
	
	if enemy[active_enemy].cnt == 40+enemy[active_enemy].wait then --�o�^���ꂽ���Ԃ����~�܂���
		enemy[active_enemy].vy = -3	--�オ���Ă���
	end
end

-- �ړ��p�^�[��1
-- �������Ă��Ē�؂��č����ɍs��
function enemy_pattern1()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 3 end	-- �������Ă���
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end	-- �~�܂�
	if enemy[active_enemy].cnt == 40+enemy[active_enemy].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[active_enemy].vx = -1-- ����
		enemy[active_enemy].vy = 2-- �������Ă���
		enemy[active_enemy].muki = 0-- �������Z�b�g
	end
end

-- �ړ��p�^�[��2
-- �������Ă��Ē�؂��ĉE���ɍs��
function enemy_pattern2()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 3 end-- �������Ă���
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end-- �~�܂�
	if enemy[active_enemy].cnt == 40+enemy[active_enemy].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[active_enemy].vx = 1-- �E��
		enemy[active_enemy].vy = 2-- �������Ă���
		enemy[active_enemy].muki = 2-- �E�����Z�b�g
	end
end

-- �s���p�^�[��3
-- ���΂₭�~��Ă��č���
function enemy_pattern3()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 5 end-- �������Ă���
	if enemy[active_enemy].cnt == 30 then-- �r���ō�������
		enemy[active_enemy].muki = 0
	end
	if enemy[active_enemy].cnt < 100 then
		enemy[active_enemy].vx = enemy[active_enemy].vx - 5/100-- ����������
		enemy[active_enemy].vy = enemy[active_enemy].vy - 5/100-- ����
	end
end

-- �s���p�^�[��4
-- ���΂₭�~��Ă��ĉE��
function enemy_pattern4()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 5 end-- �������Ă���
	if enemy[active_enemy].cnt == 30 then-- �r���ŉE������
		enemy[active_enemy].muki = 2
	end
	if enemy[active_enemy].cnt < 100 then
		enemy[active_enemy].vx = enemy[active_enemy].vx + 5/100-- �E��������
		enemy[active_enemy].vy = enemy[active_enemy].vy - 5/100-- ����
	end
end

-- �s���p�^�[��5
-- �΂ߍ�����
function enemy_pattern5()
	if enemy[active_enemy].cnt == 0 then
		enemy[active_enemy].vx = enemy[active_enemy].vx - 1
		enemy[active_enemy].vy = 2
		enemy[active_enemy].muki = 0
	end
end

-- �s���p�^�[��6
-- �΂߉E����
function enemy_pattern6()
	if enemy[active_enemy].cnt == 0 then
		enemy[active_enemy].vx = enemy[active_enemy].vx + 1
		enemy[active_enemy].vy = 2
		enemy[active_enemy].muki = 2
	end
end

-- �ړ��p�^�[��7
-- ��؂��Ă��̂܂܍����
function enemy_pattern7()
	if enemy[active_enemy].cnt == enemy[active_enemy].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[active_enemy].vx = -0.7-- ����
		enemy[active_enemy].vy = -0.3-- �オ���Ă���
		enemy[active_enemy].muki = 0-- ������
	end
end

-- �ړ��p�^�[��8
-- ��؂��Ă��̂܂܉E���
function enemy_pattern8()
	if enemy[active_enemy].cnt == enemy[active_enemy].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[active_enemy].vx = 0.7-- �E��
		enemy[active_enemy].vy = -0.3-- �オ���Ă���
		enemy[active_enemy].muki = 2-- �E����
	end
end

-- �ړ��p�^�[��9
-- ��؂��Ă��̂܂܏��
function enemy_pattern9()
	if enemy[active_enemy].cnt == enemy[active_enemy].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[active_enemy].vy = -1-- �オ���Ă���
	end
end

PI = 3.1415

-- �ړ��p�^�[��10
-- �������Ă��ăE���E�����ďオ���Ă���
function enemy_pattern10()
	if enemy[active_enemy].cnt == 0 then enemy[active_enemy].vy = 4 end-- �������Ă���
	if enemy[active_enemy].cnt == 40 then enemy[active_enemy].vy = 0 end-- �~�܂�
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
