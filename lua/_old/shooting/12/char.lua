require "define"
require "keyconf"

-- �L�����N�^�[�\����
ch = {
	flag = 0,       --�t���O
	cnt = 0,        --�J�E���^
	power = 0,      --�p���[
	point = 0,      --�|�C���g
	score = 0,      --�X�R�A
	num = 0,        --�c�@��
	mutekicnt = 0,  --���G��ԂƃJ�E���g
	shot_mode = 0,  --�V���b�g���[�h
	money = 0,      --����
	img = 0,        --�摜
	slow = 0,       --�X���[���ǂ���
	x = 0, y = 0    --���W
}

img_ch = {}
for i=1,2 do img_ch[i] = Spirits() end


-- �L�����N�^�[���[�h
function load_char()
	img_ch[1]:divopen("../dat/img/char/0.png", 4, 3, 73, 73, 0)
end

-- �L�����N�^�[������
function init_char()
	ch.x = field.maxw/2
	ch.y = field.maxh*3/4
end

-- �L�����N�^�[�ړ�
function move_char()
	local sayu_flag , joge_flag = false, false
	local x, y, mx, my, naname = 0, 0, 0, 0, 1
	-- {��,�E,��,��}�̃X�s�[�h
	local move_x = {-4.0, 4.0, 0, 0}
	local move_y = {0, 0, 4.0, -4.0}
	
	local inputpad = {}
	inputpad[1] = kleft(); inputpad[2] = kright()
	inputpad[3] = kdown(); inputpad[4] = kup()

	if inputpad[1] > 0 then		-- ���L�[��������Ă�����
		ch.img = ch.img + 4*2	-- �摜����������
	elseif inputpad[2] > 0 then	-- �E�L�[��������Ă�����
		ch.img = ch.img + 4*1	-- �摜���E������
	end
	
	for i=1,2 do	-- ���E��
		if inputpad[i] > 0 then		-- ���E�ǂ��炩�̓��͂������
			sayu_flag = true		-- ���E���̓t���O�𗧂Ă�
		end
	end
	for i=3,4 do	-- �㉺��
		if inputpad[i] > 0 then		-- �㉺�ǂ��炩�̓��͂������
			joge_flag = true		--�㉺���̓t���O�𗧂Ă�
		end
	end
	
	if sayu_flag and joge_flag then	-- ���E�A�㉺�����̓��͂�����Ύ΂߂��ƌ�����
		naname = math.sqrt(2.0)		-- �ړ��X�s�[�h��1/���[�g2��
	end
	
	for i=1,4 do	-- 4���������[�v
		if inputpad[i] > 0 then		-- i�����̃L�[�{�[�h�A�p�b�h�ǂ��炩�̓��͂������
			x = ch.x; y = ch.y		-- ���̍��W���Ƃ肠����x,y�Ɋi�[
			mx = move_x[i]; my = move_y[i]	-- �ړ�����mx,my�ɑ��
			if kslow() > 0 then		-- �ᑬ�ړ��Ȃ�
				mx = move_x[i]/3; my = move_y[i]/3	-- �ړ��X�s�[�h��1/3��
			end
			x = x+mx/naname; y = y+my/naname	-- ���̍��W�ƈړ����𑫂�
			
			if not(x < 10 or x > field.maxw-10 
				or y < 5 or y > field.maxh-5)
			then	--�v�Z���ʈړ��\�͈͓��Ȃ�
				ch.x = x; ch.y = y	-- ���ۂɈړ�������
			end
		end
	end
end

-- �L�����N�^�[�`��
function draw_char()
	ch.cnt = ch.cnt + 1		-- �L�����J�E���^�i�߂�
	ch.img = (ch.cnt%24)/6	-- �L�����摜�X�V
	
	move_char()
	img_ch[1]:pos(ch.x, ch.y)
	img_ch[1]:divdraw(ch.img)
end
