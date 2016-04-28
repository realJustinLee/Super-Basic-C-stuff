#include <stdio.h>
int main(void){
    int c,w,m;
    for (m = 0; m <=45 ; m++) {
        for (w = 0; w <=45 ; w++) {
            for (c = 0; c <=45 ; c++) {
                if (m+w+c==45&&3*m+2*w+c*0.5==45){
                    printf("men=%d,women=%d,children=%d\n",m,w,c);
                }
            }
        }
    }
    return 0;
}