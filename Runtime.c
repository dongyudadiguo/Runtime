void starter(void);

void *buffer;
int ptr;
void *std;
void (*fun[])(void) = {starter};
void (*imp)(); 

void starter(void)
{
    
    imp = fun[(ptr = 0)];
}

int main(){
    ptr = (*(int*)(buffer = ptr = malloc(sizeof(void *))) = 0);
    while (1){ imp();}
}
