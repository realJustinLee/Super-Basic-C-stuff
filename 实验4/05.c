#include <stdio.h>
double jiechen(double i){
    int a,b=1;
    for (a = 1; a <=i ; a++) {
        b=b*a;
    }
    return b;
}
int main(void){
    double n,e=1,i;
    printf("Input n: ");
    scanf("%lf",&n);
    for (i = 1; i <=n ; i++) {
        e=e+1/jiechen(i);
    }
    printf("e=%.4f",e);
    return 0;
}
