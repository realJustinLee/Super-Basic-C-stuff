#include <stdio.h>
int main(void){
    int a,b,c,n,i,j,k,s=0;
    printf("Input a, n: ");
    scanf("%d%d",&a,&n);
    for (i = 1; i <= n ; i++) {
        b=0;
        for (j = 0; j <i ; j++) {
            c=1;
            for (k = 0; k <j ; k++) {           //此题中pow函数存在bug
                c=c*10;
            }
            b=b+c;
        }
        s=s+a*b;
    }
    printf("s=%d",s);
    return 0;
}
