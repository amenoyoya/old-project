require "scr/bullet"



function config(t)
	t.width, t.height, t.title = 480, 320, "けろっこシューター"
 end 

function initialize()
	registerImage("char", "dat/flogs.bmp", Color(0,0,0))
	registerImage("back", "dat/back2.bmp")
 end 

sdl.App.routine:append(0, function()
	while true  do 
		IMG.back:draw() 
		
		if sdl.getInput"left" > 0  then IMG.char.x = IMG.char.x - (8) end if IMG.char.x < 0  then IMG.char.x = 0 end 
		if sdl.getInput"right" > 0  then IMG.char.x = IMG.char.x + (8) end if IMG.char.x > 448  then IMG.char.x = 448 end 
		if sdl.getInput"up" > 0  then IMG.char.y = IMG.char.y - (8) end if IMG.char.y < 0  then IMG.char.y = 0 end 
		if sdl.getInput"down" > 0  then IMG.char.y = IMG.char.y + (8) end if IMG.char.y > 288  then IMG.char.y = 288 end 
		
		if sdl.getInput"ok" > 0   then shot() end 
		IMG.char:setSource(0, 0, 32, 32); IMG.char:draw() 
		drawBullets() 
		sdl.App:update()
	 end 
end)
