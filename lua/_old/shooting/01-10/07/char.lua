require "define"

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

-- �L�����N�^�[�`��
function draw_char()
	ch.cnt = ch.cnt + 1		-- �L�����J�E���^�i�߂�
	ch.img = (ch.cnt%24)/6	-- �L�����摜�X�V
	
	img_ch[1]:pos(ch.x, ch.y)
	img_ch[1]:divdraw(ch.img)
end
