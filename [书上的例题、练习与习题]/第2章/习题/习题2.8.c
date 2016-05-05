#include <stdio.h>
double fact(double i){
    double j,res=1;
    for (j = 1; j <=i ; j++) {
        res=res*j;
    }
    return res;
}
int main(void){
    double n,i,e=0;
    printf("Enter e: ");
    scanf("%lf",&n);
    for (i = 0; i <=n ; i++) {
        e=e+fact(i);
    }
    printf("e=%.0f",e);
    return 0;
}
