#include <stdio.h>
#include <math.h>
double fact(int n){
    double fact=1;
    int i;
    for (i = 1; i <=n ; i++) {
        fact=fact*i;
    }
    return fact;
}
int main(void){
    int x,n,i=1;
    double t,sum=0;
    printf("Enter x,n: ");
    scanf("%d%d",&x,&n);
    do{
        t=pow(x,i)/fact(i);
        sum=sum+t;
        i++;
    }while (t>pow(0.1,n));
    printf("sum=%lf",sum);
    return 0;
}