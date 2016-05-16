#include <stdio.h>
#include <math.h>
int main(void){
    double h,n,d,h2,i;
    printf("Input height: ");
    scanf("%lf",&h);
    printf("Input n: ");
    scanf("%lf",&n);
    d=h;
    for (i = 1; i <=n ; i++) {
        d=d+2*h/pow(2,i);
    }
    h2=h*pow(0.5,n);
    printf("distance=%.1f\nheight=%.1f",d,h2);
    return 0;
}
