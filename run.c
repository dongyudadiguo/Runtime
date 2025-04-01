

#include <stdlib.h>



void (*imp)(), *bse, *crt, *bak;
void (*fun[])(void) = {...};
int fun_size = sizeof(fun) / sizeof(fun[0]);


void load(void){


    
    imp = (*(void(**)(void))(crt = bak);
}



int main(){
    imp = (*(void(**)(void))(bak = bse = crt = malloc(sizeof(void (*)())))) = load;
    
    
    
    while (1) imp();
}



// gcc *.c -o *.exe
