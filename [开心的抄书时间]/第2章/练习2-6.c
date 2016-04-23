#include <stdio.h>
int main(void){
    int t;
    double h;
    printf("Input time: ");
    scanf("%d",&t);
    h=0.5*10*t*t;
    printf("h=%.2f",h);
    return 0;
}
