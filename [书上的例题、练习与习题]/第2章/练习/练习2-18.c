#include <stdio.h>
#include <math.h>
int main(void){
    int i,n;
    double result;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = 0; i <=n ; i++) {
        result=pow(3,i);
        printf("pow(3,%d)=%0.f\n",i,result);
    }
    return 0;
}
