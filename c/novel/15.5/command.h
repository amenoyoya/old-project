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
bool	flag_delay = false;
Timer	delay_timer;
ulong_t	delay_time = 0;

// 打つ
void command_delay(ulong_t ms){
	if(!flag_delay){
		delay_time = ms;
		flag_delay = true;
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
	if(flag_delay){
		if(!delay_timer.check(delay_time)) return;
		flag_delay = false;
		++engine_status();
	}
}
