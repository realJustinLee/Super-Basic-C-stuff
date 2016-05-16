#include <stdio.h>
double fact_s(int n);
int main(void){
    int i,n;
    printf("Input n: ");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++) {
        printf("%3d!=%.0f\n",i,fact_s(i));
    }
    return 0;
}
double fact_s(int n){
    static double f=1;
    f=f*n;
    return(f);
}
