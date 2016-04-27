#include <stdio.h>
#include <math.h>
int main(void){
    double s=0,fm=1,fh=1,eps;
    printf("Input eps: ");
    scanf("%lf",&eps);
    while (fabs(1.0/fm)>=eps){
        s=s+fh*1.0/fm;
        fh=-fh;
        fm=fm+3;
    }
    printf("s=%lf",s);
    return 0;
}
