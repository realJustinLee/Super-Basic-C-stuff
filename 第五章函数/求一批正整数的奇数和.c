#include <stdio.h>
int even(int n){
    if (n%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(void){
    int sum=0,n=1;
    printf("Input integers: ");
    while (n>0){
        scanf("%d",&n);
        if (even(n)==1){
            sum=sum+n;
        }
    }

    printf("The sum of the odd numbers is %d",sum);
    return 0;
}
