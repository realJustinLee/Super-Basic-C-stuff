#include <stdio.h>
int main(void){
    int i,m;
    printf("Input m:");
    scanf("%d",&m);
    for (i = 2; i <= m/2 ; i++)
        if (m%i==0)
            break;
    if (i>m/2&&m!=1)
        printf("%d is a prime number.",m);
    else
        printf("%d is not a prime number.",m);
    return 0;
}
