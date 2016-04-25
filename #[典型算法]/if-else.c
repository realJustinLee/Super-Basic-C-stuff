#include <stdio.h>
int main(void)
{
    int x,y;
    scanf("%d",&x);
    if (x>5){
        y=x;
    }
    else{
        y=-x;
    }
    printf("%d",y);
    return 0;
}
