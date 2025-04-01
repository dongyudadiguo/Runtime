

#include <stdlib.h>



void (*imp)(), *bse, *crt;
void (*fun[])(void) = {...};
int fun_size = sizeof(fun) / sizeof(fun[0]);


void load(void){


    
    imp = (*(void(**)(void))(crt = bse));
}



int main(){
    imp = (*(void(**)(void))(bse = crt = malloc(sizeof(void (*)())))) = load;
    
    
    
    while (1) imp();
}



// gcc *.c -o *.exe
