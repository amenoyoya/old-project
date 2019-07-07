#include <lucca/core.h>

int main(){
	return lucca_run(lucca_lambda(){
		if(0 != lucca_dofile("lua.lua")) puts(lucca_tostr(-1));
		
		// lua‚ÌaddŠÖ”‚ğŒÄ‚Ño‚·
		lucca_scall("add", 2, 1, [:_lnum(100), _lnum(200):],
			[:printf("%d\n", lucca_toint(-1)):]
		);
	});
}
