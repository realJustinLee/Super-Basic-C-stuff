#include <stdio.h>
#include <math.h>
int main(void){
    double x,y=0;
    printf("Enter x: ");
    scanf("%lf",&x);
    if(x!=0){
        y=1/x;
    }
    printf("y=f(%lf)=%.2f",x,y);
    return 0;
}
