#include <stdio.h>
int main(void){
    int n,i,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+i;
    }
    printf("sum of numbers from 1 to %d is %d",n,sum);
    return 0;
}
