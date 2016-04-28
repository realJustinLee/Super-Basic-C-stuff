#include <stdio.h>
int main(void){
    double n,i,sum=0,fz,fm,flag=1;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i = 1; i <= n ; i++) {
        fz=i*flag;
        fm=2*i-1;
        sum=sum+fz/fm;
        flag=-flag;
    }
    printf("%.2f",sum);
    return 0;
}
