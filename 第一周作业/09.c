#include <stdio.h>
#include <math.h>
int main(void)
{
    double x,y;
    printf("Enter x:");
    scanf("%lf",&x);
    if(x>=0){
        y=pow(x,0.5);
    }
    else{
        y=pow(x,5)+2*x+pow(x,-1);
    }
    printf("f(%.2f)=%.2f\n",x,y);
    return 0;
}