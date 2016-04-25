#include <stdio.h>
int main(void){
    double i,n,sum=0;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+1.0/i;
    }
    printf("sum=%lf",sum);
    return 0;
}
