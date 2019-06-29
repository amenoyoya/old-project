require "enemy_order"

field = field_max()
enemy = enemies()

math.randomseed(os.time())

-- -ang�`ang�܂ł̃����_���Ȋp�x��Ԃ�
function rang(ang)
	return math.random(-ang, ang)
end

--�����Ă���G�ԍ�������
function enemy_num_search()
	for i = 0, enemy_max() do
		--�t���O�̗����Ă��Ȃ�enemy�ԍ���Ԃ�
		if enemy[i].flag == 0 then return i end
	end
	return -1	--�S�����܂��Ă�����G���[��Ԃ�
end


-- �ړ��p�^�[��0
-- �������ė��Ď~�܂��ďオ���Ă���
function enemy_pattern0(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 3 end	--�������ė���
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end	--�~�܂�
	
	if enemy[i].cnt == 40+enemy[i].wait then --�o�^���ꂽ���Ԃ����~�܂���
		enemy[i].vy = -3	--�オ���Ă���
	end
end

-- �ړ��p�^�[��1
-- �������Ă��Ē�؂��č����ɍs��
function enemy_pattern1(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 3 end	-- �������Ă���
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end	-- �~�܂�
	if enemy[i].cnt == 40+enemy[i].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[i].vx = -1-- ����
		enemy[i].vy = 2-- �������Ă���
		enemy[i].muki = 0-- �������Z�b�g
	end
end

-- �ړ��p�^�[��2
-- �������Ă��Ē�؂��ĉE���ɍs��
function enemy_pattern2(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 3 end-- �������Ă���
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end-- �~�܂�
	if enemy[i].cnt == 40+enemy[i].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[i].vx = 1-- �E��
		enemy[i].vy = 2-- �������Ă���
		enemy[i].muki = 2-- �E�����Z�b�g
	end
end

-- �s���p�^�[��3
-- ���΂₭�~��Ă��č���
function enemy_pattern3(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 5 end-- �������Ă���
	if enemy[i].cnt == 30 then-- �r���ō�������
		enemy[i].muki = 0
	end
	if enemy[i].cnt < 100 then
		enemy[i].vx = enemy[i].vx - 5/100-- ����������
		enemy[i].vy = enemy[i].vy - 5/100-- ����
	end
end

-- �s���p�^�[��4
-- ���΂₭�~��Ă��ĉE��
function enemy_pattern4(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 5 end-- �������Ă���
	if enemy[i].cnt == 30 then-- �r���ŉE������
		enemy[i].muki = 2
	end
	if enemy[i].cnt < 100 then
		enemy[i].vx = enemy[i].vx + 5/100-- �E��������
		enemy[i].vy = enemy[i].vy - 5/100-- ����
	end
end

-- �s���p�^�[��5
-- �΂ߍ�����
function enemy_pattern5(i)
	if enemy[i].cnt == 0 then
		enemy[i].vx = enemy[i].vx - 1
		enemy[i].vy = 2
		enemy[i].muki = 0
	end
end

-- �s���p�^�[��6
-- �΂߉E����
function enemy_pattern6(i)
	if enemy[i].cnt == 0 then
		enemy[i].vx = enemy[i].vx + 1
		enemy[i].vy = 2
		enemy[i].muki = 2
	end
end

-- �ړ��p�^�[��7
-- ��؂��Ă��̂܂܍����
function enemy_pattern7(i)
	if enemy[i].cnt == enemy[i].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[i].vx = -0.7-- ����
		enemy[i].vy = -0.3-- �オ���Ă���
		enemy[i].muki = 0-- ������
	end
end

-- �ړ��p�^�[��8
-- ��؂��Ă��̂܂܉E���
function enemy_pattern8(i)
	if enemy[i].cnt == enemy[i].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[i].vx = 0.7-- �E��
		enemy[i].vy = -0.3-- �オ���Ă���
		enemy[i].muki = 2-- �E����
	end
end

-- �ړ��p�^�[��9
-- ��؂��Ă��̂܂܏��
function enemy_pattern9(i)
	if enemy[i].cnt == enemy[i].wait then-- �o�^���ꂽ���Ԃ�����؂���
		enemy[i].vy = -1-- �オ���Ă���
	end
end

PI = 3.1415

-- �ړ��p�^�[��10
-- �������Ă��ăE���E�����ďオ���Ă���
function enemy_pattern10(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 4 end-- �������Ă���
	if enemy[i].cnt == 40 then enemy[i].vy = 0 end-- �~�܂�
	if enemy[i].cnt >= 40 then
		if enemy[i].cnt%60 == 0 then
			local r = cos(enemy[i].ang) < 0 and 0 or 1
			enemy[i].sp = 6+rang(2)
			enemy[i].ang = rang(PI/4)+PI*r
			enemy[i].muki = 2-2*r
		end
		enemy[i].sp = enemy[i].sp * 0.95
	end
	if enemy[i].cnt >= 40+enemy[i].wait then
		enemy[i].vy = enemy[i].vy - 0.05
	end
end

-- �G�o�^
function enemy_enter()
	for t = 1, table.maxn(enemy_order) do
		--���݂̏u�Ԃ��I�[�_�[�̏u�ԂȂ�
		if enemy_order[t].cnt == stage_count() then
			local i = enemy_num_search()
			--�G�ԍ����󂢂Ă���Ȃ�o�^
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
