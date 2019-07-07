/*** モンテカルロ法による円周率計算 ***/
require "libstd.ext"

local n_trial = 1000000
local hit = 0
local x, y = 0, 0
local timer = Timer()
for i = 1, n_trial {
	x, y = mt_rand()/2^32, mt_rand()/2^32
	if y < math.sqrt(1 - x^2) { hit += 1 }
}
u8printf("%12.9f\n", 4.0*hit/n_trial)
u8print("経過時間："..timer->passage().."ミリ秒")
os.execute"pause"
