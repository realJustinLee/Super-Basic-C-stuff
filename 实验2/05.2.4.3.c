#include <stdio.h>
int main(void)
{
    int i,j,m,n,a=1,b=1;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = n-m+1; i <= n; i++) {
        a=a*i;
    }
    for (j = 1; j <= m; j++) {
        b=b*j;
    }
    printf("result=%d",a/b);
    return 0;
}
