#include <stdio.h>
double fact(int i){
    double j,fact=1;
    for (j = 1; j <=i ; j++) {
        fact=fact*j;
    }
    return fact;
}
int main(void){
    int i,n;
    double result;
    printf("Enter n:");
    scanf("%d",&n);
    for (i = 0; i <=n ; i++) {
        result=fact(i);
        printf("%d!=%0.f\n",i,result);
    }
    return 0;
}
