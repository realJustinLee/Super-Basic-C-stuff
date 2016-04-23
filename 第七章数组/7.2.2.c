#include <stdio.h>
int main(void){
    int n,i,j,sum=0;
    printf("Input n: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Input array: ");
    for (j = 0; j <n ; j++) {
        for (i = 0; i <n ; i++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i <n ; i++) {
        for (j = 0; j <n ; j++) {
            sum=sum+a[i][j];
        }
    }
    for (i = 0; i <n ; i++) {
        j=3;
        sum=sum-a[i][j];
    }
    for (j = 0; j <n-1 ; j++) {
        i=3;
        sum=sum-a[i][j];
    }
    for (i = 1; i <n-1 ; i++) {
        j=3-i;
        sum=sum-a[i][j];
    }
    printf("sum=%d",sum);
    return 0;
}
