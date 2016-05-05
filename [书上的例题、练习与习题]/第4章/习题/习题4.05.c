#include <stdio.h>
int main(void){
    int a,temp,i,sum=0,n;
    printf("Enter a,n: ");
    scanf("%d%d",&a,&n);
    temp=a;
    for (i = 1; i <=n ; i++) {
        sum=sum+temp;
        temp=temp*10+a;
    }
    printf("sum=%d",sum);
    return 0;
}
