#include <stdio.h>
#include <math.h>
int prime(int a){
    int i;
    for (i = 2; i <= a/2 ; i++)
        if (a%i==0)
            break;
    if (i>a/2&&a!=1)
        return 1;
    else
        return 0;
}
int main(void){
    int a,m,n,count=0,sum=0;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    for (a = m; a <=n ; a++) {
        if (prime(a)==1){
            count++;
            sum=sum+a;
        }
    }
    printf("count=%d, sum=%d",count,sum);
    return 0;
}
