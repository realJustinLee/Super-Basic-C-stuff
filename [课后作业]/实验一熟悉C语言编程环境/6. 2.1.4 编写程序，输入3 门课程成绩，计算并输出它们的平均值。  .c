#include <stdio.h>
int main(void)
{
    double a,b,c,d;
    scanf("%lf\n%lf\n%lf",&a,&b,&c);
    d=(a+b+c)/3;
    printf("average=%.2f\n",d);
    return (0);
}