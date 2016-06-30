#include <stdio.h>
double cal(int a,int n){
    double sum=0,tmp=a;
    while (n){
        sum=sum+tmp;
        tmp=10*tmp+a;
        n--;
    }
    return sum;
}
int main(void){
    int i=0,a,n;
    while (scanf("%d%d",&a,&n)==2){
        printf("Case %d: %.0f\n",++i,cal(a,n));
    }
    return 0;
}