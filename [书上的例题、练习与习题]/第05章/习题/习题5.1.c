#include <stdio.h>
int main(void){
    int sign(int x);
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("f(%d)=%d",x,sign(x));
    return 0;
}
int sign(int x){
    if(x>0){
        return 1;
    }
    else if(x<0){
        return -1;
    }
    else{
        return 0;
    }
}