#include <wx/wx.h>
#include <functional>

using namespace std;

#define proc(func) \
int main(int argc, char **argv){\
	return func(argc, argv);\
}

int wxProcApp(int argc, char *argv[], function<int(int argc, char *argv[])> const &func){
	wxApp::SetInstance(new wxApp());
	wxEntryStart(argc, argv);
	int ret = func(argc, argv);
	wxTheApp->OnRun();
	wxTheApp->OnExit();
	wxEntryCleanup();
	return ret;
}

proc([](int argc, char *argv[])->int{
	return wxProcApp(argc, argv, [](int argc, char *argv[])->int{
		auto frame = new wxFrame(nullptr, wxID_ANY, L"関数型C++しようず", wxPoint(-1,-1), wxSize(400,300));
		frame->Show(true);
		return 0;
	});
})
