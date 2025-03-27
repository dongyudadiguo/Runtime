#include <stdlib.h>

void call_init(void);
void call_normal(void);

void (*imp)() = call_init;
void *line, *bse, *crt;

void call_init(void){
    imp = (*(void (**)(void))(line = bse = crt = malloc(sizeof(void (*)()))) = call_normal);
}
void call_normal(void){
    //...
    imp = *(void (**)(void))(crt = line);
}// void function(void){...}

int main(){ while (1) imp();}

// gcc runtime.c -o runtime.exe
