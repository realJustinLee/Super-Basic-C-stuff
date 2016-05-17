#include <stdio.h>
int main(void){
    int i,n;
    double ave=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int mem[n];
    for (i = 0;  i<n ; i++) {
        scanf("%d",&mem[i]);
    }
    for (i = 0; i <n ; i++) {
        ave=ave+mem[i];
    }
    ave=ave/n;
    printf("Average=%.2f",ave);
    return 0;
}