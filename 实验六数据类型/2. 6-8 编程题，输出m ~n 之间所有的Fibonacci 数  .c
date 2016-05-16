#include <stdio.h>
double fbnq(int n){
    double i,x1=1,x2=1,x=1;
    for (i = 3; i <=n ; i++) {
        x=x1+x2;
        x1=x2;
        x2=x;
    }
    return x;
}
int main(void){
    int m,n,i=0;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    do{
        i++;
    }while (fbnq(i)<m);
    while (fbnq(i)<=n){
        printf("%.0f ",fbnq(i));
        i++;
    }
    return 0;
}
