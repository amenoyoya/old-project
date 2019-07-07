--[[ テーブルシリアライズ ]]--
function table_find(target, tbl)
	for k, v in pairs(tbl) do if target == v then return k end end
	return nil
end

function value2str(v, all)
	local vt = type(v)
	
	if vt=="nil" then return "nil" end
	if vt=="number" then return string.format("%d",v) end
	if vt=="string" then return string.format("[=[%s]=]",v) end
	if vt=="boolean" then
		if v==true then return "true"
		else return "false" end
	end
	if vt=="function" then return all and '"*function"' or nil end
	if vt=="thread" then return all and '"*thread"' or nil end
	if vt=="userdata" then return all and '"*userdata"' or nil end
	return nil --'"UnsupportFormat"'
end

function field2str(v)
	local vt = type(v)
	
	if vt=="number" then return string.format("[%d]",v) end
	if vt=="string" then return string.format("%s",v) end
	return 'UnknownField'
end

-- disable: シリアライズしないキーをテーブルで指定
-- all: true->関数やユーザーデータを全て出力、 false->数値や文字列のみ出力
function serialize(t, disable, all)
	local f,v,buf
	
	-- テーブルじゃない場合
	if type(t) ~= "table" then return value2str(t) end
	
	buf = ""
	f,v = next(t, nil)
	while f do
		-- シリアライズの対象か判定
		if type(disable) ~= "table" or nil == table_find(f, disable) then
			-- 値
			if type(v)=="table" then
				-- ,を付加する
				if buf ~= "" then buf = buf .. "," end
				buf = buf .. field2str(f) .. "=" .. serialize(v)
			else
				local value = value2str(v, all)
				if value then
					-- ,を付加する
					if buf ~= "" then buf = buf .. "," end
					buf = buf .. field2str(f) .. "=" .. value
				end
			end
		end
		-- 次の要素
		f, v = next(t, f)
	end
	buf = "{" .. buf .. "}"
	return buf
end
