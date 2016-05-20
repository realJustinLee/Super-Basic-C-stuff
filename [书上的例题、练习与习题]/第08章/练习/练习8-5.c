#include <stdio.h>
int main(void){
    void choose (int a[],int n);
    int n,a[80],i;
    printf("Enter n(n<=80): ");
    scanf("%d",&n);
    printf("Enter a[%d]: ",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    choose(a,n);
    printf("After sorted,a[%d]=",n);
    for (i = 0; i <n ; i++) {
        printf("%3d",a[i]);
    }
    return 0;
}
void choose (int a[],int n){
    int i,j,t,index;
    for (j = 0; j <n-1 ; j++) {
        index=j;
        for (i = j+1; i <n ; i++) {
            if (a[i]<a[index]){
                index=i;
            }
        }
        t=a[index];
        a[index]=a[j];
        a[j]=t;
    }
}
