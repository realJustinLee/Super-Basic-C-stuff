#include <stdio.h>
int main(void){
    int w,m;
    for (m = 0; m <=15 ; m++) {
        for (w = 0; w <=25 ; w++) {
            if (3*m+2*w+(45-w-m)*0.5==45){
                printf("men=%d,women=%d,children=%d\n",m,w,45-w-m);
            }
        }
    }
    return 0;
}