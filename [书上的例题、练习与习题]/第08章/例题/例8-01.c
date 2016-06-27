#include <stdio.h>
int main(void){
    int key=911;
    int *p_addr=NULL;
    p_addr=&key;
    printf("If I know the name of the variable,I can get it's value by name: %d\n",key);
    printf("If I know the address of the variable is %x,then I also can get it's value by address: %d\n",p_addr,*p_addr);
    return 0;
}