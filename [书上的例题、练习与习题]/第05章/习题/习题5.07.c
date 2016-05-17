#include <stdio.h>
int main(void){
    int fib(int n);
    int m,n,i=1;
    printf("Enter m,n: ");
    scanf("%d%d",&m,&n);
    while (fib(i)<m){
        i++;
    }
    while (fib(i)<n){
        printf("%d ",fib(i));
        i++;
    }
    return 0;
}

int fib(int n){
    int x1=1,x2=1,i,x=1;
    if (n==1||n==2){
        x=x1;
    }
    for (i = 3; i <=n ; i++) {
        x=x1+x2;
        x1=x2;
        x2=x;
    }
    return x;
}
