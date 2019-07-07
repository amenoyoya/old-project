local timer = figit.Timer()

require("lib/game")
require "system/manager"

function config(t) end  
function initialize() end  

require "scr/main" 

msgbox("figit convert time: "..timer:passage().." msec")

local __myApp = (function ()local self = sdl.GUIApplication();
	function self:config(t)
		config(t)
	 end 
	
	function self:main()
		initialize()
	 end 
; if self.__init__  then self:__init__() end ; return self end )():run()
