#include <stdio.h>
int main(void){
    int m,n,i,j,k=0;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    for (i=m;i<=n;i++){
        for (j=2;j<=i/2;j++){
            if (i%j==0){
                break;
            }
        }
        if (j>i/2&&i!=1){
            printf("%4d",i);
            k++;
            if (k%8==0){
                printf("\n");

            }
        }
    }
    return 0;
}
