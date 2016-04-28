#include <stdio.h>
int main(void){
    int max=0,cj=0;
    printf("Enter mark: ");
    while (cj>=0){
        scanf("%d",&cj);
        if (cj>max){
            max=cj;
        }
    }
    printf("max=%d",max);
    return 0;
}
