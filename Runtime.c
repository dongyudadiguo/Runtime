
void STK(void);
int stack[];
int stackPtr = 0;

void *buffer;
int ptr;
void (*fun[])(void) = {STK};
void (*imp)(); 

void STK(void){
    stack[stackPtr++] = ptr;
    imp = fun[*(int*)(buffer + (ptr = *(int*)(buffer + ptr + sizeof(int))))];
}

int main(){
    while (1)imp();
}
