#include <stdio.h>
int main(void){
    int i,j,col,row;
    printf("Enter col,row");
    scanf("%d%d",&col,&row);
    int a[col][row];
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            a[i][j]=i+j;
        }
    }
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
