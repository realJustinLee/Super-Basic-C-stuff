#include <stdio.h>
#include <math.h>
int ss(int a){
    int i;
    for (i = 2; i <=sqrt(a) ; i++) {
        if (a%i==0)break;
    }
    if (i>sqrt(a)&&a!=1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(void){
    int m,n,i,j,k=0;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    for (i=m;i<=n;i++){
        if (ss(i)){
            printf("%4d",i);
            k++;
            if (k%10==0){
                printf("\n");

            }
        }
    }
    return 0;
}
