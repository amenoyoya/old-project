require "mainfunc"

game.open()
while game.proc() and MainData.key(DIK_ESCAPE) == 0 do
	MainData.gamestate = MainStateCase[MainData.gamestate]()
	
	game.changefont(nil, 18)
	game.drawstr(0, 0, string.format("FPS:%03d", dxlib_getfps()),
		game.rgb(255,0,0))
end
game.close()
