/* eval.cpp                             */  
/* �������\����͂��A�������߂�         */  
/* �R�}���h���C����1�����Ƃ���          */  
/* �_�u���N�H�[�g�ň͂�ŕ������n�� */  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <ctype.h>  
  
#define STR_LENGTH 256  
  
enum token {NUMBER = 1, OPERATER = 2, LEFTPAREN = 3, RIGHTPAREN = 4};  
//�g�[�N���̎�ނ��`����񋓌^  
  
struct count {  //�g�[�N���ʂɐ����J�E���g����\����  
    int leftparen;  //�J�b�R  
    int number;         //��  
    int operater;       //���Z�q  
    int sign;               //����  
    int rightparen; //�J�b�R�Ƃ�  
};  
  
char *mystrrep(char str1[STR_LENGTH], const char *str2, const char *str3);  
int isoperator(char c);  
char *getoperator(char *exp);  
int gettoken(char *str, char *token);  
int check(char *exp);  
int calc(char *str, int i);  
int eval(char *str);  
  
/* 
 * �֐���:main 
 * �R�}���h���C������:���Ƃ��Čv�Z������������ 
 * �@�\:���������͂��A���Ƃ��Čv�Z�A�l��Ԃ� 
 * �Ԃ�l:�����G���[ 
 */  
int main(int argc, char *argv[]){  
    char exp[STR_LENGTH];  
    if (argc < 2){  
        printf("�����G���[\n��1�����Ƃ��Čv�Z�����w�肵�ĉ�����\n");  
        return 1;  
    }  
      
    sprintf(exp, "(%s)", argv[1]);  //����̂��߁A�v�Z���鎮���̂�()�ň͂�  
    while (strchr(exp, ' ')){   //�X�y�[�X������ꍇ�A����  
        mystrrep(exp, " ", "");  
    }  
    if (check(exp)){    //�������K�\�����`�F�b�N  
        //���K�\���łȂ���΁A�v�Z���Ȃ�  
        return 1;  
    } else {    //�`�F�b�N��ʂ�����A���������߂�  
        printf("expression:%s\nanswer:%d\n", argv[1], eval(exp));  
    }  
    return 0;  
}  
  
/* 
 * �֐���:mystrrep 
 * ����:������str1�A�����񒆂̒u��������������str2�A�u�����镶����str3 
 * �@�\:str1���̍ŏ���str2�p�^�[����str3�ɒu������ 
 * �Ԃ�l:�u�������擪�̃A�h���X 
 */  
char *mystrrep(char str1[STR_LENGTH], const char *str2, const char *str3){  
    char temp[STR_LENGTH], *p;  //�ꎞ�ۑ��z��temp�ƃ|�C���^����p�ϐ�p  
      
    if (strlen(str1) - strlen(str2) + strlen(str3) >= STR_LENGTH){  
        //�u�����Ă��̈���I�[�o�[���Ȃ����`�F�b�N  
        printf("�u����̕��������������܂�\n");  //�I�[�o�[����ꍇ�͏������I��  
        return NULL;  
    }  
      
    p = str1;   //�u�����s��  
    if (p = strstr(p, str2)){   //str2�̃p�^�[���������鎞�^  
        strcpy(temp, p + strlen(str2)); //�u������镶���ȍ~���ꎞ�ۑ�  
        *p = '\0';  //str2�������n�_�ŕ������؂�  
        strcat(str1, str3); //str3���q�������Ƃ�  
        strcat(str1, temp); //���̕������str2�p�^�[���ȍ~��߂�  
    }  
    return p;  
}  
  
  
/* 
 * �֐���:isoperator 
 * ����:�P���� 
 * �@�\:�����̕��������Z�q���ł��邩�ǂ������肷�� 
 *      ���肷��͉̂����揜 
 * �Ԃ�l:���Z�q�ł������ꍇ1�A�����łȂ���0 
 */  
int isoperator(char c){  
    if (c == '+' || c == '-' || c == '*' || c == '/')  
        return 1;  
    else  
        return 0;  
}  
  
  
/* 
 * �֐���:getoperator 
 * ����:�v�Z�����w�������|�C���^ 
 * �@�\:�v�Z�����̍ŏ��Ɍ���鉉�Z�q�̈ʒu�����߂� 
 *      �J�b�R���̉��Z�q�͔��肵�Ȃ� 
 * �Ԃ�l:���Z�q�̈ʒu�̃|�C���^ 
 */  
char *getoperator(char *exp){  
    int i, count = 0;  
      
    for (i = 0; (count != 0 || exp[i] != ')') && exp[i] != '\0'; i++){  
        //���݌��ؒ��̎��̊O���̃J�b�R�Ƃ��܂ŒT��  
        //�G���[���p�ɕ�����I�[�ł��I��  
        if (count == 0 && isoperator(exp[i])){  
            //�J�b�R���ł͂Ȃ����Z�q�̎��Ԃ�  
            return &exp[i];  
        } else if (exp[i] == '('){  
            //�����̃J�b�R������ꍇ�J�E���g����  
            count++;  
        } else if (exp[i] == ')'){  
            //�Ή�����J�b�R�ŊO���  
            count--;  
        }  
    }  
    return NULL;  
}  
  
  
/* 
 * �֐���:gettoken 
 * ����:����Ώۂ̕�����str�A���������g�[�N�����i�[���镶����token 
 * �@�\:������str����A�J�b�R�A�����A���Z�q�̂����ꂩ��؂�o���A�������ƃk������ 
 * �Ԃ�l:�؂�o���ꂽ�g�[�N���ɑΉ����鐮�� 
 *        (����:1�A���Z�q:2�A�J�b�R:3�A�J�b�R�Ƃ�:4�A����ȊO�͂��̕�����ASCII�R�[�h) 
 */  
int gettoken(char *str, char *token){  
    int i = 0, j = 0;   //�����񑀍�p�ϐ�i  
    while (str[i] == ' ')   //�X�y�[�X��ǂݔ�΂�  
        i++;  
    if (str[i] == '('){ //�J�b�R�𔭌������ꍇ  
        strcpy(token, "(");  
        return LEFTPAREN;  
          
    } else if (str[i] == ')'){  //�J�b�R�Ƃ��𔭌������ꍇ  
        strcpy(token, ")");  
        return RIGHTPAREN;  
      
    } else if (isdigit(str[i])){    //�����𔭌������ꍇ  
        while (isdigit(str[i])){    //���ł��镶���񕔕���؂�o��  
            token[j] = str[i];  
            i++;  
            j++;  
        }  
        token[i] = '\0';  
        return NUMBER;      //�����ł��邱�Ƃ�Ԃ�  
          
    } else if (isoperator(str[i])){ //���Z�q�𔭌������ꍇ  
        sprintf(token, "%c", str[i]);   //���Z�q���i�[  
        return OPERATER;  
    } else {  
        return str[i];  
    }  
}  
  
  
/* 
 * �֐���:check 
 * ����:�����̕����� 
 * �@�\:���������K�\���ƂȂ��Ă��邩�`�F�b�N���� 
 * �Ԃ�l:���K�\���̎�0�A�����łȂ�����1��Ԃ� 
 */  
int check(char *exp){  
    int n, n0 = -1;  
    //�擾�����g�[�N���̎�ނ��i�[����n  
    //�O�̃g�[�N���̒l��ۑ�����n0  
    char token[10]; //�g�[�N�����i�[���镶����A����9�P�^�܂�  
    struct count c; //�g�[�N������ޕʂɃJ�E���g����\����  
    memset((void *)&c, 0, sizeof(struct count));    //�\���̏�����  
      
    while (*exp != '\0'){   //������I�[�ŃX�g�b�v  
        switch(n = gettoken(exp, token)){   //�g�[�N�����擾�A��ނɂ�蕪��  
        case NUMBER:    //���ł��鎞�A���̐擪���A���Z�q�܂���'('�̌�ł���  
            if (n0 == -1 || n0 == OPERATER || n0 == LEFTPAREN){  
                c.number++;  
            } else {    //�����łȂ��Ȃ�\���G���[  
                printf("���̍\���G���[\n");  
                return 1;  
            }  
            break;  
              
        case OPERATER:  //���Z�q�ł���ꍇ�A')'�̌ォ�A���̌�ł���A�������̔�����s��  
            if (n0 == RIGHTPAREN || n0 == NUMBER){  
                c.operater++;  
            } else if ((token[0] == '+' || token[0] == '-') && (n0 == -1 || n0 == LEFTPAREN)){  
                //���Z�q��+��-�ł���ꍇ�A���̐擪��')'�̌�Ȃ畉�����ł���  
                c.sign++;  
            } else {  
                printf("���̍\���G���[\n");  
                return 1;  
            }  
            break;  
              
        case LEFTPAREN: //'('�ł���ꍇ�A���̐擪�����Z�q�̌ォ'('�̌�ł���  
            if (n0 == -1 || n0 == OPERATER || n0 == LEFTPAREN){  
                c.leftparen++;  
            } else {  
                printf("���̍\���G���[\n");  
                return 1;  
            }  
            break;  
              
        case RIGHTPAREN:    //')'�ł���ꍇ�A���̌ォ')'�̌�ł���  
            if (n0 == NUMBER || n0 == RIGHTPAREN){  
                c.rightparen++;  
            } else {  
                printf("���̍\���G���[\n");  
                return 1;  
            }  
            break;  
          
        case '\0':  //�k�������̏ꍇ  
            break;  
          
        default:  
            //�擾�����g�[�N�����A���Ɋւ�����̂��k�������łȂ��ꍇ���G���[  
            printf("���̍\���G���[\n");  
            return 1;  
        }  
        n0 = n;  
        if (c.leftparen - c.rightparen < 0){ //'('���')'���������ꂽ��A���̎��_�ō\���G���[  
            printf("���̍\���G���[\n");  
            return 1;  
        }  
        exp = exp + strlen(token);  //���̃g�[�N�����擾���邽�߂�exp��i�߂�  
    }  
    if (n != NUMBER && n != RIGHTPAREN){    //�������͐���')'�łȂ��Ƃ����Ȃ�  
        if (c.leftparen - c.rightparen != 0){   //�J�b�R�̐��������Ă��邩�`�F�b�N  
            printf("���̍\���G���[\n");  
            return 1;  
        }  
    }  
      
    //�����܂ł̃`�F�b�N�ɂЂ�������Ȃ���΁A���K�\��  
    return 0;  
}  
  
  
/* 
 * �֐���:calc 
 * ����:��������A���Z�q�̈ʒu�������ϐ� 
 * �@�\:���Z�q�̎�ނɏ]���A���E�̒l�Ōv�Z���� 
 *      �v�Z�̏I���������͓����̒l�Œu������ 
 * �Ԃ�l:���Z�q�ɂ��v�Z���ꂽ���̒l 
 */  
int calc(char *str, int i){  
    int j = i, k,  temp = 0, a, b;  
    //������z��ő��삷�邽�߂̓Y����j  
    //������u�����Ɏg�����[�v�p�ϐ�k  
    //���̒l��ۑ�����ϐ�temp  
    //���̍��ӁA�E�ӂ̒l��ۑ�����a,b  
      
    char exp[STR_LENGTH], val[10];  
    //���Z���Ă��鎮��ۑ����镶����exp  
    //�l�𕶎���Ƃ��Ďg�p����val  
      
    char *pl, *pr, *next;  
    //���ӂ̒l�̐擪pl�A�E�ӂ̒l�̏I�[pr  
    //�E�ӂ̐�̉��Z�q���`�F�b�N���鎞�Ɏg��next  
      
    while(1){   //���ӂ̒l����������  
        j--;  
        if (str[j] == ')'){ //���ӏI�[���J�b�R�Ƃ��ł���ꍇ  
            while (str[j] != '('){  
                //�J�b�R�܂Ői�߂āAeval�ō��Ӓl�����߂�  
                j--;  
                if (j == -1){   //���͈̔͂��݂͂����Ȃ��悤��j�̒l���`�F�b�N  
                    printf("���̍\���G���[\n���ӂ̒l���擾�ł��܂���ł���\n");  
                    exit(1);  
                }  
            }  
            pl = str + j;   //���Ӓl�̐擪��ۑ�  
            a = eval(pl);  
            //���ӂ̒l�͓����̂ŁA���[�v�𔲂���  
            break;  
              
        } else if (isdigit(str[j])){    //���������ꍇ  
            while (isdigit(str[j - 1])){    //���̐擪�܂ł��炵��atoi  
                j--;  
                if (j == 0){    //���͈̔͂��݂͂����Ȃ��悤��j�̒l���`�F�b�N  
                    printf("���̍\���G���[\n���ӂ̒l���擾�ł��܂���ł���\n");  
                    exit(1);  
                }  
            }  
            pl = str + j;   //���ӂ̐擪��ۑ�  
            a = atoi(pl);   //�l���擾���āA���[�v�𔲂���  
            break;  
        } else if (str[j] == '('){  //���Z�q�����擪�̃}�C�i�X�������ꍇ  
            a = 0;  //���Ӓl��0�Ƃ��ĉ��Z����΂悢  
            pl = str + j + 1;  
            break;  
        }  
    }  
      
    j = i;  //���x�͉E�ӂ̒l���i�[����  
    while (str[j] != ')'){  //�ő�ŉE�ӏI�[�܂�  
        j++;  
        if (str[j] == '('){ //�E�ӂ��J�b�R�ł���ꍇ  
            pr = str + j;   //�E�Ӓl�̒l�擪�A�h���X��ۑ�  
            if (str[i] == '+' || str[i] == '-'){    //���݂̎��̉��Z�q�������ł���ꍇ�A��̏揜���`�F�b�N����  
                if ((next = getoperator(pr)) != NULL){  //�E�ӂ̐�ɏ揜���Ȃ���  
                    switch(*next){  
                    case '*':  
                    case '/':  
                        b = calc(pr, next - pr);    //�揜���������ꍇ�A��Ɍv�Z  
                        break;  
                    case '+':  
                    case '-':  
                        b = eval(pr);   //�����łȂ��Ȃ�A���ʂɉE�Ӓl�����߂�  
                    }  
                } else {    //���Z�q���Ȃ��ꍇ  
                    b = eval(pr);   //�E�Ӓl�����߂�  
                }  
            } else {    //���Z�q���̂��揜�Ȃ�A�O����v�Z����̂Œl�����炤  
                b = eval(pr);  
            }  
              
            //�E�Ӓl�I�[�����̏I���ƌ��邽��  
            //�E�Ӓl�̏I�[��T��  
            if (str[j] == '('){ //�E�Ӑ擪���J�b�R�ł���ꍇ  
                while (str[j] != ')'){  
                    j++;  
                    if (str[j] == '\0'){  
                        printf("���̍\���G���[\n�E�ӂ̒l���擾�ł��܂���ł���\n");  
                        exit(1);  
                    }  
                }  
            } else if (isdigit(str[j])){  
                while (isdigit(str[j + 1]))  
                    j++;  
            } else {  
                printf("���̍\���G���[\n�E�ӂ̒l���擾�ł��܂���ł���\n");  
                exit(1);  
            }  
            //���̂Ƃ�str + j�͉E�Ӓl�̏I�[���w��  
            break;  
              
        } else if (isdigit(str[j])){    //�E�Ӓl�����̏ꍇ  
            pr = str + j;   //�E�Ӓl�擪��ۑ�  
            if (str[i] == '+' || str[i] == '-'){  
                if ((next = getoperator(pr)) != NULL){  //�������E�ӂ̐�̏揜���`�F�b�N  
                    switch(*next){  
                    case '*':  
                    case '/':  
                        b = calc(pr, next - pr);    //��Ɍv�Z  
                        break;  
                    case '+':  
                    case '-':  
                        b = atoi(pr);   //�E�Ӓl�����߂�  
                    }  
                } else {  
                    b = atoi(pr);   //atoi�Ő������߂�  
                }  
            } else {  
                b = atoi(pr);   //���g�̉��Z���揜�ł������ꍇ�A��Ɍv�Z  
            }  
              
            if (str[j] == '('){ //�E�Ӑ擪���J�b�R�ł���ꍇ  
                while (str[j] != ')'){  
                    j++;  
                    if (str[j] == '\0'){  
                        printf("���̍\���G���[\n�E�ӂ̒l���擾�ł��܂���ł���\n");  
                        exit(1);  
                    }  
                }  
            } else if (isdigit(str[j])){  
                while (isdigit(str[j + 1]))  
                    j++;  
            } else {  
                printf("���̍\���G���[\n�E�ӂ̒l���擾�ł��܂���ł���\n");  
                exit(1);  
            }  
            break;  
        }  
    }  
      
    //�E�ӁA���ӂ̒l���󂯎�����̂ŉ��Z����  
    switch(str[i]){  
    case '+':  
        temp = a + b;  
        break;  
    case '-':  
        temp = a - b;  
        break;  
    case '*':  
        temp = a * b;  
        break;  
    case '/':  
        if (b == 0){    //0�ɂ�銄��Z�����  
            printf("0�ɂ�鏜�Z���s���܂���\n");  
            exit(1);  
        } else {  
            temp = a / b;  
        }  
        break;  
    }  
      
    //�v�Z�̏I�����������������  
    //���Ӓl�̐擪�����̎n�܂�A�E�Ӓl�̌v�Z���Astr + j���I�[�ł���  
    k = 0;  
    while (pl + k <= str + j){   //�܂��͉��Z��������exp�ɃR�s�[  
        exp[k] = pl[k];  
        k++;  
    }  
    exp[k] = '\0';  
      
    if (temp >= 0){  //�l�𕶎���Ɏʂ�  
        sprintf(val, "%d", temp);  
    } else {  
        sprintf(val, "(%d)", temp);  
    }  
      
    mystrrep(str, exp, val);    //�u��  
    return temp;  
}  
  
  
/* 
 * �֐���:eval 
 * ����:�v�Z������������ 
 * �@�\:������𐔎��Ƃ��Čv�Z���A��������A�ċA�����ɂ��p���� 
 *      �ŏI�I�ɁA�����Ƃ��ēn�����v�Z���������̒l�Œu������� 
 * �Ԃ�l:�v�Z���ꂽ���̒l 
 */  
int eval(char *str){  
    int i, temp, count = 0;  
    //���[�v�p�ϐ�i�A���Z���ʂ�ۑ�����temp�A�J�b�R�̃J�E���g�pcount  
    char *p, exp[20], val[10];  
    //�|�C���^����pp�A���Z������exp�A�l�𕶎���Ƃ��Ďg�p����val  
      
    p = str + 1;    //���擪��'('�Ȃ̂ŁA�K���P���炷  
    temp = atoi(p); //�����J�b�R�����������̏ꍇ�̂��ߕۑ�  
      
    do {    //�����̃J�b�R��T��(��Ɍv�Z���Ă���)  
        if (*p == '('){ //�J�b�R���������ꍇ  
            if ((temp = eval(p)) < 0){   //eval��K�p  
                count++;  
                //�����������ꍇ�J�b�R���Œu�������̂łP�J�E���g  
            }  
        } else if (*p == ')'){  //�J�b�R�Ƃ������ꂽ�ꍇ  
            count--;  
            //���I�[�̃J�b�R�Ƃ������肷�邽�߂ɃJ�E���g�����炷  
        } else if (*p == '\0'){  
            printf("���̍\���G���[�A�J�b�R�̈ʒu���s���ł�\n");  
            exit(1);  
        }  
        p++;    //�����̃|�C���^���P�i�߂�  
    } while (count != 0 || *p != ')');  
    //���I�[�̃J�b�R�Ƃ��̏ꍇ�̂݃��[�v�𔲂���  
      
    while ((p = getoperator(str + 1)) != NULL){ //���Z�q�����ߌv�Z���Ă���  
        temp = calc(str, p - str);  
    }  
      
    count = 0;  
    i = 0;  
    //eval�Ōv�Z���Ă��������A�����Œu�����邽�߂�  
    //���擪�ƑΉ�����J�b�R�܂ł�exp�ɕۑ�  
    do {  
        if (str[i] == '('){  
            count++;  
        } else if (str[i] == ')'){  
            count--;  
        } else if (str[i] == '\0'){  
            printf("���̍\���G���[�A�J�b�R�̈ʒu���s���ł�\n");  
            exit(1);  
        }  
        exp[i] = str[i];  
        i++;  
    } while (count != 0);   //���I���̃J�b�R�܂Ń��[�v  
    exp[i] = '\0';  
      
    if (temp >= 0){  //�����Œu�����邽�߂�val�ɐ�����������  
        sprintf(val, "%d", temp);  
    } else {  
        sprintf(val, "(%d)", temp);  
    }  
    mystrrep(str, exp, val);    //�֐�calc�ł��s���Ă��邪�A�l�Ŏ���u��  
      
    return temp;  
}