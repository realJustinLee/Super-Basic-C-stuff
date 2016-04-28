#include <stdio.h>
int main(void){
    int t=0,i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    if (n<=9){
        for (i = 1; i <=n ; i++) {
            t=10*t+i;
        }
    }
    printf("%d",t);
    return 0;
}
