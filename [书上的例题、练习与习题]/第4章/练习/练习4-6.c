#include <stdio.h>
int main(void){
    int i,j,n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++) {
        printf("Enter m: ");
        scanf("%d",&m);
        for (j = 2; j <= m/2 ; j++) {
            if (m%j==0)
                break;
        }
            if (j>m/2&&m!=1)
                printf("%d is a prime number.",m);
            else
                printf("%d is not a prime number.",m);
    }
    return 0;
}
