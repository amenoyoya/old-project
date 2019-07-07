require "plugin.iup"
require "plugin.sundown"
require "libstd.StringAnalyzer.Macro"

IupOpen()

// �e��R���g���[���쐬
local web = IupWebBrowser()
local back = IupButton(("��")->UTF8toSJIS())
local forward = IupButton(("��")->UTF8toSJIS())
local txt = IupText("")
local load = IupButton("GO")
local reload = IupButton(("�X�V")->UTF8toSJIS())
local dlg = IupDialog(IupVbox(IupHbox(back, forward, txt, load, reload, nil), web, nil))
local mac = Macro()

// HTML & Markdown�p�}�N�����`
mac->defineCouple("html5", "/html", def(@, content){
	return"<!DOCTYPE HTML>\n<html lang=\"ja\">\n<head>\n"
		.."<meta charset=\"utf-8\">\n"
		.."<title>"..(@.title | "�p���S���N�G�X�g�U��").."</title>\n"
		..(@.header | "").."</head>\n<body>\n"..content.."\n"
		.."</body>\n</html>"
})
mac->define("bootstrap", def(@){
	return"<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n"
    	.."<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n"
		.."<link rel=\"stylesheet\" href=\""..(@.bootstrap_css | "./css/bootstrap.min.css").."\">\n"
		.."<link rel=\"stylesheet\" href=\""..(@.boostrap_theme_css | "./css/bootstrap-theme.min.css").."\">\n"
		.."<script src=\""..(@.jquery | "./js/jquery-1.11.1.min.js").."\"></script>\n"
		.."<script src=\""..(@.bootstrap_js | "./js/bootstrap.min.js").."\"></script>\n"
})
mac->defineCouple("markdown", "/markdown", def(@, content){
	return markdown(content, @.nest & tonumber(@.nest),
		@.html_option & loadstring("return "..@.html_option)(),
		@.mkd_option & loadstring("return "..@.mkd_option)())
})

// �e��R���g���[���ݒ�
setCurrentDir(getArgv(0))
IupSetAttr(dlg, "TITLE", ("�p���S���N�G�X�g�U��")->UTF8toSJIS())
IupSetAttr(dlg, "RASTERSIZE", "800x600")
IupSetAttr(dlg, "MARGIN", "5x5")
IupSetAttr(dlg, "GAP", "10")
IupSetHandle(dlg, "DEFAULTENTER", load)
IupSetAttr(txt, "EXPAND", "HORIZONTAL")

// index.txt��ǂݍ���
IupSetAttr(web, "VALUE", getCurrentDir()->str().."/index.txt")


// �C�x���g�o�^
IupSetCallback(back, "ACTION", def(@){
	IupSetAttr(web, "BACKFORWARD", "-1")
	return IUP_DEFAULT
})
IupSetCallback(forward, "ACTION", def(@){
	IupSetAttr(web, "BACKFORWARD", "1")
	return IUP_DEFAULT
})
IupSetCallback(load, "ACTION", def(@){
	IupSetAttr(web, "VALUE", IupGetAttr(txt, "VALUE"))
	return IUP_DEFAULT
})
IupSetCallback(reload, "ACTION", def(@){
	IupSetAttr(web, "RELOAD")
	return IUP_DEFAULT
})

IupSetCallback(web, "COMPLETED_CB", def(@, url){
	IupSetAttr(txt, "VALUE", url)
	return IUP_DEFAULT
})

IupSetCallback(web, "NAVIGATE_CB", def(@, url){
	url = ffi.string(url)->u8encode()
	local path = Path(url)
	
	if path->ext()->str() == ".txt" { // �}�N�����s
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
