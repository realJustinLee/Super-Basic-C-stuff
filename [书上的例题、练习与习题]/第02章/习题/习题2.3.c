#include <stdio.h>
int main(void){
    double x,i,n,xn=1;
    printf("Enter x,n: ");
    scanf("%lf%lf",&x,&n);
    for (i = 1; i <=n ; i++) {
        xn=xn*x;
    }
    printf("%.0f",xn);
    return 0;
}
