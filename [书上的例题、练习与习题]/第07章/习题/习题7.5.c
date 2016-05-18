#include <stdio.h>
int main(void){
    int n,i,j,index1,index2=0,temp=-1;
    printf("Enter n: ");
    scanf("%d",&n);
    int mem[n][n];
    printf("Enter a matrix: ");
    for (i = 0; i <n ; i++) {
        for (j = 0; j <n ; j++) {
            scanf("%d",&mem[i][j]);
        }
    }
    for (index1 = 0; index1 <n ; index1++) {
        for (j = 0; j <n ; j++) {
            if (mem[index1][index2]<mem[index1][j]){
                index2=j;
            }
        }
        for (i = 0; i <n ; i++) {
            if (mem[index1][index2]>mem[i][index2]){
                temp=i;
            }
        }
        if (temp==index1)break;
    }
    if (temp==index1) {
        printf("Yes:mem[%d][%d]", index1, index2);
    }
    else{
        printf("No");
    }
    return 0;
}
