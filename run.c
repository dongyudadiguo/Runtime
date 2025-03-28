// void *bak, *bse, *crt;
// void init(void){...}
// include "run.h"

#include <stdlib.h>

void (*imp)() = init, *bak, *bse, *crt;

void Back(void){ imp = *(void (**)(void))(crt = bak);}

int main(){
    (*(void (**)(void))(bak = bse = crt = malloc(sizeof(void (*)())))) = Back;
    while (1) imp();
}

// gcc *.c -o *.exe
