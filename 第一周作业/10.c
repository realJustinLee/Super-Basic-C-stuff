#include <stdio.h>
int main(void)
{
    int a,b;
    double c,d;
    printf("Enter num1:");
    scanf("%d",&a);
    c=a;
    printf("Enter num2:");
    scanf("%d",&b);
    d=b;
    printf("%d+%d=%d\n""%d-%d=%d\n""%d*%d=%d\n""%.0f/%.0f=%.2f\n""%d%%%d=%d",a,b,a+b,a,b,a-b,a,b,a*b,c,d,c/d,a,b,a%b);
    return 0;
}