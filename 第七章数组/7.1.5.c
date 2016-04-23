#include <stdio.h>
int main(void){
    int n,i,M,m,index=0;
    printf("Input n: ");
    scanf("%d",&n);
    int a[n];
    printf("Input %d integers: ",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    for (i = 1; i <n ; i++) {
        if (a[i]<a[index]){
            index=i;
        }
    }
    m=a[index];
    a[index]=a[0];
    a[0]=m;
    index=0;
    for (i = 1; i <n ; i++) {
        if (a[i]>a[index]){
            index=i;
        }
    }
    M=a[index];
    a[index]=a[n-1];
    a[n-1]=M;
    printf("After swapped: ");
    for (i = 0; i <n ; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
