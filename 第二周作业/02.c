#include <stdio.h>
int main(void)
{
    int a,b,c,d,e;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a/1000
    e=a%10
    c=(a-1000*b)/100
    d=(a-1000*b-100*c)/10
    printf("The encrypted number is %d%d%d%d",(d＋9)/10,(e＋9)/10,(b＋9)10,(c＋9)/10);
    return 0;
}
