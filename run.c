#include <stdlib.h>

void (*imp)(), *bse, *crt;

void function(void){
    // ...
}

int main(){
    (*(void(**)(void))(bse = crt = malloc(sizeof(void (*)())*2))) = function;
    // ...
    while (1) imp();
}

// gcc *.c -o *.exe
