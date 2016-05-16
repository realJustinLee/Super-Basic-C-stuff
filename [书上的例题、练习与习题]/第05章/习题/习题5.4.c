#include <stdio.h>
#include <math.h>
int main(void){
    int prime(int m);
    int m,n,i,sum=0,count=0;
    printf("Enter m,n:");
    scanf("%d%d",&m,&n);
    for (i = m; i <=n ; i++) {
        if (prime(i)){
            sum=sum+i;
            count++;
        }
    }
    printf("sum=%d,count=%d",sum,count);
    return 0;
}

int prime(int m){
    int i;
    for (i = 2; i <= sqrt(m) ; i++)
        if (m%i==0)
            break;
    if (i>sqrt(m)&&m!=1)
        return 1;
    else
        return 0;
}
