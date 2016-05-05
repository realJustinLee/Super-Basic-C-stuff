#include <stdio.h>
int main(void){
    int m,n,a,b,sx,sd,r;
    printf("Enter m,n: ");
    scanf("%d%d",&m,&n);
    a=m,b=n;
    do{
        r=m%n;
        m=n;
        n=r;
    }while (r);
    sx=m;
    sd=a*b/sx;
    printf("%d %d",sx,sd);
    return 0;
}
