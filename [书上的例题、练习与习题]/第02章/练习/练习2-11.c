#include <stdio.h>
#include <math.h>
int main(void){
    double x,y;
    printf("Enter x: ");
    scanf("%lf",&x);
    if(x<0){
        y=pow(x,5)+2*x+1/x;
    }
    else{
        y=sqrt(x);
    }
    printf("y=f(%lf)=%.2f",x,y);
    return 0;
}
