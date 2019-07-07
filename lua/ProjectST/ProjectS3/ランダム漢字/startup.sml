def chr_create(){
	local div = mt_rand(16, 47)
	local pot = (div == 47 & mt_rand(1, 51) | mt_rand(1, 94))
	
	return string.char(div+0xA0, pot+0xA0)->u8encode(ENC_EUC)
}

def str_address(str){
	local c = tostring(ffi.cast("const char *", str))
	return tonumber(c->csub(c->cfind("0x.+")))
}


local seed = str_address"je toi les"
local str = ""

for i = 1, 9 {
	mt_srand(seed)
	local c = chr_create()
	str = str..c
	seed = str_address(c)
}

u8print(str)
os.execute"pause"
