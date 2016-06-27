#include <stdio.h>
int main(void){
    int n,i=0,j=0;
    double Max;
    while (scanf("%d",&n)!=EOF){
        double str[n];
        for (i = 0; i <n ; i++) {
            scanf("%lf",&str[i]);
        }
        Max=str[0];
        for (i = 1; i <n ; i++) {
            Max=(str[i]>Max)?str[i]:Max;
        }
        j++;
        printf("Case %d: %.1f\n",j,Max);
    }
    return 0;
}
