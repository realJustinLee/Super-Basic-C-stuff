#include <stdio.h>
int main(void){
    int i,j,col,row,i1=0,i2=0;
    printf("Enter col,row");
    scanf("%d%d",&col,&row);
    int a[col][row];
    printf("Enter %d integers: ",col*row);
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            if (a[i1][i2]<a[i][j]){
                i1=i;
                i2=j;
            }
        }
    }
    printf("Max=%d",a[i1][i2]);
    return 0;
}
