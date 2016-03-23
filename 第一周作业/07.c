#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/100;
    c=a/10-10*b;
    d=a-100*b-10*c;
    printf("%d %d %d\n",d,c,b);
    return (0);
}