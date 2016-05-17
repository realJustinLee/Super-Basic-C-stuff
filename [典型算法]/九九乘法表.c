#include <stdio.h>
int main(void){
    int tab[10][10]={
            {0,1,2,3,4,5,6,7,8,9},
            {1},
            {2},
            {3},
            {4},
            {5},
            {6},
            {7},
            {8},
            {9},
    };
    int i,j;
    for (i = 1; i <10 ; i++) {
        for (j = 1; j <10 ; j++) {
            tab[i][j]=i*j;
        }
    }
    for (i = 0; i <10 ; i++) {
        for (j = 0; j <10 ; j++) {
            printf("%3d ",tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
