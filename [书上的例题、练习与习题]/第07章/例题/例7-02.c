#include <stdio.h>
int main(void){
    int i,x;
    printf("Enter x: ");
    scanf("%d",&x);
    int fib[10]={1,1};
    for (i = 2; i <10 ; i++) {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for (i = 0; i <10 ; i++) {
        printf("%6d ",fib[i]);
        if ((i+1)%x==0){
            printf("\n");
        }
    }
    return 0;
}
