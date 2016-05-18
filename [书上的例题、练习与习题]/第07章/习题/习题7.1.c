#include <stdio.h>
int main(void){
    int n,i,index=0,temp;
    printf("Input n: ");
    scanf("%d",&n);
    int mem[n];
    printf("Enter a string: ");
    for (i = 0; i <n ; i++) {
        scanf("%d",&mem[i]);
    }
    mem[i]='\0';
    for (i = 0; i <n ; i++) {
        if (mem[index]>=mem[i]){
            index=i;
        }
    }
    temp=mem[0];
    mem[0]=mem[index];
    mem[index]=temp;
    for (i = 0; i <n ; i++) {
        if (mem[index]<=mem[i]){
            index=i;
        }
    }
    temp=mem[n-1];
    mem[n-1]=mem[index];
    mem[index]=temp;
    for (i = 0; i <n ; i++) {
        printf("%d ",mem[i]);
    }
    return 0;
}