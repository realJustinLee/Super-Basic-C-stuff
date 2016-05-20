#include <stdio.h>
int main(void){
    void bubble (int a[],int n);
    int n,a[80],i;
    printf("Enter n(n<=80): ");
    scanf("%d",&n);
    printf("Enter a[%d]: ",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    printf("After sorted,a[%d]=",n);
    for (i = 0; i <n ; i++) {
        printf("%3d",a[i]);
    }
    return 0;
}
void bubble (int a[],int n){
    int i,j,t,f;
    for (i = 1; i <n ; i++) {
        f=1;
        for (j = 0; j <n-i ; j++) {
            if (a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                f=0;
            }
        }
        if(f){
            break;
        }
    }
    printf("Looped for %d times.\n",i);
}
