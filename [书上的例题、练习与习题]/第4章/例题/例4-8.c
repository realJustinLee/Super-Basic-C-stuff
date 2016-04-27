#include <stdio.h>
int main(void){
    int max=0,n,cj,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter mark: ");
    for (i = 1; i <=n; i++) {
        scanf("%d",&cj);
        if (cj>max){
            max=cj;
        }
    }
    printf("max=%d",max);
    return 0;
}
