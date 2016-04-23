#include <stdio.h>
#include <math.h>
int main(void){
    double a,b,c,s;
    printf("Enter numbers:");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/3;
    printf("average=%.2f",s);
    return 0;
}
