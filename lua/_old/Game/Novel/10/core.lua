win = Window("‘‹1†")
win:setstyle(WS_GAMEWINDOW)
win:open("‚½‚¢‚Æ‚é")

layer = Layer()
layer:open(win:layer():handle(), 640, 480)
layer:setfont(20, 600, "‚l‚r –¾’©")

input = DirectInput(win:handle())

function procgame(func)
	while win:run() and input:get() and layer:flip() and layer:clear() do
		if not func() then break end
	end
	
	win:close()
end
