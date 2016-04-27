#include <stdio.h>
#include <math.h>
int main(void){
    double pi=0,fm=1,fh=1;
    while (fabs(1.0/fm)>=0.0000001){
        pi=pi+fh*1.0/fm;
        fh=-fh;
        fm=fm+2;
    }
    printf("pi=%lf",4*pi);
    return 0;
}