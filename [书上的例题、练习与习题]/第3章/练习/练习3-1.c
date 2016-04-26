#include <stdio.h>
int main(void){
    double x,y;
    printf("Enter x: ");
    scanf("%lf",&x);
    if (x<0){
        y=-1;
    }
    else if(x==0){
        y=0;
    }
    else{
        y=1;
    }
    printf("f(%.2f)=%.2f",x,y);
    return 0;
}
