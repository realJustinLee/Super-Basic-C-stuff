#include <stdio.h>
int main(void){
    double i,n,sum=0,fm=1,flag=1;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+flag*1.0/fm;
        fm=fm+3;
        flag=-flag;
    }
    printf("sum=%lf",sum);
    return 0;
}
