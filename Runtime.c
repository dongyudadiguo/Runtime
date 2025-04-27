
void STK(void);
int *stack;
int stackPtr = 0;
int relativePtr = 0;

void *buffer;
int ptr;
void (*fun[])(void) = {STK};
void (*imp)(); 

void STK(void){
    stack[stackPtr++] = relativePtr;
    stack[stackPtr++] = ptr;
    imp = fun[*(int*)(buffer + (ptr = (relativePtr = ptr + *(int*)(buffer + ptr + sizeof(int)))))];
}

int main(){
    while (1)imp();
}
