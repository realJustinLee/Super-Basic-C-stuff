#include <stdio.h>
#include <math.h>
double funpi(double e){
    int fm=1,fh=1;
    double sum=0,x;
    while (fabs(x)>=e){
        x=fh*1.0/fm;
        sum=sum+x;
        fh=-fh;
        fm=fm+2;
    }
    return sum*4;
}
int main(void){
    double e,pi;
    printf("Enter e: ");
    scanf("%lf",&e);
    pi=funpi(e);
    printf("pi=%lf\n",pi);
    return 0;
}