#include <stdio.h>
int main(void){
    int m=1,sum=0;
    printf("Enter numbers: ");
    while (m>0){
        scanf("%d",&m);
        if (m%2==0){
            sum=sum+m;
        }
    }
    printf("sum=%d",sum);
    return 0;
}
