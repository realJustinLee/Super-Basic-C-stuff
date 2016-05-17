#include <stdio.h>
int main(void){
    int i,x,n=0;
    int mem[5];
    for (i = 0; i <5 ; i++) {
        scanf("%d",&mem[i]);
    }
    printf("Enter x: ");
    scanf("%d",&x);
    for (i = 0; i <5 ; i++) {
        if(x==mem[i]){
            printf("%d ",i);
            n=1;
        }
    }
    if (!n){
        printf("Not Found");
    }
    return 0;
}
