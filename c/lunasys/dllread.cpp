#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(void)
{
    void *handle;
    void (*func)();

    /* cygtest.dll の動的ロード。拡張子「dll」はなくとも構わない。*/
    handle = dlopen("dlltest.lsp", RTLD_LAZY);
    if (!handle) {
        fprintf (stderr, "%s\n", dlerror());
    	return system("pause");
    }

    /* dlopen() によって取得した cygtest.dll のハンドルから、
       関数「hello」へのポインタを取得する。*/
	func = (void (*)())dlsym(handle, "hello");
    if (!func)  {
        fprintf (stderr, "error: %s\n", dlerror());
    	return system("pause");
    }

    /* 関数「hello」を実行 */
    func();

    /* cygtest.dll のハンドルをクローズ。*/
    dlclose(handle);

    return 0;
}
