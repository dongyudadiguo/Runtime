#include <windows.h>
#include <stdlib.h>

void (*imp)(), *bse, *crt;

__declspec(dllexport) void (**rt_get_imp_ptr(void))(void) { return &imp; }
__declspec(dllexport) void** rt_get_bse_ptr(void) { return &bse; }
__declspec(dllexport) void** rt_get_crt_ptr(void) { return &crt; }

int main(int argc, char const *argv[])
{
    imp = (*(void(**)(void))(bse = crt = malloc(sizeof(void (*)()))));
    GetProcAddress(LoadLibrary(argv[1]), "load");
    while (1) imp();
}

// gcc run.c -o run.exe
