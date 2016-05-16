#include <stdio.h>
int sqrt(int x){
    int y;
    if (x>0){
        y=1;
    }
    else if (x==0){
        y=0;
    }
    else {
        y=-1;
    }
    return y;
}
int main(void){
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("sign(%d)=%d",x,sqrt(x));
    return 0;
}
