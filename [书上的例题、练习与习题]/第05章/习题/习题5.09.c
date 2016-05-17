#include <stdio.h>
#include <math.h>
int main(void){
    double is(int number);
    int m,n,i;
    printf("Enter m,n: ");
    scanf("%d%d",&m,&n);
    for (i = m; i <=n ; i++) {
        if (i==is(i)){
            printf("%d ",i);
        }
    }
    return 0;
}

double is(int number){
    double sum=0,wei;
    while (number!=0){
        wei=number%10;
        sum=sum+pow(wei,3);
        number=number/10;
    }
    return sum;
}
