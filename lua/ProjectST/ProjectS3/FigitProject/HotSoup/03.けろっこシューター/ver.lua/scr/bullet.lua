
local bullets = {} 
local rensha = 0 


local function searchBullet()
	local id = 0
	while bullets[id]   do id = id + 1 end 
	return id
 end 


function shot()
	if rensha == 0  then 
		local id = searchBullet()
		bullets[id] = {
			x = IMG.char.x + 24, y = IMG.char.y + 12
		}
		rensha = 20 
	 end 
 end 


function drawBullets()
	for index, bullet in pairs(bullets)  do 
		bullet.x = bullet.x + (12)
		sdl.fillRect(bullet.x, bullet.y, 12, 4, Color(0,255,255))
		if bullet.x > 474   then bullets[index] = nil  end 
	 end 
	if rensha > 0   then rensha = rensha - 1 end 
 end 
