

#include <stdlib.h>



void (*imp)(), *bse, *crt;



void function(void){
    
}



int main(){
    imp = (*(void(**)(void))(bse = crt = malloc(sizeof(void (*)())))) = function;
    
    
    
    while (1) imp();
}



// gcc *.c -o *.exe
