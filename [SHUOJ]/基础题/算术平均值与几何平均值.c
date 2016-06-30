#include <stdio.h>
#include <math.h>
int count(double *arr){
    int i,flag=1;
    char ch;
    for (i = 0;flag && scanf("%lf%c",arr+i,&ch)==2; i++) {
        flag=(ch!='\n');
    }
    return i;
}
double jhpj(double *arr,int n){
    double powe=1;
    int i;
    for (i = 0; i <n ; i++) {
        powe *= arr[i];
    }
    return ((powe>0)?1:-1)*pow(fabs(powe),1.0/n);
}
double sspj(double *arr,int n){
    double sum=0;
    int i;
    for (i = 0; i <n ; i++) {
        sum += arr[i];
    }
    return sum/n;
}
int main(void){
    int i=0,n;
    const int N=10;
    double tmp;
    double arr[N];
    while ((n=count(arr))!=0){
        tmp=jhpj(arr,n);
        ++i;
        if ((tmp<0)&&(n%2==0)){
            printf("Case %d: %.1f, None\n",i,sspj(arr,n));
        }
        else{
            printf("Case %d: %.1f, %.1f\n",i,sspj(arr,n),tmp);
        }
    }
    return 0;
}

