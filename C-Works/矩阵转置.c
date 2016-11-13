#include <stdio.h>
int main(void){
    int i,j,col,row,temp;
    printf("Enter col,row");
    scanf("%d%d",&col,&row);
    int a[col][row];
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            a[i][j]=i*col+j+1;
        }
    }
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            if (i<=j){
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }

        }
    }
    for (i = 0; i <col ; i++) {
        for (j = 0; j <row ; j++) {
            printf("%4d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
