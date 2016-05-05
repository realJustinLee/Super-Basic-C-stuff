#include <stdio.h>
int main(void){
    char a;
    printf("Enter x: ");
    a=getchar();
    putchar(a);
    while ((a=getchar())!='\n'){
        printf(",%c",a);
    }
    return 0;
}
