require("core")

module("game.novel", package.seeall)

----- �m�x���G���W�������o -----
local area_ = {x, y, w, h = 0, 0, 0, 0} -- �\���̈�
local layer_ = DxImage() -- �e�L�X�g���C���[
local font_ = DxFont()
local color_ = 0 -- �����F
local text_ = "" -- �\���e�L�X�g
local cur_ = 1 -- �e�L�X�g�|�C���^
local flag_run_, flag_end_ = true, false -- �G���W�����s�t���O
local timer_ = Timer() -- �ꕶ�����\�����邽�߂̃^�C�}�[
local wait_ = 20 -- �ꕶ���\���̒x������[ms]
local textinfo_ = {} -- �����\���ʒu���ۑ��e�[�u��


----- �e��ݒ� -----
function setarea(x, y, w, h)
	area_.x, area_.y, area_.w, area_.h = x, y, w, h
	return layer_:open(w, h)
end

function setfont(...)
	local arg = {nil, 18, 7, DX_FONTTYPE_ANTIALIASING_EDGE, 2, false}
	lunasys.defarg(arg, ...)
	return font_:open(arg[1], arg[2], arg[3], arg[4], arg[5], arg[6])
end

function setcolor(color) color_ = color end
function setwait(wait) wait_ = wait end

-- ���s
local function br(pos)
	pos.y = pos.y + font_:size()*5/4
	pos.x = 0
end

-- ��������
local function analyze()
	local pos = {x=0, y=0} -- �����\���ʒu
	local i, n = 1, 1
	
	textinfo_ = {}
	while i <= text_:len() do
		local buf = ""
		local width = 0
		
		-- ���ꕶ������
		if text_:sub(i, i) == ";" then br(pos) end
		
		-- �ʏ핶������
		if iszenkaku(text_:sub(i)) then
			buf = text_:sub(i, i+1)
			width = font_:width(buf)
			if pos.x + width > area_.w then br(pos) end
			i = i + 2
		else
			buf = text_:sub(i, i)
			width = font_:width(buf)
			if pos.x + width > area_.w then br(pos) end
			i = i + 1
		end
		textinfo_[n] = {c=buf, x=pos.x, y=pos.y, f=true}
		if i == text_:len() then textinfo_[i].f=false end
		n = n + 1
		pos.x = pos.x + width
	end
end

function settext(text)
	text_ = text
	cur_ = 1
	flag_end = false
	analyze()
end

-- �J�n�E�I��
function start() flag_run_ = true; timer_:start() end
function stop() flag_run_ = false end

-- �ꊇ�ݒ�
function open(x, y, w, h, text, ...)
	local arg = {game.rgb(255,255,255), 40}
	lunasys.defarg(arg, ...)
	if not setarea(x, y, w, h) or not setfont() then return false end
	setcolor(arg[1])
	setwait(arg[2])
	settext(text)
	start()
	return true
end


-- �e�L�X�g�G���W�����s
-- �g�p���C���[8
function run()
	game.target(game.layer(8):handle())
	layer_:draw(area_.x, area_.y)
	
	if flag_run_ then
		if cur_ > table.maxn(textinfo_) then
			flag_run_, flag_end_ = false, true
			return
		end
		
		-- ��C�ɕ\��
		if game.key(DIK_RETURN) == 1 then
			game.target(layer_:handle())
			while cur_ <= table.maxn(textinfo_) do
				if not textinfo_[cur_].f then break end
				font_:draw(textinfo_[cur_].x, textinfo_[cur_].y, textinfo_[cur_].c)
				cur_ = cur_ + 1
			end
			
			if cur_ > table.maxn(textinfo_) then
				flag_run_, flag_end_ = false, true
				return
			end
		end
		
		if not timer_:check(wait_) then return end
		game.target(layer_:handle())
		font_:draw(textinfo_[cur_].x, textinfo_[cur_].y, textinfo_[cur_].c)
		cur_ = cur_ + 1
		timer_:start()
	end
end

-- �G���W�����I���������H
function isend()
	return flag_end_
end
