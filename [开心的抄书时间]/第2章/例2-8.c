#include <stdio.h>
int main(void){
    double n,i,flag=1,fm=1,sum=0;
    printf("Input n: ");
    scanf("%lf",&n);
    for (i = 1; i <=n; i++) {
        sum=sum+flag*(1.0/fm);
        fm=fm+2;
        flag=-flag;
    }
    printf("sum=%lf",sum);
    return 0;
}
