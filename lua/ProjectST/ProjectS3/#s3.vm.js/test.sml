def require(filename){
	local data = tostring(js.global.Module.read(filename..'.sml'))
	assert(loadstring(data, filename..'.sml'))()
}

require "./util"

local canvas1 = document.getElementById('id_canvas1')
if !canvas1 | !canvas1.getContext {
	window.alert"本ページの閲覧はHTML5対応ブラウザで行ってください"
	return false
}

local ctx1 = canvas1.getContext('2d')

local canvas2 = document.getElementById('id_canvas2')
if !canvas2 | !canvas2.getContext {
	window.alert"本ページの閲覧はHTML5対応ブラウザで行ってください"
	return false
}

local ctx2 = canvas2.getContext('2d')
