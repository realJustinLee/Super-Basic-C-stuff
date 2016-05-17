#include <stdio.h>
int main(void){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int low,mid,high,n=10,x;
    printf("Enter x: ");
    scanf("%d",&x);
    low=0;high=n-1;
    while (low<=high){
        mid=(low+high)/2;
        if (x==a[mid]){
            break;
        }
        else if (x<a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(low<=high){
        printf("Index is %d \n",mid);
    }
    else{
        printf("Not found.");
    }
    return 0;
}
