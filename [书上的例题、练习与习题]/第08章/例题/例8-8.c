#include <stdio.h>
void reverse(int p[],int n){
    int i,j,t;
    for (i = 0,j=n-1; i <j ; i++,j--) {
        t=p[i];
        p[i]=p[j];
        p[j]=t;
    }
}
int main(void){
    int i,a[10],n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter %d integers :",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    for (i = 0; i <n ; i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}
