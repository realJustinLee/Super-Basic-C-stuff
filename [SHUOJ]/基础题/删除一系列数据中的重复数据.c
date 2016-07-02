#include <stdio.h>
int count(int *arr){
    int i,flag=1;
    char ch;
    for (i = 0;flag && scanf("%d%c",arr+i,&ch)==2; i++) {
        flag=(ch!='\n');
    }
    return i;
}
void del(int *arr){
    int i,j,k;
    for (i = 0;arr[i]!='\0'; i++) {
        for (j = i+1;arr[j]!='\0'; j++) {
            if (arr[i]==arr[j]){
                for (k = j;arr[k]!=0; k++) {
                    arr[k]=arr[k+1];
                }
                j--;
            }
        }
    }
    for (i = 0;arr[i]!='\0'; i++) {
        printf(" %d",arr[i]);
    }
    printf("\n");
}
int main(void){
    int arr[65536];
    int k=0,n=0;
    while ((n=count(arr))!=0){
        ++k;
        printf("Case %d:",k);
        del(arr);
    }
    return 0;
}
