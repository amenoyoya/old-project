#include "lib.gin.h"
#include "char.h"
#include "story.h"
#include "field.h"

struct App: public GameApp{
	CharObject		charobj;
	StoryObject		storyobj;
	FieldObject		fieldobj;
	
	void dxinit(){
		title = "ó¥ê_ò^Å`êFÅXÇ»ìGÇÃìÆÇ´Å`";
	}
	
	App(): GameApp() {
		registobj(&charobj);
		registobj(&storyobj);
		registobj(&fieldobj);
	}
}app;
