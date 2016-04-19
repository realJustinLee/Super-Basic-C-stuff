#include <stdio.h>
int main(void)
{
    int i,j,m,n,a=1,b=1;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = 1; i <= m; i++) {
        a=a*i;
    }
    for (j = 1; j <= n; j++) {
        b=b*j;
    }
    printf("%d!+%d!=%d",m,n,a+b);
    return 0;
}
