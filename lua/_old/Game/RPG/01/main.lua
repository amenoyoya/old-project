require "statecase"

game.open()
while game.proc(60) and MainData.key(DIK_ESCAPE) == 0 do
	MainData.gamestate = GameStateCase[MainData.gamestate]()
	
	game.changefont(nil, 18)
	game.drawstr(0, 0, string.format("FPS:%02d", dxlib_getfps()),
		game.rgb(255,0,0))
end
game.close()
