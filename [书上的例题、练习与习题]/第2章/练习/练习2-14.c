#include <stdio.h>
int main(void){
    double i,n,sum=0,fm=1;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+1.0/fm;
        fm=fm+2;
    }
    printf("sum=%lf",sum);
    return 0;
}
