#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR_MEMORY_REALLOCATION -1

void *bse, *crt;
int imp;

void call(void){
    // ... //scanf("%d", &imp);
    *(int*)crt = 0;
}

//void func_name(void){...}

void (*funcs[])() = {call};//void (*funcs[])() = {call, ...};

int main(int argc, char const *argv[]){
    bse = crt = malloc(256);if (!crt) return ERROR_MEMORY_REALLOCATION;
    imp = *(int*)crt = 0;
    while (1) funcs[imp]();
}

// gcc runtime.c -o runtime.exe
