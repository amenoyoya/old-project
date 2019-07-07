require "textengine"

textmsg = File:read("scenario.txt")

procgame(function()
	if input:key(DIK_ESCAPE) == 1 then return false end
	
	run_textengine()
	
	layer:textout3d(535, 455, HGDI:rgb(200,0,100), shadow_color,
		string.format("FPS: %03d", win:fps()))
	return true
end)
