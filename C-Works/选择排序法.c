#include <stdio.h>
int main(void){
    int i,index,k,n,temp;
    int a[10];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    for (k = 0; k <n-1 ; k++) {
        index=k;
        for (i = k+1; i <n ; i++) {
            if (a[i]<a[index]){
                index=i;
            }
        }
        temp=a[index];
        a[index]=a[k];
        a[k]=temp;
    }
    printf("After sorted: ");
    for (i = 0; i <n ; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
