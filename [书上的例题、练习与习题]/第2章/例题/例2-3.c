#include <stdio.h>
int main(void)
{
    int f,c;
    printf("fahr=");
    scanf("%d",&f);
    c=5*(f-32)/9;
    printf("fahr=%d,celsius=%d",f,c);
    return 0;
}
