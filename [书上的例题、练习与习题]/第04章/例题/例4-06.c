#include <stdio.h>
double fact(double n){
    double i,fact=1;
    for (i = 1; i <= n ; i++) {
        fact=fact*i;
    }
    return fact;
}
int main(void){
    double n,i,sum=0;
    printf("Enter n:");
    scanf("%lf",&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+fact(i);
    }
    printf("sum=%0.f",sum);
    return 0;
}
