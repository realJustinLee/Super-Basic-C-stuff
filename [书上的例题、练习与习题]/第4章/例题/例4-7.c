#include <stdio.h>
int main(void){
    double n,i,j,sum=0,fact;
    printf("Enter n:");
    scanf("%lf",&n);
    for (i = 1; i <=n ; i++) {
        fact=1;
        for (j = 1; j <= i ; j++) {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("sum=%0.f",sum);
    return 0;
}
