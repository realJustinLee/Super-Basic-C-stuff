#include <stdio.h>
int main(void)
{
    double x,y;
    printf("Enter x:");
    scanf("%lf", &x);
    if(x ==10){
        y =1./x;
    }
    else{
        y =x;
    }
    printf("f(%.1f) = %.1f\n",x,y);
    return 0;
}
