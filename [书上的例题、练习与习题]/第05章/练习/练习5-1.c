#include <stdio.h>
int sum(int a,int b){
    int i,sum=0;
    for (i = a; i <=b ; i++) {
        sum=sum+i;
    }
    return sum;
}
int main(void){
    int a,b;
    printf("Input a,b: ");
    scanf("%d%d",&a,&b);
    printf("sum=%d",sum(a,b));
    return 0;
}