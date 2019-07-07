/*** 効果音・BGM管理 ***/
sdl.MIX = ${} // 効果音配列
local MIX_size = 0 // 効果音配列サイズ
local MIX_playingChannels = ${} // 再生中チャンネル(loops=-1で再生されたチャンネル)
local MIX_playingChannelsNum = 0

/** 効果音・BGM登録 **/
// id: 文字列指定。登録したオブジェクトはsdl.MIX[id]でアクセス可能
// ※再生はsdl.MIX_play(id, channel, loops=0, fadeInTime=nil)を使用
def sdl.MIX_append(id, filename){
	local obj = sdl.Mixer(Path(filename))
	
	if obj->failed(){
		error("[sdl.MIX_append] 効果音ファイル'"..filename.."'の読み込みに失敗")
	}
	id = tostring(id)
	sdl.MIX_erase(id)
	obj.m_filename = filename // ファイル名保持
	sdl.MIX[id] = obj; MIX_size += 1
	return obj
}

/** 効果音・BGM削除 **/
def sdl.MIX_erase(id){
	local obj = sdl.MIX[id]
	
	if obj{
		for k, v in pairs(MIX_playingChannels){ // 再生中チャンネル削除
			if v == id{MIX_playingChannels[k] = nil; MIX_playingChannelsNum -= 1}
		}
		obj->close()
		sdl.MIX[id] = nil; MIX_size -= 1
		collectgarbage "collect"
	}
}

/** 再生 **/
def sdl.MIX_play(id, channel, loops, fadeInTime){
	local obj = sdl.MIX[id]
	if !obj{return false}
	
	if !loops{loops = 0}
	elif loops == -1{ // 再生中チャンネル保持
		MIX_playingChannels[channel] = id
		MIX_playingChannelsNum += 1
	}
	
	if type(fadeInTime) == "number"{return obj->fadeIn(channel, loops, fadeInTime)}
	return obj->play(channel, loops)
}

/** 再生中チャンネルを停止する **/
def sdl.MIX_stop(channel, fadeOutTime){
	if MIX_playingChannels[channel]{ // loops=-1のチャンネルならば削除
		MIX_playingChannels[channel] = nil
		MIX_playingChannelsNum -= 1
	}elif channel == -1{ // 全チャンネル停止の場合
		MIX_playingChannels = ${}
		MIX_playingChannelsNum = 0
	}
	if type(fadeOutTime) == "number"{sdl.Sound->fadeOut(channel, fadeOutTime)}
	else{sdl.Sound->stop(channel)}
}


/*** 登録BGM,SOUND状態保存 ***/
// 戻り値: Binary
def sdl.MIX_pack(){
	local bin = Binary()
	
	bin->reserve(MIX_size*32 + MIX_playingChannelsNum*16)
	// Mixerセーブ
	bin->pushVal(MIX_size) // ロードした効果音・BGMの数
	for id, obj in pairs(sdl.MIX){
		bin->pushStrData(id); bin->pushStrData(obj.m_filename)
	}
	bin->pushVal(MIX_playingChannelsNum) // 再生中チャンネル数
	for channel, id in pairs(MIX_playingChannels){
		bin->pushStrData(id); bin->pushVal(channel)
	}
	return bin
}


/*** 登録BGM,SOUND状態復元 ***/
// bin: MIX_packで生成したBinaryオブジェクト
def sdl.MIX_unpack(bin){
	// Mixer復元
	local num = bin->getU32()
	for i = 1, num{sdl.MIX_append(bin->getStrData(), bin->getStrData())}
	num = bin->getU32()
	for i = 1, num{sdl.MIX_play(bin->getStrData(), bin->getS32(), -1)}
}
