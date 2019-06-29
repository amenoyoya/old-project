#pragma once

/* �X�N���v�g�G���W���p�e��R�}���h */

#include "TextEngine.h"
#include <vector>

/* �֐��Z�b�g */
vector<function<void()>> command_list;

// ��
inline void task_command(){
	command_list[engine_status()]();
}


/* �e�L�X�g�Z�b�g */
// �ł�
int message(lua_State *L){
	Lua lua(L);
	
	command_list.push_back(bind(engine_set, lua.tostr(1)));
	return 0;
}

// ��
inline void task_message(){
	engine_run();
}


/* �x�� */
bool	flag_delay = false;
Timer	delay_timer;
ulong_t	delay_time = 0;

// �ł�
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

// ��
void task_delay(){
	if(flag_delay){
		if(!delay_timer.check(delay_time)) return;
		flag_delay = false;
		++engine_status();
	}
}
