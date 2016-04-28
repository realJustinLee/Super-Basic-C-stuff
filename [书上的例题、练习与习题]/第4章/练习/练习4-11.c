#include <stdio.h>
int main(void){
    int n,m;
    printf("Enter n:" );
    scanf("%d",&n);
    if (n<=0){
        n=-n;
    }
    while (n!=0){
        m=n%10;
        n=n/10;
        printf("%d",m);
    }
    return 0;
}