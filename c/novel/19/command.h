#pragma once

/* スクリプトエンジン用各種コマンド */

#include "TextEngine.h"
#include <vector>

/* 関数セット */
vector<function<void()>> command_list;

// 回す
inline void task_command(){
	command_list[engine_status()]();
}


/* テキストセット */
// 打つ
int message(lua_State *L){
	Lua lua(L);
	
	command_list.push_back(bind(engine_set, lua.tostr(1)));
	return 0;
}

// 回す
inline void task_message(){
	engine_run();
}


/* 遅延 */
Timer	delay_timer;
ulong_t	delay_time = 0;

// 打つ
void command_delay(ulong_t ms){
	if(engine_flag() != _Delay){
		delay_time = ms;
		engine_flag() = _Delay;
		delay_timer.start();
	}
}

int delay(lua_State *L){
	Lua lua(L);
	
	command_list.push_back(bind(command_delay, lua.tonum(1)));
	return 0;
}

// 回す
void task_delay(){
	if(engine_flag() == _Delay){
		if(!delay_timer.check(delay_time)) return;
		engine_flag() = _None;
		++engine_status();
	}
}


/* 改ページ */
int page(lua_State *){
	command_list.push_back(command_page);
	return 0;
}
