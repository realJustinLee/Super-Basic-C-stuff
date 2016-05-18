#include <stdio.h>
int main(void){
    int n,i,j,index=0,temp;
    printf("Input n: ");
    scanf("%d",&n);
    int mem[n];
    printf("Enter a string: ");
    for (i = 0; i <n ; i++) {
        scanf("%d",&mem[i]);
    }
    mem[i]='\0';
    for (j = 0; j <n-1 ; j++) {
        index=j;
        for (i = j+1; i <n ; i++) {
            if (mem[index]<mem[i]){
                index=i;
            }
        }
        temp=mem[j];
        mem[j]=mem[index];
        mem[index]=temp;
    }
    printf("After sorted: ");
    for (i = 0; i <n ; i++) {
        printf("%d ",mem[i]);
    }
    return 0;
}