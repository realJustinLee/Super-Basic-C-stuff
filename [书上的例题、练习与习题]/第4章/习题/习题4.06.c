#include <stdio.h>
int main(void){
    int m1,m2,m5,sol=0;
    for (m5 = 1; m5 <=20 ; m5++) {
        for (m2 = 1; m2 <=50 ; m2++) {
            for (m1 = 1; m1 <= 100; m1++) {
                if (m1+2*m2+5*m5==100){
                    sol++;
                    printf("Solution %d :\n"
                                   "  m1=%d\n"
                                   "  m2=%d\n"
                                   "  m5=%d\n",sol,m1,m2,m5);
                }
            }
        }
    }
    printf("Total solution=%d",sol);
    return 0;
}
