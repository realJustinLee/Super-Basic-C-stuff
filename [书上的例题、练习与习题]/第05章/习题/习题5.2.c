#include <stdio.h>
int main(void){
    int even(int n);
    int n,sum=0;
    printf("Enter numbers: ");
    scanf("%d",&n);
    while (n>0){
        if (!even(n)){
            sum=sum+n;
        }
        scanf("%d",&n);
    }
    printf("sum=%d",sum);
    return 0;
}
int even(int n){
    if (n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
