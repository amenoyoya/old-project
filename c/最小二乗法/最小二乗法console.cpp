#include "#system.hpp"

int _Main(){
	int num=0;
	vectorx<double> Xi,Yi;
	double x=0,y=0,xx=0,xy=0;
	double a=0,b=0;
	
	cout<<"Å¬“ñæ–@‚ðs‚¢‚Ü‚·\n—v‘f”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢  >> "<<flush;
	cin>>num;
	Xi.resize(num); Yi.resize(num);
	for(int i=0;i<num;i++){
		cout<<"X["<<i<<"]=?  >> "<<flush;
		cin>>Xi[i];
	}
	cout<<endl;
	for(int i=0;i<num;i++){
		cout<<"Y["<<i<<"]=?  >> "<<flush;
		cin>>Yi[i];
	}
	
	for(int i=0;i<num;i++) x+=Xi[i];
	for(int i=0;i<num;i++) y+=Yi[i];
	for(int i=0;i<num;i++) xx+=Xi[i]*Xi[i];
	for(int i=0;i<num;i++) xy+=Xi[i]*Yi[i];
	
	a=(num*xy-x*y)/(num*xx-x*x);
	b=(xx*y-xy*x)/(num*xx-x*x);
	
	if(b>0) cout<<"\n\n y="<<a<<"x+"<<b<<endl;
	else if(b==0) cout<<"\n\n y="<<a<<"x"<<endl;
	else cout<<"\n\n y="<<a<<"x-"<<-b<<endl;
	getch();
	return 0;
}