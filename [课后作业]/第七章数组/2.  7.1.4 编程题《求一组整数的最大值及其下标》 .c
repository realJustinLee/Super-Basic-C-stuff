#include <stdio.h>
int main(void){
    int n,i,M,index=0;
    printf("Input n: ");
    scanf("%d",&n);
    int a[n];
    printf("Input %d integers: ",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    for (i = 1; i <n ; i++) {
        if (a[i]>a[index]){
            index=i;
        }
    }
    M=a[index];
    printf("max=%d, index=%d",M,index);
    return 0;
}
