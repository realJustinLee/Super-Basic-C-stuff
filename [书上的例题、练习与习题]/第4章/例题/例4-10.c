#include <stdio.h>
#include <math.h>
int main(void){
    int count=0,i,m,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (m = 2; m <=n ; m++) {
        for (i = 2; i <=sqrt(m) ; i++) {
            if (m%i==0)break;
        }
        if (i>sqrt(m)){
            printf("%6d ",m);
            count++;
            if (count%10==0){
                printf("\n");
            }
        }
    }
    return 0;
}