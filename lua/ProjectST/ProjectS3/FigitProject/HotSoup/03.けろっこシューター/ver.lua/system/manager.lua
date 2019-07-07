
IMG = {} 
SND = {} 


function registerImage(name, filename, colorKey)
	if IMG[name]   then unregisterImage(name) end 
	IMG[name] = sdl.Sprite(filename, colorKey)
 end 


function unregisterImage(name)
	if IMG[name]  then 
		IMG[name]:close()
		IMG[name] = nil
		collectgarbage("collect")
	 end 
 end 


function registerSound(name, filename, channel, volume)
	if  not channel   then channel = -1 end 
	if  not volume   then volume = 100 end 
	
	if SND[name]   then unregisterSound(name) end 
	local obj = sdl.newSound(filename)
	
	if obj:failed()   then error("効果音『"..filename.."』の読み込みに失敗") end 
	
	obj.m_filename, obj.m_channel = filename, channel
	obj.Sound_play = obj.play
	function obj:play(loops) return self:Spund_play(self.m_channel, loops and loops or 0) end 
	obj:setVolume(volume)
	
	SND[name] = obj
 end 


function unregisterSOund(name)
	if SND[name]  then 
		SND[name]:close()
		SND[name] = nil
		collectgarbage("collect")
	 end 
 end 
