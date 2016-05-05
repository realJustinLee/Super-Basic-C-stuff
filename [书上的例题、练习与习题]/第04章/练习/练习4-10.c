#include <stdio.h>
int main(void){
    int min=0,n,cj,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter mark: ");
    scanf("%d",&cj);
    min=cj;
    for (i = 1; i <n; i++) {
        scanf("%d",&cj);
        if (cj<min){
            min=cj;
        }
    }
    printf("min=%d",min);
    return 0;
}
