#include <stdio.h>
int main(void){
    double m,n,i,res=0;
    printf("Enter m,n: ");
    scanf("%lf%lf",&m,&n);
    for (i = m; i <=n ; i++) {
        res=res+i*i+1.0/i;
    }
    printf("%.2f",res);
    return 0;
}
