#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(void)
{
    void *handle;
    void (*func)();

    /* cygtest.dll �̓��I���[�h�B�g���q�udll�v�͂Ȃ��Ƃ��\��Ȃ��B*/
    handle = dlopen("dlltest.lsp", RTLD_LAZY);
    if (!handle) {
        fprintf (stderr, "%s\n", dlerror());
    	return system("pause");
    }

    /* dlopen() �ɂ���Ď擾���� cygtest.dll �̃n���h������A
       �֐��uhello�v�ւ̃|�C���^���擾����B*/
	func = (void (*)())dlsym(handle, "hello");
    if (!func)  {
        fprintf (stderr, "error: %s\n", dlerror());
    	return system("pause");
    }

    /* �֐��uhello�v�����s */
    func();

    /* cygtest.dll �̃n���h�����N���[�Y�B*/
    dlclose(handle);

    return 0;
}
