#include <stdio.h>
int main(void){
    int i,m,n,pro1=1,pro2=1;
    printf("Enter m,n: ");
    scanf("%d%d",&m,&n);
    for (i = 1; i <=m ; i++) {
        pro1=pro1*i;
    }
    for (i = 1; i <=n ; i++) {
        pro2=pro2*i;
    }
    printf("%d!=%d!=%d",m,n,pro1+pro2);
    return 0;
}
