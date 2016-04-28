#include <stdio.h>
int main(void){
    double e=0,n,i,j,fm;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i = 0; i <=n ; i++) {
        fm=1;
        for (j = 1; j <=i ; j++) {
            fm=fm*j;
        }
        e=e+1/fm;
    }
    printf("e=%lf",e);
    return 0;
}