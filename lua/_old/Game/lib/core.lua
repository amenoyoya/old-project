module("lunasys", package.seeall)

null = "\v"

-- version
function ver()
	return "lunasys - version. 0.9.5"
end

-- デフォルト引数生成
-- arg: デフォルト引数
function defarg(arg, ...)
	local n = {...}
	
	for i = 1, table.maxn(arg) do
		if n[i] ~= nil then arg[i] = n[i] end
	end
end

-- クラス継承
-- parentClassにnewがある必要がある
-- childClassのnewにこの関数を指定する
function extend(childClass, parentClass)
	local extends = parentClass.new()
	setmetatable(childClass, {__index=extends})
end

-- ファイルコンパイル
function compile(srcfile, destfile)
	local bin = assert(loadfile(srcfile))
	local fp = assert(io.open(destfile, "wb"))
	
	fp:write(string.dump(bin))
	io.close(fp)
end

-- テーブルコピー
function copy(t)
	local new = {}
	for key, val in pairs(t) do
		if type(val) == "table" then
			new[key] = copy(val)
		else
			new[key] = val
		end
	end
	return new
end

-- 近似
function near(i, n, ...)
	local arg = {0.2}
	defarg(arg, ...)
	return i >= n-arg[1] and i <= n+arg[1]
end

-- 列挙体作成
function enum(t, ...)
	local arg = {1}
	defarg(arg, ...)
	
	local obj = {}
	local i = arg[1]
	for k, v in pairs(t) do obj[v] = i end
end

----- コルーチン管理クラス -----
scheduler = {}

function scheduler:new()
	local members = {
		coroutines_ = {},
		size_ = 0,
		serial_id_ = 1,
		id_table_ = {}
	}
	scheduler.__index = scheduler
	setmetatable(members, scheduler)
	return members
end

-- 関数をコルーチンに登録
function scheduler:insert(func, arg)
	local index = self.size_ + 1
	local id = self.serial_id_
	if self.size_ >= #self.coroutines_ then
		-- コルーチンの新規作成
		self.coroutines_[index] = {
			func_ = func,
			arg_ = arg,
			co_ = nil,
			id_ = id,
			wakeup_ticks_ = false
		}
		-- テーブルが伸張している可能性があるので
		-- self_function は、ここで宣言する
		local self_function = self.coroutines_[index]
		self_function.co_ =
			coroutine.create(function()
				while true do
					self_function.func_(self_function.arg_)
					coroutine.yield(nil)
				end
			end)
	else
		-- コルーチンの再利用
		local self_function = self.coroutines_[index]
		self_function.func_ = func
		self_function.arg_ = arg
		self_function.id_ = id
		self_function.wakeup_ticks_ = false
	end
	self.id_table_[id] = index
	self.serial_id_ = self.serial_id_ + 1
	self.size_ = index
	return id
end

-- コルーチン実行を待機させる
function scheduler:wait(msec)
	coroutine.yield(msec)
end

-- コルーチン実行を中断して処理を戻す
function scheduler:yield()
	coroutine.yield(true)
end

-- スケジューラの実行
function scheduler:exec()
	local terminated_id = {}
	
	for i = 1, self.size_ do
		local self_function = self.coroutines_[i]
		if self_function.id_ >= 0 then
			-- 次の実行時間になっていなければ、処理しない
			local wakeup_ticks = self_function.wakeup_ticks_
			if (wakeup_ticks == false) or (getTicks() >= wakeup_ticks) then
				self_function.wakeup_ticks_ = false
				-- 登録されている関数の実行
				local ret, alive = coroutine.resume(self_function.co_,
										self_function.arg_)
				if ret == false then
					-- エラーメッセージの出力
					-- !!! ファイル、行番号なども表示させる
					print(alive)
				end
				if alive == nil then
					self.id_table_[self_function.id_] = nil
					self_function.id_ = -1
					-- 終了したコルーチンの index を記録しておき、最後に削除する
					table.insert(terminated_id, i)
				elseif type(alive) == 'number' then
					-- 次の起床時間を登録
					self_function.wakeup_ticks_ = gettick() + alive
				end
			end
		end
	end
	-- 終了したコルーチンを末尾のコルーチンと入れ替え
	for key, value in pairs(terminated_id) do
		self.coroutines_[value], self.coroutines_[self.size_] =
			self.coroutines_[self.size_], self.coroutines_[value]
		self.size_ = self.size_ - 1
	end
	return self.size_
end

-- 指定した ID のコルーチンが有効かを返す
function scheduler:active(id)
	if self.id_table_[id] == nil then
		return false
	else
		return true
	end
end
