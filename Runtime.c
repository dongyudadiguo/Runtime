
int stack[];
int stackPtr = 0;
void STK(void){
    stack[stackPtr++] = ptr;
    imp = fun[*(int*)(buffer + (ptr = *(int*)(buffer + ptr + sizeof(int))))];
}

void *buffer;
int ptr;
void (*fun[])(void) = {};
void (*imp)(); 

int main(){
    while (1)imp();
}
