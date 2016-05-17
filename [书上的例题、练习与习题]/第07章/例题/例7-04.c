#include <stdio.h>
int main(void){
    int i,index=0,n,temp;
    int a[10];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    for (i = 1; i <n ; i++) {
        if (a[i]<a[index]){
            index=i;
        }
    }
    printf("min is %d\tsub is %d\n",a[index],index);
    temp=a[index];
    a[index]=a[0];
    a[0]=temp;
    for (i = 0; i <n ; i++) {
        printf("%d",a[i]);
    }
    return 0;
}
