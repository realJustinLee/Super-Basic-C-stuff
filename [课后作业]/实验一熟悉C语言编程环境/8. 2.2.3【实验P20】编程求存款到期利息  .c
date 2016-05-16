#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,c,d;
    printf("Enter money,year and rate:");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=a*pow(1+c,b)-a;
    printf("interest=%.2f\n",d);
    return 0;
}