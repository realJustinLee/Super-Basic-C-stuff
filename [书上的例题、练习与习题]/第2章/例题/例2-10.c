#include <stdio.h>
#include <math.h>
int main(void){
    int n,i;
    double power;
    printf("Enter n:");
    scanf("%d",&n);
    for (i = 0; i <=n ; i++) {
        power=pow(2,i);
        printf("pow(2,%d)=%.0f\n",i,power);
    }
    return 0;
}
