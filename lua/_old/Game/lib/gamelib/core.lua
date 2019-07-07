module("game", package.seeall)

-- ウィンドウ設定
ini = {title=lunasys.ver(), width=640, height=480, fps=60}

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


-- [[ インプット関連 ]]
function key(id) return dxlib_getkey(id) end
function anykey() return dxlib_getanykey() end
function mouse(id) return dxlib_getmouse(id) end
function mousepos() return dxlib_getmousepos() end
function mouselz() return dxlib_getmouselz() end


-- [[ フォント関連 ]]
function changefont(...)
	local arg = {nil, 18, 7, DX_FONTTYPE_NORMAL, 1, false}
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

-- 文字列を画面中央に表示
function drawstrcenter(y, str, ...)
	local arg = {rgb(255,255,255)}
	lunasys.defarg(arg, ...)
	drawstr((ini.width-getfontwidth(str))/2, y, str, arg[1])
end


-- [[ GameLibメイン ]] --
function open()
	dxlib_settitle(ini.title)
	dxlib_setsize(ini.width, ini.height)
	return dxlib_open() and font_:open()
end

function close()
	dxlib_close()
end

function proc()
	return dxlib_proc(ini.fps)
end

-- 異常終了
function assert(condition, ...)
	local arg = {"エラー発生"}
	lunasys.defarg(arg, ...)
	if not condition then
		msgbox(arg[1])
		close()
	end
end
