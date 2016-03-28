#include <stdio.h>
int main(void)
{
    int a,b,c,d,e,f,g;
    printf("Enter time1:");
    scanf("%d",&a);
    printf("Enter time2:");
    scanf("%d",&b);
    c=a%100+(a/100)*60;
    d=b%100+(b/100)*60;
    e=d-c;
    f=e/60;
    g=e%60;
    printf("The train journey time is %d hours %d minutes",f,g);
    return 0;
}