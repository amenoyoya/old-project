#include "lib.gin.h"
#include "char.h"
#include "story.h"
#include "field.h"

struct App: public GameApp{
	CharObject		charobj;
	StoryObject		storyobj;
	FieldObject		fieldobj;
	
	App(): GameApp() {
		registobj(&charobj);
		registobj(&storyobj);
		registobj(&fieldobj);
	}
}app;
