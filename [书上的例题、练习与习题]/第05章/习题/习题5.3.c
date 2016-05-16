#include <stdio.h>
#include <math.h>
int main(void){
    double funcos(double e, double x);
    double e,x;
    printf("Enter x,e: ");
    scanf("%lf%lf",&x,&e);
    printf("cos(%lf)=%lf +/- %lf",x,funcos(e,x),e);
    return 0;
}

double funcos(double e, double x){
    double factorial(int n);
    double fz,fm,sum=0;
    int i=0;
    do{
        fz=pow(x,i);
        fm=factorial(i);
        sum=sum+fz/fm;
        i++;
    }while ((fz/fm)>=e);
    return sum;
}

double factorial(int n)
{
    double i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
