#include <stdio.h>
#include <math.h>
double cal(int n,double t){
    double th;
    th=t*pow(2.0,n);
    return th;
}
int count(double t){
    int n=1;
    while (cal(n,t)<=8844430.0){
        n++;
    }
    return n;
}
int main(void){
    double t;
    int i=0,n;
    while (scanf("%lf",&t)==1){
        n=count(t);
        printf("Case %d: %.1f, %d, %.1f\n",++i,t,n,cal(n,t)/1000);
    }
    return 0;
}
