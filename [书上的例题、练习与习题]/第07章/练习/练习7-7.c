#include <stdio.h>
int main(void){
    int n,i,j,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int mem[n][n];
    for (i = 0; i <n ; i++) {
        for (j = 0; j <n; j++) {
            scanf("%d",&mem[i][j]);
        }
    }
    for (i = 0; i <n ; i++) {
        for (j = 0; j <n; j++) {
            sum=sum+mem[i][j];
        }
    }
    for (i = 0; i <n; i++) {
        sum=sum-mem[i][n-1-i];
    }
    for (i = 1; i <n ; i++) {
        sum=sum-mem[i][n-1];
    }
    for (j = 1; j <n-1 ; j++) {
        sum=sum-mem[n-1][j];
    }
    printf("Sum=%d",sum);
    return 0;
}
