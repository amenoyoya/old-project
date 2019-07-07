require "serialize"

--local moonscript = require "moonscript.base"
local parse = require "moonscript.parse"
local compile = require "moonscript.compile"
--[[local passed, err = moonscript.loadfile("startup.lua", { implicitly_return_root = false })

if not passed then error(err) end
moonscript.insert_loader()
passed()
moonscript.remove_loader()]]

local f = io.open "startup.moon"
if not f then error "Can't find file" end

local tree, err = parse.string(f:read"*a")
if not tree then error(err) end

print(serialize(tree))
os.execute "pause"

local code, posmap_or_err, err_pos = compile.tree(tree)
if not code then error(compile.format_error(posmap_or_err, err_pos, text)) end

f = io.open("startup.lua", "w")
if not f then error "Failed to write output" end
f:write(code.."\n")
f:close()

--require "startup"
