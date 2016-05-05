#include <stdio.h>
int max(int a,int b){
    if (a>=b){
        return a;
    }
    else{
        return b;
    }
}
int main(void){
    int a,b;
    printf("Input a,b: ");
    scanf("%d%d",&a,&b);
    printf("max=%d",max(a,b));
    return 0;
}
