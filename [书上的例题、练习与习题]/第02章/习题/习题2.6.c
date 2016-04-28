#include <stdio.h>
#include <math.h>
int main(void)
{
    double i,l,r,m;
    printf("Enter loan: ");
    scanf("%lf",&l);
    printf("Enter rate: ");
    scanf("%lf",&r);
    for (i = 5; i <= 30; i++) {
        m=l*r*pow(1+r,12*i)/(pow(1+r,12*i)-1);
        printf("money(%.0f,%.0f)=%.0f\n",l,i,m);
    }
    return 0;
}
