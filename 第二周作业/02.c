#include <stdio.h>
int main(void)
{
    int a,b,c,d,e;
    printf("Enter a number:");
    scanf("%d",&a);
    b=(a/1000+9)%10;
    e=(a%10+9)%10;
    c=((a-1000*b)/100+9)%10;
    d=((a-1000*b-100*c)/10+9)%10;
    printf("The encrypted number is %d%d%d%d",d,e,b,c);
    return 0;
}
