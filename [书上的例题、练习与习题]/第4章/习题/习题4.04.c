#include <stdio.h>
double fbnq(int n){
    double i,x1=1,x2=1,x=1;
    if (n==1||n==2){
        x=1;
    }
    else{
        for (i = 3; i <=n ; i++) {
            x=x1+x2;
            x1=x2;
            x2=x;
        }
    }
    return x;
}
int main(void){
    int n,i;
    double sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+fbnq(i+2)/fbnq(i+1);
    }
    printf("sum=%lf",sum);
}
