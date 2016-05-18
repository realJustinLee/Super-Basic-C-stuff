#include <stdio.h>
int main(void){
    int n,i,j,sum;
    printf("Enter n: ");
    scanf("%d",&n);
    int mem[n][n];
    printf("Enter a matrix: ");
    for (i = 0; i <n ; i++) {
        for (j = 0; j <n ; j++) {
            scanf("%d",&mem[i][j]);
        }
    }
    for (i = 0; i <n ; i++) {
        sum=0;
        for (j = 0; j <n ; j++) {
            sum=sum+mem[i][j];
        }
        printf("line %d sum=%d\n",i+1,sum);
    }
    return 0;
}
