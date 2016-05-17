#include <stdio.h>
int main (void){
    int fn(int a,int n);
    int a,n,i,sum=0;
    printf("Enter a,n: ");
    scanf("%d%d",&a,&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+fn(a,i);
    }
    printf("sum=%d",sum);
    return 0;
}

int fn(int a,int n){
    int i,res=a;
    for (i = 0; i < n-1; ++i) {
        res=res*10+a;
    }
    return  res;
}

