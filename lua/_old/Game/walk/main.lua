ch_t = {
	x = 0, y = 0, img = 0, muki = 3, walking_flag = false,
	obj = DxImageArray(16),
	draw = function(self)
		if self.walking_flag then
			if self.muki == 0 then self.y = self.y - 1
			elseif self.muki == 1 then self.x = self.x - 1
			elseif self.muki == 2 then self.y = self.y + 1
			elseif self.muki == 3 then self.x = self.x + 1 end
		end
		self.img = (self.x%32+self.y%32)/8 + self.muki*4
		self.obj:at(self.img):draw(self.x, self.y)
	end
}

----- main -----
game.open()

ch = lunasys.copy(ch_t)
DxImage:divopen(ch.obj, "char.png", 4, 4, 32, 32)
ch.x, ch.y = 320, 160

while game.proc() do
	if ch.x % 32 == 0 and ch.y % 32 == 0 then
		-- À•W‚ª32‚ÅŠ„‚èØ‚ê‚½‚ç“ü—Í‰Â”\
		ch.walking_flag = true
		if game.key(DIK_UP) > 0 then ch.muki = 0
		elseif game.key(DIK_LEFT) > 0 then ch.muki = 1
		elseif game.key(DIK_DOWN) > 0 then ch.muki = 2
		elseif game.key(DIK_RIGHT) > 0 then ch.muki = 3
		else ch.walking_flag = false end
	end
	
	ch:draw()
	
	game.drawstr(0,0,dxlib_getfps(),game.rgb(255,0,0))
end
game.close()
