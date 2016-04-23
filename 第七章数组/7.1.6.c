#include <stdio.h>
int main(void){
    int n,i,j,b,index;
    printf("Input n: ");
    scanf("%d",&n);
    int a[n];
    printf("Input %d integers: ",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    for (i = 0; i <n-1 ; i++) {
        index=i;
        for (j = i+1; j <n ; j++) {
            if (a[j]>a[index]){
                index=j;
            }
        }
        b=a[index];
        a[index]=a[i];
        a[i]=b;
    }
    printf("After sorted: ");
    for (i = 0; i <n ; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
