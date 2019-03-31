#include <#csystem.h>
#include <conio.h>

int main(){
	int N=0;
	double *Xi,*Yi;
	double X=0,Y=0,XX=0,YY=0,XY=0;
	double a=0,b=0;
	
	printf("Å¬“ñæ–@‚ðs‚¢‚Ü‚·\n—v‘f”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢  >> ");
	scanf("%d",&N);
	Xi=(double*)malloc(sizeof(double)*N);
	Yi=(double*)malloc(sizeof(double)*N);
	
	for(int i=0;i<N;i++){
		printf("X[%d]=?  >> ",i);
		scanf("%lf",&Xi[i]);
	}
	printf("\n");
	for(int i=0;i<N;i++){
		printf("Y[%d]=?  >> ",i);
		scanf("%lf",&Yi[i]);
	}
	
	for(int i=0;i<N;i++) X+=Xi[i];
	for(int i=0;i<N;i++) Y+=Yi[i];
	for(int i=0;i<N;i++) XX+=Xi[i]*Xi[i];
	for(int i=0;i<N;i++) YY+=Yi[i]*Yi[i];
	for(int i=0;i<N;i++) XY+=Xi[i]*Yi[i];
	
	a=(N*XY-X*Y)/(N*XX-X*X);
	b=(XX*Y-XY*X)/(N*XX-X*X);
	
	if(b>0) printf("\n\n y=%fx+%f",a,b);
	else if(b==0) printf("\n\n y=%fx",a);
	else printf("\n\n y=%fx-%f",a,-b);
	getch();
	free(Xi);
	free(Yi);
	return 0;
}