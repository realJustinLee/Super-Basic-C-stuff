#include <stdio.h>
int main(void)
{
    int n,u;
    double k=1,i,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    u=3*n-2;
    for (i = 1; i <= u; i=i+3) {
        sum=sum+k/i;
        k=-k;
    }
    printf("sum=%.3f",sum);
    return 0;
}
