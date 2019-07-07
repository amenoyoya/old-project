#include <wx/wx.h>

class MyFrame: public wxFrame{
public:
	MyFrame(): wxFrame(nullptr, wxID_ANY, "GaussianJob ver.2.1.0", wxPoint(-1, -1), wxSize(480,480)),
		timer(this)
	{
		CreateStatusBar();
		SetStatusText("Welcome to GaussianJob!");
	}
private:
	wxTimer timer;
	
	
	void OnDrop(wxCommandEvent& event){
	}
	
	wxDECLARE_EVENT_TABLE();
};
wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
	EVT_MENU(ID_Hello, MyFrame::OnHello)
	EVT_MENU(wxID_EXIT, MyFrame::OnExit)
	EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
wxEND_EVENT_TABLE()

/* ファイルドロップによるジョブ追加クラス */
class MyFileDropTarget: public wxFileDropTarget{
public:
	MyFileDropTarget(wxFrame *target): window(target), wxFileDropTarget() {}
	
	bool OnDropFiles(wxCoord x, wxCoord y, const wxArrayString &filenames){
		//ファイルをドロップするときの処理
		for file in filenames:
			stem, ext = os.path.splitext(os.path.basename(file))
			if ext.lower() == ".gjf": gauss.add(file)
			else: frame.SetStatusText("リストに追加できるのはGaussianインプットファイルのみです")
		return True
private:
	wxFrame *window;
};

## ジョブ追加ダイアログ
def addGaussianJob(event):
	dialog = wx.FileDialog(frame, "ジョブファイルを選択してください",
		"", "", "Gaussian input file (*.gjf)|*.gjf", wx.FD_OPEN|wx.FD_FILE_MUST_EXIST|wx.FD_MULTIPLE)
	if dialog.ShowModal() == wx.ID_OK:
		for path in dialog.GetPaths(): gauss.add(path)
	dialog.Destroy()

## ジョブ上移動
def upJob(event):
	selects = job_list.GetSelections()
	if len(selects) > 0: gauss.up(selects[0])

## ジョブ下移動
def downJob(event):
	selects = job_list.GetSelections()
	if len(selects) > 0: gauss.down(selects[0])

## main
if __name__ == '__main__':
	app = wx.App()
	app.locale = wx.Locale(wx.LANGUAGE_JAPANESE)
	
	gjf_list = []
	gauss = GaussianJobsThread()
	
	frame = wx.Frame(None, -1, "GaussianJob ver.2.0.0", size=(480, 480))
	timer = wx.Timer(frame)
	#frame.SetIcon(wx.Icon("icon.png", wx.BITMAP_TYPE_PNG))
	frame.SetIcon(wx.Icon(sys.argv[0], wx.BITMAP_TYPE_ICO))
	frame.CreateStatusBar()
	frame.SetStatusText("Welcome to GaussianJob!")
	frame.Bind(wx.EVT_TIMER, gauss.run)
	timer.Start(100)
	
	panel = wx.Panel(frame, -1)
	panel.SetBackgroundColour("#AFAFAF")
	
	buttons_panel = wx.Panel(panel, -1)
	buttons_panel.SetBackgroundColour("#AFAFAF")
	
	buttons = [
		wx.Button(buttons_panel, -1, "ジョブ追加", size=(100,30)),
		wx.Button(buttons_panel, -1, "ジョブ削除", size=(100,30)),
		wx.Button(buttons_panel, -1, "↑", size=(30,30)),
		wx.Button(buttons_panel, -1, "↓", size=(30,30)),
		wx.Button(buttons_panel, -1, "クリア", size=(60,30)),
		wx.Button(buttons_panel, -1, "実行", size=(50,30))
	]
	buttons[0].SetToolTip(wx.ToolTip("リストにGaussianジョブ(.gjf)を追加します"))
	buttons[0].Bind(wx.EVT_BUTTON, addGaussianJob) # ジョブ追加ボタン
	buttons[1].SetToolTip(wx.ToolTip("選択された未処理のGaussianジョブを削除します"))
	buttons[1].Bind(wx.EVT_BUTTON, lambda event: gauss.popList(job_list.GetSelections())) # ジョブ削除ボタン
	buttons[2].SetToolTip(wx.ToolTip("選択された未処理のGaussianジョブを上に移動します"))
	buttons[2].Bind(wx.EVT_BUTTON, upJob) # ジョブ上移動ボタン
	buttons[3].SetToolTip(wx.ToolTip("選択された未処理のGaussianジョブを下に移動します"))
	buttons[3].Bind(wx.EVT_BUTTON, downJob) # ジョブ下移動ボタン
	buttons[4].SetToolTip(wx.ToolTip("Gaussianジョブを全て削除します"))
	buttons[4].Bind(wx.EVT_BUTTON, lambda event: gauss.clear()) # クリアボタン
	buttons[5].SetToolTip(wx.ToolTip("Gaussianジョブの処理を開始します"))
	buttons[5].Bind(wx.EVT_BUTTON, lambda event: gauss.start()) # ジョブ開始ボタン
	
	buttons_layout = wx.BoxSizer(wx.HORIZONTAL)
	[buttons_layout.Add(btn, flag=wx.ALL, border=5) for btn in buttons]
	buttons_panel.SetSizer(buttons_layout)
	
	list_panel = wx.Panel(panel, -1)
	list_panel.SetBackgroundColour("#AFAFAF")
	list_box = wx.StaticBox(list_panel, -1, "Gaussianジョブリスト")
	job_list = wx.ListBox(list_panel, -1, style=wx.LB_EXTENDED|wx.LB_HSCROLL|wx.LB_NEEDED_SB)
	list_layout = wx.StaticBoxSizer(list_box, wx.VERTICAL)
	list_layout.Add(job_list, proportion=1, flag=wx.EXPAND|wx.ALL, border=5)
	list_panel.SetSizer(list_layout)
	
	frame.SetDropTarget(MyFileDropTarget(job_list)) # D&Dによるジョブ追加可能に
	
	layout = wx.BoxSizer(wx.VERTICAL)
	layout.Add(buttons_panel)
	layout.Add(list_panel, proportion=1, flag=wx.EXPAND|wx.ALL, border=5)
	panel.SetSizer(layout)
	
	frame.Show()
	app.MainLoop()
	gauss.close()

	class MyApp: public wxApp{
public:
	virtual bool OnInit(){
		MyFrame *frame = new MyFrame( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
		frame->Show( true );
		return true;
	}
};
wxIMPLEMENT_APP(MyApp);