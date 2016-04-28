#include <stdio.h>
int main(void){
    double i,x1=1,x2=1,x,n;
    printf("Enter n: ");
    scanf("%lf",&n);
    printf("%0.f %0.f ",x1,x2);
    for (i = 3; i <=n ; i++) {
        x=x1+x2;
        x1=x2;
        x2=x;
        printf("%0.f ",x);
    }
    return 0;
}
