#include <stdio.h>
int main(void){
    int i,n,temp,temp1;
    printf("Enter n: ");
    scanf("%d",&n);
    int mem[n];
    for (i = 0; i <n ; i++) {
        scanf("%d",&mem[i]);
    }
    for (i = 0; i <n ; i++) {
        temp1=0;
        while(mem[i]) {
            temp=mem[i]%10;
            mem[i]=mem[i]/10;
            temp1=10*temp1+temp;
        }
        mem[i]=temp1;
    }
    for (i = 0; i <n ; i++) {
        printf("%d ",mem[i]);
    }
    return 0;
}
