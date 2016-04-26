#include <stdio.h>
#include <math.h>
int main(void){
    double n,i,sum=0;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i = 1; i <= n ; i++) {
        sum=sum+pow(2,i);
    }
    printf("sum=%.0f",sum);
    return 0;
}
