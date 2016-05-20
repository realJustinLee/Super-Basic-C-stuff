#include <stdio.h>
void sort(int a[],int n);
int main(void){
    int n,i;
    printf("Input n:");
    scanf("%d",&n);
    int a[n];
    printf("Input array of %d integers:",n);
    for (i = 0; i <n ; i++) {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("After sorted the array is:");
    for (i = 0; i <n ; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
void sort(int a[],int n){
    int index=0,i,j,temp;
    for (j = 0; j<n-1 ; j++) {
        index=j;
        for (i = j+1; i <n ; i++) {
            if (a[i]<a[index]){
                index=i;
            }
        }
        temp=a[j];
        a[j]=a[index];
        a[index]=temp;
    }
}

