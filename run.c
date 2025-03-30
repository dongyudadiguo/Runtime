// void (*imp)(), *bak, *bse, *crt;

// void init(void){...}

// void loop(void){...}

// //void function(void){...}//void function(void){...}

// #include "run.h"

// gcc *.c -o *.exe

#include <stdlib.h>

void Back(void){ imp = *(void (**)(void))(crt = bak);}

int main(){
    bak = bse = crt = malloc(sizeof(void (*)())*2);
    (*(void(**)(void))crt) = loop;
    (*(void(**)(void))(crt + sizeof(void(**)(void)))) = Back;
    imp = Back;
    init();
    while (1) imp();
}

// gcc *.c -o *.exe
