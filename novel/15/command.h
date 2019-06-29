#pragma once

/* スクリプトエンジン用各種コマンド */

#include "TextEngine.h"

/* 遅延 */
bool	flag_delay = false;
Timer	delay_timer;
ulong_t	delay_time = 0;

void task_delay(){
	if(flag_delay){
		if(!delay_timer.check(delay_time)) return;
		flag_delay = false;
		engine_can_run(true);
	}
}

int delay(lua_State *L){
	Lua lua(L);
	
	delay_time = lua.tonum(1);
	flag_delay = true;
	engine_can_run(false);
	delay_timer.start();
	return 0;
}
