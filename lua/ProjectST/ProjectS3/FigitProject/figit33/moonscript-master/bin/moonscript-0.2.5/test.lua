local x
local Bucket
do
  local _base_0 = {
    drops = 0,
    add_drop = function(self)
      self.drops = self.drops + 1
    end
  }
  _base_0.__index = _base_0
  local _class_0 = setmetatable({
    __init = function() end,
    __base = _base_0,
    __name = "Bucket"
  }, {
    __index = _base_0,
    __call = function(cls, ...)
      local _self_0 = setmetatable({}, _base_0)
      cls.__init(_self_0, ...)
      return _self_0
    end
  })
  _base_0.__class = _class_0
  Bucket = _class_0
  x = _class_0
end
