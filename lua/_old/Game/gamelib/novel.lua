require("core")

module("game.novel", package.seeall)

----- ノベルエンジンメンバ -----
local area_ = {x, y, w, h = 0, 0, 0, 0} -- 表示領域
local layer_ = DxImage() -- テキストレイヤー
local font_ = DxFont()
local color_ = 0 -- 文字色
local text_ = "" -- 表示テキスト
local cur_ = 1 -- テキストポインタ
local flag_run_, flag_end_ = true, false -- エンジン実行フラグ
local timer_ = Timer() -- 一文字ずつ表示するためのタイマー
local wait_ = 20 -- 一文字表示の遅延時間[ms]
local textinfo_ = {} -- 文字表示位置等保存テーブル


----- 各種設定 -----
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

-- 改行
local function br(pos)
	pos.y = pos.y + font_:size()*5/4
	pos.x = 0
end

-- 文字列解析
local function analyze()
	local pos = {x=0, y=0} -- 文字表示位置
	local i, n = 1, 1
	
	textinfo_ = {}
	while i <= text_:len() do
		local buf = ""
		local width = 0
		
		-- 特殊文字処理
		if text_:sub(i, i) == ";" then br(pos) end
		
		-- 通常文字処理
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

-- 開始・終了
function start() flag_run_ = true; timer_:start() end
function stop() flag_run_ = false end

-- 一括設定
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


-- テキストエンジン実行
-- 使用レイヤー8
function run()
	game.target(game.layer(8):handle())
	layer_:draw(area_.x, area_.y)
	
	if flag_run_ then
		if cur_ > table.maxn(textinfo_) then
			flag_run_, flag_end_ = false, true
			return
		end
		
		-- 一気に表示
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

-- エンジンが終了したか？
function isend()
	return flag_end_
end
