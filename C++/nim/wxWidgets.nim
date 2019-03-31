# 必要なライブラリをすべてリンク
{.passL: "-lwxmsw30u_adv -lwxmsw30u_aui -lwxmsw30u_core -lwxmsw30u_gl -lwxmsw30u_html -lwxmsw30u_media -lwxmsw30u_propgrid -lwxmsw30u_ribbon -lwxmsw30u_richtext -lwxmsw30u_stc -lwxmsw30u_webview -lwxmsw30u_xrc -lwxbase30u -lwxbase30u_net -lwxbase30u_xml -lwxexpat -lwxjpeg -lwxpng -lwxregexu -lwxscintilla -lwxtiff -lwxzlib -lole32 -loleaut32 -lcomctl32 -luuid -lwinspool -lgdi32 -lcomdlg32"}
{.passL: "-static-libgcc -static-libstdc++"} # 標準ライブラリ: static link
{.passL: "-mwindows"} # コンソール非表示

{.emit: """
#include <wx/wx.h>

void wxStartProgram(int &argc, char **argv){
    wxApp::SetInstance(new wxApp());
    wxEntryStart(argc, argv);
}

void wxMainLoop(){
    wxTheApp->OnRun();
    wxTheApp->OnExit();
    wxEntryCleanup();
}
""".}

proc wxStartProgram(argc: cint, argv: pointer): void {.nodecl, importc: "wxStartProgram".}
proc wxStartProgram() =
    var
        cmdLine {.importc: "cmdLine".}: array[0..255, cstring]
        cmdCount {.importc: "cmdCount".}: cint
    wxStartProgram(cmdCount, addr(cmdLine))

proc wxMainLoop(): void {.nodecl, importc: "wxMainLoop".}

type
    TwxString {.final, header: "<wx/string.h>", importc: "wxString".} = object
    
    TwxFrame {.final, header: "<wx/wx.h>", importc: "wxFrame".} = object
    PwxFrame = ptr TwxFrame

proc U(str: cstring): TwxString {.header: "<wx/string.h>", importc: "wxString::FromUTF8"}
proc wxFrame(parent: PwxFrame, id: int, title: TwxString): PwxFrame {.header: "<wx/wx.h>", importc: "new wxFrame".}
proc Show(frame: PwxFrame, mode: bool=true): void {.header: "<wx/wx.h>", importcpp: "Show".}

wxStartProgram()
var frame = wxFrame(nil, -1, U"これがnimによるwxWidgetsだ❤")
frame.Show()
wxMainLoop()
