#include <stdio.h>
#include <math.h>
int main(void){
    int n,i;
    printf("n:");
    scanf("%d",&n);
    printf("%d=",n);
    for ( i = 2; i <=sqrt(n); i++) {
        if (n%i==0){
            n=n/i;
            printf("%d*",i--);
        }
    }
    printf("%d",n);
    return 0;
}
