#include <figit/core.h>

using namespace figit;

struct data_t{
	int val, type;
};

enum ControlType{
	__error = 0, __print, __add, __sub, __mul, __div
};

enum DataType{
	__nil = 0, __num
};

enum ModeType{
	__data = 0, __control
};

vector<int> control;
vector<data_t> stack;

void printStack(){
	printf("control: ");
	for(auto it = control.begin(); it != control.end(); ++it){
		printf("[%d]", *it);
	}
	printf("\ndata: ");
	for(auto it = stack.begin(); it != stack.end(); ++it){
		if(it->type == __nil) printf("[nil]");
		else printf("[%d]", it->val);
	}
	printf("\n");
	system("pause");
	printf("\n");
}

int main(){
	int mode = __data;
	StringAnalyzer a(File::read("fisp.txt"));
	
	a.prepareToken(2);
	while(!a.eof()){
		a.begin();
		if(!a.skipSpace()) break;
		if(a.match("[")){
			// ���ɏo�Ă��镶���͐��䕶���ƂȂ�
			mode = __control;
			// �f�[�^�X�^�b�N��__nil��ς�(�X�^�b�N�̋�؂�)
			data_t data = {0, __nil};
			stack.push_back(data);
			a.seekb(1);
		}else if(a.match("]")){
			// ���s����
			int proc = control.size() > 0? *(control.end()-1): __error, ret = 0;
			bool ret_flag = false;
			
			switch(proc){
			case __error:
				puts("�G���[����");
				break;
			case __print:
				u8print((stack.size() > 0 && (stack.end()-1)->type != __nil)?
					">> "+toStr((stack.end()-1)->val): ">> nil");
				break;
			case __add:
				{
					int val1 = (stack.size() > 0 && (stack.end()-1)->type != __nil)?
						(stack.end()-1)->val: 0;
					int val2 = (stack.size() > 1 && (stack.end()-2)->type != __nil)?
						(stack.end()-2)->val: 0;
					ret_flag = true; ret = val2 + val1;
					break;
				}
			case __sub:
				{
					int val1 = (stack.size() > 0 && (stack.end()-1)->type != __nil)?
						(stack.end()-1)->val: 0;
					int val2 = (stack.size() > 1 && (stack.end()-2)->type != __nil)?
						(stack.end()-2)->val: 0;
					ret_flag = true; ret = val2 - val1;
					break;
				}
			case __mul:
				{
					int val1 = (stack.size() > 0 && (stack.end()-1)->type != __nil)?
						(stack.end()-1)->val: 0;
					int val2 = (stack.size() > 1 && (stack.end()-2)->type != __nil)?
						(stack.end()-2)->val: 0;
					ret_flag = true; ret = val2 * val1;
					break;
				}
			case __div:
				{
					int val1 = (stack.size() > 0 && (stack.end()-1)->type != __nil)?
						(stack.end()-1)->val: 0;
					int val2 = (stack.size() > 1 && (stack.end()-2)->type != __nil)?
						(stack.end()-2)->val: 0;
					ret_flag = true; ret = (val1 == 0? 0: val2 / val1);
					break;
				}
			}
			printStack();
			// 1���ߕ��X�^�b�N���N���A
			if(control.size() > 0) control.pop_back();
			while(stack.size() > 0 && (stack.end()-1)->type != __nil) stack.pop_back();
			if(stack.size() > 0) stack.pop_back(); // __nil��؂�f�[�^���폜
			// �߂�l������Ȃ�X�^�b�N�ɐς�
			if(ret_flag){
				data_t data = {ret, __num};
				stack.push_back(data);
			}
			a.seekb(1);
		}else{
			string str;
			char *p = (char*)a.curPtr();
			while(!a.eof() && *p != '[' && *p != ']' && *p != ' '
				&& *p != '\t' && *p != '\n' && *p != '\r')
			{
				// ��؂蕶�����o�Ă���܂ŕ������擾
				str.push_back(*p);
				a.seekb(1); ++p;
			}
			// ���䕶�����f�[�^�����肵�X�^�b�N�ɐς�
			if(mode == __control){
				mode = __data;
				if(str == "print") control.push_back(__print);
				else if(str == "+") control.push_back(__add);
				else if(str == "-") control.push_back(__sub);
				else if(str == "*") control.push_back(__mul);
				else if(str == "/") control.push_back(__div);
				else control.push_back(__error);
			}else{
				data_t data = {strTo<int>(str), __num};
				stack.push_back(data);
			}
		}
	}
	puts("end");
	return system("pause");
}
