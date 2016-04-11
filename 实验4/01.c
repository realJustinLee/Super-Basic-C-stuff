#include <stdio.h>
int main(void){
    int a,b,n,i=1;
    printf("Input n: ");
    scanf("%d",&n);
    printf("Input numbers: ");
    scanf("%d",&a);
    for (i = 1; i <= n-1 ; i++) {
        scanf("%d",&b);
        if (a>b){
            a=b;
        }
    }
    printf("min=%d",a);
    return 0;
}