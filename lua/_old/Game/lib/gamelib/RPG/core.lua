inclua("../core.lua")

module("game.RPG", package.seeall)

----- private -----
local mapchip_size = 32

----- public -----
-- open
-- 0->320:240, 1->640:480
function open(...)
	local arg = {1, 60}
	lunasys.defarg(arg, ...)
	
	if arg[1] == 0 then
		game.ini.width, game.ini.height = 320, 240
		mapchip_size = 16
	elseif arg[1] == 1 then
		game.ini.width, game.ini.height = 640, 480
		mapchip_size = 32
	else
		error("game.RPG.openに未知のスクリーンモードが渡されました")
	end
	game.ini.fps = arg[2]
	return game.open()
end

-- close
function close()
	game.close()
end

-- proc
function proc()
	return game.proc()
end
