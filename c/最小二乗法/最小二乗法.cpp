#define __WindowMode__
#include "#windowsx.hpp"

inline double sub_f(const vectorx<double> &array_f){
	double buf=0;
	for(int i=0;i<array_f.size();++i) buf+=array_f[i];
	return buf;
}

void OutputCalclation(const HDC &hdc,const vectorx<double> &x,
	const vectorx<double> &y,const int &num)
{
	double subx=sub_f(x),suby=sub_f(y);
	vectorx<double> x2,xy;
	for(int i=0;i<num;++i) xy.push_back(x[i]*y[i]);
	for(int i=0;i<num;++i) x2.push_back(x[i]*x[i]);
	double subx2=sub_f(x2),subxy=sub_f(xy);
	double a=(num*subxy-subx*suby)/(num*subx2-subx*subx);
	double b=(subx2*suby-subx*subxy)/(num*subx2-subx*subx);
	
	slib::StrOut(hdc,slib::Point(10,10),_S("Σx=")+subx);
	slib::StrOut(hdc,slib::Point(100,10),_S("Σy=")+suby);
	slib::StrOut(hdc,slib::Point(10,40),_S("Σxx=")+subx2);
	slib::StrOut(hdc,slib::Point(100,40),_S("Σxy=")+subxy);
	slib::StrOut(hdc,slib::Point(15,70),_S("n=")+num);
	slib::StrOut(hdc,slib::Point(50,130),"a=(nΣxy-ΣxΣy)/(nΣxx-ΣxΣx)");
	slib::StrOut(hdc,slib::Point(50,160),"b=(ΣxxΣy-ΣxΣxy)/(nΣxx-ΣxΣx)");
	if(b>0) slib::StrOut(hdc,slib::Point(10,230),_S("y=")+a+"x+"+b);
	else if(b<0) slib::StrOut(hdc,slib::Point(10,230),_S("y=")+a+"x"+b);
	else slib::StrOut(hdc,slib::Point(10,230),_S("y=")+a+"x");
}

LRESULT CALLBACK WndProc(_ProcArgs){
	static slib::Edit edit;
	static slib::Button button;
	static bool paint=false;
	static vectorx<double> x,y;
	static int num=0;
	_Event(CREATE){
		if(_Argc()>1){
			fstreamx fs;
			if(!fs.open(_Argv(1))) goto create;
			while(!fs.eof()){
				x.push_back(0); y.push_back(0);
				fs>>x[num]; fs>>y[num];
				++num;
			}--num;
			button.exStyle=WS_EX_CLIENTEDGE;
			button.Create(123,"終了",hwnd,slib::Bounds(530,440,100,30));
			paint=true;
			SendMessage(hwnd,WM_PAINT,0,0);
		}else{
			create:
			
			edit.style=ES_NOTEPAD;
			edit.exStyle=WS_EX_CLIENTEDGE;
			edit.Create(40,"[x成分][空白][y成分][改行]",hwnd,
				slib::Bounds(10,10,620,430));
			
			button.exStyle=WS_EX_CLIENTEDGE;
			button.Create(99,"計算",hwnd,slib::Bounds(530,440,100,30));
		}
	}
	_Event(COMMAND){
		if(COMMAND_ID==40){
			static bool second=false;
			if(!second){
				second=true;
				SetWindowText(edit,"");
			}
		}
		if(COMMAND_ID==99){
			stringx str=slib::GetWindowText(edit);
			for(int i=0;i<str.size();++i) if(str[i]=='\n') ++num;
			x.resize(num),y.resize(num);
			stringstream ss;
			ss<<str;
			for(int i=0;i<num;++i){
				ss>>x[i]; ss>>y[i];
			}
			edit.Release();
			button.Create(123,"終了",hwnd,slib::Bounds(530,440,100,30));
			paint=true;
			SendMessage(hwnd,WM_PAINT,0,0);
		}
		if(COMMAND_ID==123) PostQuitMessage(0);
	}
	_Event(PAINT){
		if(paint){
			slib::PaintDC hdc(hwnd);
			OutputCalclation(hdc,x,y,num);
		}
	}
	return _CallProc(slib::DefWndProc);
}

int _Main(){
	slib::Window win;
	win.style=WS_GAMEWINDOW|WS_VISIBLE;
	win.exStyle=WS_EX_CLIENTEDGE;
	win.Create(WndProc);
	win.Run();
	return 0;
}