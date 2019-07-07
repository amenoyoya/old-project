inclua("DB.lua")

module("game", package.seeall)

local layer_ = {}
local font_ = DxFont()

-- カラー
function rgb(r, g, b) return dxlib_getcolor(r, g, b) end

-- ターゲットレイヤーセット
function target(...)
	local t = {...}
	return dxlib_setdrawscreen(t[1]==nil and DX_SCREEN_BACK or t[1])
end

-- レイヤークリア
function clear(handle)
	target(handle)
	dxlib_cleardrawscreen()
end

-- レイヤー取得
function layer(i) return layer_[i] end

-- [[ インプット関連 ]]
function key(id) return dxlib_getkey(id) end
function mouse(id) return dxlib_getmouse(id) end
function mousepos() return dxlib_getmousepos() end
function mouselz() return dxlib_getmouselz() end


-- [[ フォント関連 ]]
function changefont(...)
	local arg = {nil, 18, 7, DX_FONTTYPE_ANTIALIASING_EDGE, 2, false}
	lunasys.defarg(arg, ...)
	return font_:open(arg[1], arg[2], arg[3], arg[4], arg[5], arg[6])
end

function drawstr(x, y, str, ...)
	local arg = {rgb(255,255,255)}
	lunasys.defarg(arg, ...)
	return font_:draw(x, y, str, arg[1])
end

function drawstr3d(x, y, str, ...)
	local arg = {rgb(255,255,255), rgb(50,50,50)}
	lunasys.defarg(arg, ...)
	return font_:draw3d(x, y, str, arg[1], arg[2])
end

function getfontsize()
	return font_:size()
end

function getfontwidth(str)
	return font_:width(str)
end


function proc(fps)
	for i = 1, 9 do
		target()
		layer_[i]:draw(0, 0)
		clear(layer_[i]:handle())
	end
	return dxlib_proc(fps)
end

-- ゲーム開始
function start(init, main)
	dxlib_settitle(ini.title)
	dxlib_setsize(ini.width, ini.height)
	dxlib_open()
	for i = 1, 9 do
		layer_[i] = DxImage(ini.width, ini.height)
	end
	font_:open()
	
	init()
	while proc(60) do
		main()
		for key, val in pairs(actor) do
			val()
		end
	end
	dxlib_close()
end


----- 選択肢 -----
local select_id = 1
local select_alpha = 240
local select_proc_id = 1
local select_proc = {
	(function()
		if select_alpha > 100 then select_alpha = select_alpha-2
		else select_proc_id = 2
		end
	end), (function()
		if select_alpha < 240 then select_alpha = select_alpha+2
		else select_proc_id = 1
		end
	end)
}

local function mouse_inrect(left, top, right, bottom)
	if mousepos().x >= left and mousepos().y >= top
		and mousepos().x <= right and mousepos().y <= bottom
	then
		return true
	end
	return false
end

-- 選択肢表示
local function drawselect(x, y, questions)
	local _y = y
	
	if key(DIK_DOWN) == 1 then
		select_id = select_id + 1
		if select_id > table.maxn(questions) then select_id = 1 end
		select_proc_id = 1
		select_alpha = 240
	end
	if key(DIK_UP) == 1 then
		select_id = select_id - 1
		if select_id < 1 then select_id = table.maxn(questions) end
		select_proc_id = 1
		select_alpha = 240
	end
	if key(DIK_RETURN) == 1 or mouse(0) == 1 then
		return select_id
	end
	
	for i=1, table.maxn(questions) do
		local h = getfontsize()
		local w = getfontwidth(questions[i])
		
		if mouse_inrect(x-2, _y-2, x+w+2, _y+h+5) then
			select_id = i
		end
		
		if select_id == i then
			select_proc[select_proc_id]()
			dxlib_setblendmode(DX_BLENDMODE_ALPHA, select_alpha)
			dxlib_drawbox(x-2, _y-2, x+w+2, _y+h+5, rgb(50,250,250))
			dxlib_setblendmode()
		end
		drawstr(x, _y, questions[i])
		_y = _y + h + 10
	end
	return -1
end

-- 選択肢設定クリア
local function select_init()
	selected_id = -1
	select_id = 1
	select_alpha = 240
	select_proc_id = 1
end

-- 実際に使う選択肢関数
function select(questions)
	local sch = lunasys.scheduler:new()
	
	sch:insert(function()
		select_init()
		lunasys.scheduler:yield()
	end)
	sch:insert(function()
		target(layer(8):handle())
		while selected_id == -1 do
			selected_id = drawselect(select_pos.x, select_pos.y, questions)
			lunasys.scheduler:yield()
		end
	end)
end
