module("lunasys", package.seeall)

null = "\v"

-- version
function ver()
	return "lunasys - version. 0.9.5"
end

-- �f�t�H���g��������
-- arg: �f�t�H���g����
function defarg(arg, ...)
	local n = {...}
	
	for i = 1, table.maxn(arg) do
		if n[i] ~= nil then arg[i] = n[i] end
	end
end

-- �N���X�p��
-- parentClass��new������K�v������
-- childClass��new�ɂ��̊֐����w�肷��
function extend(childClass, parentClass)
	local extends = parentClass.new()
	setmetatable(childClass, {__index=extends})
end

-- �t�@�C���R���p�C��
function compile(srcfile, destfile)
	local bin = assert(loadfile(srcfile))
	local fp = assert(io.open(destfile, "wb"))
	
	fp:write(string.dump(bin))
	io.close(fp)
end

-- �e�[�u���R�s�[
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

-- �ߎ�
function near(i, n, ...)
	local arg = {0.2}
	defarg(arg, ...)
	return i >= n-arg[1] and i <= n+arg[1]
end

-- �񋓑̍쐬
function enum(t, ...)
	local arg = {1}
	defarg(arg, ...)
	
	local obj = {}
	local i = arg[1]
	for k, v in pairs(t) do obj[v] = i end
end

----- �R���[�`���Ǘ��N���X -----
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

-- �֐����R���[�`���ɓo�^
function scheduler:insert(func, arg)
	local index = self.size_ + 1
	local id = self.serial_id_
	if self.size_ >= #self.coroutines_ then
		-- �R���[�`���̐V�K�쐬
		self.coroutines_[index] = {
			func_ = func,
			arg_ = arg,
			co_ = nil,
			id_ = id,
			wakeup_ticks_ = false
		}
		-- �e�[�u�����L�����Ă���\��������̂�
		-- self_function �́A�����Ő錾����
		local self_function = self.coroutines_[index]
		self_function.co_ =
			coroutine.create(function()
				while true do
					self_function.func_(self_function.arg_)
					coroutine.yield(nil)
				end
			end)
	else
		-- �R���[�`���̍ė��p
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

-- �R���[�`�����s��ҋ@������
function scheduler:wait(msec)
	coroutine.yield(msec)
end

-- �R���[�`�����s�𒆒f���ď�����߂�
function scheduler:yield()
	coroutine.yield(true)
end

-- �X�P�W���[���̎��s
function scheduler:exec()
	local terminated_id = {}
	
	for i = 1, self.size_ do
		local self_function = self.coroutines_[i]
		if self_function.id_ >= 0 then
			-- ���̎��s���ԂɂȂ��Ă��Ȃ���΁A�������Ȃ�
			local wakeup_ticks = self_function.wakeup_ticks_
			if (wakeup_ticks == false) or (getTicks() >= wakeup_ticks) then
				self_function.wakeup_ticks_ = false
				-- �o�^����Ă���֐��̎��s
				local ret, alive = coroutine.resume(self_function.co_,
										self_function.arg_)
				if ret == false then
					-- �G���[���b�Z�[�W�̏o��
					-- !!! �t�@�C���A�s�ԍ��Ȃǂ��\��������
					print(alive)
				end
				if alive == nil then
					self.id_table_[self_function.id_] = nil
					self_function.id_ = -1
					-- �I�������R���[�`���� index ���L�^���Ă����A�Ō�ɍ폜����
					table.insert(terminated_id, i)
				elseif type(alive) == 'number' then
					-- ���̋N�����Ԃ�o�^
					self_function.wakeup_ticks_ = gettick() + alive
				end
			end
		end
	end
	-- �I�������R���[�`���𖖔��̃R���[�`���Ɠ���ւ�
	for key, value in pairs(terminated_id) do
		self.coroutines_[value], self.coroutines_[self.size_] =
			self.coroutines_[self.size_], self.coroutines_[value]
		self.size_ = self.size_ - 1
	end
	return self.size_
end

-- �w�肵�� ID �̃R���[�`�����L������Ԃ�
function scheduler:active(id)
	if self.id_table_[id] == nil then
		return false
	else
		return true
	end
end
