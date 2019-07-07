#include <lucca/dxlib.h>

int _WinMain(){
	if(__argc < 2) return 0;
	return lucca_run(lucca_lambda(){
		lucca_reg("DxLib_Init", DxLib_Init);
		lucca_reg("DxLib_End", DxLib_End);
		lucca_reg("WaitKey", WaitKey);
		
		if(0 != lucca_dofile(__argv[1])){
			MessageBox(NULL, lucca_tostr(-1), NULL, MB_OK);
		}
	});
}
