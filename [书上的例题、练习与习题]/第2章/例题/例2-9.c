#include <stdio.h>
int main(void){
    int i,n,pro=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++) {
        pro=pro*i;
    }
    printf("%d!=%d",n,pro);
    return 0;
}
