#include <stdio.h>
double c(double h, double r){
    double res;
    res=3.1415926*r*r*h;
    return res;
}
int main(void){
    double h,r,v;
    printf("Enter h,r: ");
    scanf("%lf%lf",&h,&r);
    v=c(h,r);
    printf("v=%.3f",v);
    return 0;
}