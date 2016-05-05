#include <stdio.h>
#include <math.h>
int pdss(int a){
    int i;
    for (i = 2; i <=sqrt(a) ; i++) {
        if (a%i==0)break;
    }
    if (i>sqrt(a)&&a!=1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(void){
    int i,j,yx,c=0;
    for (i = 6;  i<=100 ; i++) {
        for (j = 2; j <=i ; j++) {
            if (pdss(j)){
                if (pdss(yx=i-j)){
                    printf("%d=%d+%d ",i,j,yx);
                    c++;
                    if (c%5==0){
                        printf("\n");
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
