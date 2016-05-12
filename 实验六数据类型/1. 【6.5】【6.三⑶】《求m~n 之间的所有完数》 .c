#include <stdio.h>
int factorsum(int n){
    int i,sum=1;
    for ( i = 2; i <n; i++) {
        if (n%i==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main(void){
    int m,n,i;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    for ( i=m;  i<=n ; i++) {
        if(i==factorsum(i)){
            printf("%5d",i);
        }
    }
    return 0;
}
