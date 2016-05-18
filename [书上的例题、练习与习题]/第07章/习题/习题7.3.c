#include <stdio.h>
int main(void){
    int n,i,j,flag=1;
    printf("Enter n: ");
    scanf("%d",&n);
    int mem[n][n];
    printf("Enter a matrix: ");
    for (i = 0; i <n ; i++) {
        for (j = 0; j <n ; j++) {
            scanf("%d",&mem[i][j]);
        }
    }
    for (i = 1; i <n ; i++) {
        for (j = 0; j <i ; j++) {
            if (mem[i][j]){
                flag=0;
            }
        }
    }
    if (flag){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
