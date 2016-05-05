#include <stdio.h>
int main(void){
    int sum=1,i;
    for (i = 9; i >0 ; i--) {
        sum=2*(sum+1);
    }
    printf("sum=%d",sum);
    return 0;
}
