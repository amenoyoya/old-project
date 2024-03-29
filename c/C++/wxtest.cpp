// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

enum{
	ID_Hello = 1
};

class MyFrame: public wxFrame{
public:
	MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(NULL, wxID_ANY, title, pos, size) {
		wxMenu *menuFile = new wxMenu;
		menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
		"Help string shown in status bar for this menu item");
		menuFile->AppendSeparator();
		menuFile->Append(wxID_EXIT);
		wxMenu *menuHelp = new wxMenu;
		menuHelp->Append(wxID_ABOUT);
		wxMenuBar *menuBar = new wxMenuBar;
		menuBar->Append( menuFile, "&File" );
		menuBar->Append( menuHelp, "&Help" );
		SetMenuBar( menuBar );
		CreateStatusBar();
		SetStatusText( "Welcome to wxWidgets!" );
	}
private:
	void OnHello(wxCommandEvent& event){
		wxMessageBox( "This is a wxWidgets' Hello world sample",
			"About Hello World", wxOK | wxICON_INFORMATION );
	}
	
	void OnExit(wxCommandEvent& event){
		Close(true);
	}
	
	void OnAbout(wxCommandEvent& event){
		wxLogMessage("Hello world from wxWidgets!");
	}
	
	wxDECLARE_EVENT_TABLE();
};


class MyApp: public wxApp{
public:
	virtual bool OnInit(){
		MyFrame *frame = new MyFrame( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
		frame->Show( true );
		return true;
	}
};

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
	EVT_MENU(ID_Hello, MyFrame::OnHello)
	EVT_MENU(wxID_EXIT, MyFrame::OnExit)
	EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MyApp);
