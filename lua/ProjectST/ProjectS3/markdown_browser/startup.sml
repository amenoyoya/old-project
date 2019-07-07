require "plugin.iup"
require "plugin.sundown"
require "libstd.StringAnalyzer.Macro"

IupOpen()

local web = IupWebBrowser()
local back = IupButton(("←")->UTF8toSJIS())
local forward = IupButton(("→")->UTF8toSJIS())
local reload = IupButton(("更新")->UTF8toSJIS())
local dlg = IupDialog(IupVbox(IupHbox(back, forward, reload, nil), web, nil))
local mac = Macro()

setCurrentDir(getArgv(0))
IupSetAttr(dlg, "TITLE", "Markdown Browser")
IupSetAttr(dlg, "RASTERSIZE", "800x600")
IupSetAttr(dlg, "MARGIN", "5x5")
IupSetAttr(dlg, "GAP", "10")
IupSetAttr(web, "VALUE", getCurrentDir()->str().."/index.txt")

IupSetCallback(back, "ACTION", def(@){
	IupSetAttr(web, "BACKFORWARD", "-1")
	return IUP_DEFAULT
})
IupSetCallback(forward, "ACTION", def(@){
	IupSetAttr(web, "BACKFORWARD", "1")
	return IUP_DEFAULT
})
IupSetCallback(reload, "ACTION", def(@){
	IupSetAttr(web, "RELOAD")
	return IUP_DEFAULT
})

IupSetCallback(web, "NAVIGATE_CB", def(@, url){
	url = ffi.string(url)->u8encode()
	local path = Path(url)
	
	if path->ext()->str() == ".txt" { // マクロ実行
		local html = mac->convert(File->load(url)->u8encode())
		local filename = path->parent()->str().."\\"..path->stem()->str()..".html"
		
		File->write(filename, html)
		IupSetAttr(web, "VALUE", filename->UTF8toSJIS())
		return IUP_IGNORE
	}
	return IUP_DEFAULT
})

IupShow(dlg)
IupMainLoop()

IupClose()
