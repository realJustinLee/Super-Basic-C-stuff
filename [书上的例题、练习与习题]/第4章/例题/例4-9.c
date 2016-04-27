#include <stdio.h>
int main(void){
    int m;
    printf("Enter m: ");
    scanf("%d",&m);
    while (m!=0){
        printf("%d",m%10);
        m=m/10;
    }
    return 0;
}
